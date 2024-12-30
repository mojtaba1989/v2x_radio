/**
 * @addtogroup APS_BSM_Tx BSM Tx Module
 * @{
 *
 * @internal
 * 
 */

//------------------------------------------------------------------------------
// Copyright (c) 2024 MTU APSRC Mojtaba Bahramgiri
//-----------------------------------------------------------------------------

//------------------------------------------------------------------------------
// Included headers
//------------------------------------------------------------------------------

#include "aps-bsm-tx.h"
#include "libconfig.h" // used to read configuration file

// v2x-lib includes
#include "asn1defs.h"
#include "debug-levels.h"
#include "dot3-wsmp.h"
#include "j2735-common.h"
#include "J2735_BSM.h"
#include "j2735asn.h"
#include "p1609-tx-msg.h"
#include "udp.h"
#include "util.h"
#include "Vector.h"
#include "Example1609_debug.h"

#include <errno.h>
#include <netinet/in.h>
#include <poll.h>
#include <pthread.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>
#include <sys/types.h>
#include <time.h>
#include <math.h>

//------------------------------------------------------------------------------
// Local Macros & Constants
//------------------------------------------------------------------------------

#define D_LEVEL Example1609_Example1609_APSBSMTx_DebugLevel

#define dbg_printf(f, a...)                                       \
    do {                                                          \
        fprintf(stdout, "%s(%d): " f, __func__, __LINE__, ## a);  \
    } while (0)                                                   \

/// Maximum size of the WSM
// TODO: is this sufficient?
#define APSBSMTx_WSM_BUF_SIZE      (140)

//------------------------------------------------------------------------------
// Local (static) Function Prototypes
//------------------------------------------------------------------------------

static int APSBSMTx_LoadConfig (struct APSBSMTx *pAPSBSMTx,
                              char * pConfigFileName);

static void APSBSMTx_ThreadProc (void *pArg);
static void UDPGPSRx_ThreadProc (void *pArg);

//------------------------------------------------------------------------------
// Local Variables
//------------------------------------------------------------------------------

extern pthread_mutex_t P1609Tx_SendWSM_Mutex;

pthread_mutex_t GPSMutex;


//tUDP_GPS *pUdpGps = NULL;

int GpsFd = -1;

// LPH handle
void *pLPH;

//------------------------------------------------------------------------------
// API Functions
//------------------------------------------------------------------------------


/**
 * @brief Allocate APSBSMTx object, Setup thread and associated data structures
 * @param ppAPSBSMTx pointer to APSBSMTx handle (populated by this function)
 * @param pAttr POSIX thread attributes
 * @param pConfigFileName Configuration filename
 * @return Zero for success or an negative errno
 */
int APSBSMTx_Open (struct APSBSMTx **ppAPSBSMTx,
		   pthread_attr_t *pAttr,
		   char *pConfigFileName)
{
  d_fnstart(D_API, NULL, "(%p, %p, %s)\n",
		    ppAPSBSMTx, pAttr, pConfigFileName);
  int Res;
  struct APSBSMTx *pAPSBSMTx;

  // Create and check the local structure
  pAPSBSMTx = (struct APSBSMTx *) malloc(sizeof(struct APSBSMTx));
  if (pAPSBSMTx == NULL)
  {
    dbg_printf("malloc() = NULL\n");
    Res = -ENOMEM;
    goto Error;
  }
  memset(pAPSBSMTx, 0, sizeof(struct APSBSMTx));



  // Load config settings
  Res = APSBSMTx_LoadConfig(pAPSBSMTx, pConfigFileName);
  if (Res != 0)
  {
    dbg_printf("APSBSMTx_LoadConfig() != 0\n");
    goto Error;
  }

  pthread_mutex_init(&GPSMutex, NULL);

  // Open socket for receiving object data
  if (pAPSBSMTx->Params.SocketCfg.Port!=0)
  {
    GpsFd = UDP_OpenSrvPort((int32_t) pAPSBSMTx->Params.SocketCfg.Port);
    if (GpsFd < 0)
    {
      fprintf(stdout, "Failed to create GPS UDP Rx socket: %d\n", GpsFd);
      fprintf(stdout, "GPS source forced to local\n");
      Res = -ENODEV;
      pAPSBSMTx->Params.SocketCfg.Enabled = false;
    }
    fprintf(stdout, "Create GPS UDP Rx socket: %d\n", GpsFd);
    pAPSBSMTx->Params.SocketCfg.Enabled = true;
  }

  //   LPH reader
  pLPH = LPH_Open();
  if (pLPH == NULL)
  {
    dbg_printf("LPH_Open() == NULL\n");
    Res = -ENODEV;
    goto Error;
  } else {
      d_printf(D_DBG, NULL,"LPH_Open()\n");
  }



  // Assign thread attributes from input param
  pAPSBSMTx->ThreadAttr = *pAttr;

  // Create APSBSMTx thread
  pAPSBSMTx->ThreadState |= APSBSMTx_THREAD_STATE_INIT;
  Res = pthread_create(&pAPSBSMTx->ThreadID,
                       &pAPSBSMTx->ThreadAttr,
                       (void *) APSBSMTx_ThreadProc,
                       pAPSBSMTx);
  if (Res != 0)
  {
    dbg_printf("pthread_create(0 != 0\n");
    // Thread creation error
    pAPSBSMTx->ThreadState = APSBSMTx_THREAD_STATE_NONE;
    goto Error;
  }

  // Create UDP GPS Rx thread
  if (pAPSBSMTx->Params.SocketCfg.Enabled)
    {
      pAPSBSMTx->UDPGPSRx_ThreadState |= APSBSMTx_THREAD_STATE_INIT;
      Res = pthread_create(&pAPSBSMTx->UDPGPSRx_ThreadID,
			   &pAPSBSMTx->ThreadAttr,
			   (void *) UDPGPSRx_ThreadProc,
			   pAPSBSMTx);
      if (Res != 0)
      {
	dbg_printf("pthread_create(0 != 0\n");
	// Thread creation error
	pAPSBSMTx->ThreadState = APSBSMTx_THREAD_STATE_NONE;
	goto Error;
      }
    }

  // Success!
  *ppAPSBSMTx = pAPSBSMTx;
  Res = 0;
  goto Success;

Error:
  dbg_printf("Error!\n");
  *ppAPSBSMTx = NULL;
  APSBSMTx_Close(pAPSBSMTx);
Success:
  dbg_printf("Successfully started the APSBSMTx\n");
  d_fnend(D_API, NULL, "(%p, %p, %s): %d\n",
            ppAPSBSMTx, pAttr, pConfigFileName, Res);
  return Res;
}

/**
 * @brief Stop execution of APSBSMTx, free the thread and its associated resources
 * @param pAPSBSMTx APSBSMTx handle
 */
void APSBSMTx_Close (struct APSBSMTx *pAPSBSMTx)
{
  int Res;

  if (pLPH)
  {
    LPH_Close(pLPH);
    pLPH = NULL;
  }

  (void) pthread_mutex_destroy(&GPSMutex);

  // Catch attempt to close invalid object pointer
  if (pAPSBSMTx == NULL)
  {
    Res = -EINVAL;
    goto Error;
  }

  // Signal thread to terminate
  pAPSBSMTx->ThreadState |= APSBSMTx_THREAD_STATE_STOP;
  // Wait for thread termination
  if (pAPSBSMTx->ThreadState & APSBSMTx_THREAD_STATE_INIT)
    pthread_join(pAPSBSMTx->ThreadID, NULL);

  // Signal thread to terminate
  pAPSBSMTx->UDPGPSRx_ThreadState |= APSBSMTx_THREAD_STATE_STOP;
  // Wait for thread termination
  if (pAPSBSMTx->UDPGPSRx_ThreadState & APSBSMTx_THREAD_STATE_INIT)
    pthread_join(pAPSBSMTx->UDPGPSRx_ThreadID, NULL);

  // Free up allocated config parameters
  pAPSBSMTx->Params.Enabled = false;

  if (pAPSBSMTx->Params.pUDPGPS)
  {
	  free(pAPSBSMTx->Params.pUDPGPS);
  }

  // Success!
  Res = 0;

 Error:
  free(pAPSBSMTx);

  (void)Res;   // value not currently used
  return;
}

/**
 * @brief Prints the statistics from the APSBSMTx object
 * @param pAPSBSMTx APSBSMTx handle
 */
void APSBSMTx_PrintStats (struct APSBSMTx *pAPSBSMTx)
{
  fprintf(stdout, "APSBSMTx: Tx (Okay %8u Fail %8u)\n",
	  pAPSBSMTx->Stats.Tx.Okay, pAPSBSMTx->Stats.Tx.Fail);
}


//------------------------------------------------------------------------------
// Local Functions
//------------------------------------------------------------------------------

/**
 * @brief Load 'SPATTx' parameters from the config file
 * @param pSPAT SPAT transmitter handle
 * @param pConfigFileName Filename of the config file
 * @return Zero for success or a negative errno
 */
static int APSBSMTx_LoadConfig (struct APSBSMTx *pAPSBSMTx,
				char * pConfigFileName)
{
  int Res = -ENOSYS;
  config_t Config;             // configuration object read from config file
  config_t *pConfig;
  config_setting_t *pSetting;  // setting for APSBSM in config file
  int ConfigVal = 0;

  pConfig = &Config;
  config_init(pConfig); // initialise the config object

  // Set defaults
  pAPSBSMTx->Params.Enabled 			= false;
  pAPSBSMTx->Params.ApplInterval 		= APSBSM_CONFIG_VALUE_DEFAULT_INTERVAL;
  pAPSBSMTx->Params.ID 				= htonl(APSBSM_CONFIG_VALUE_DEFAULT_ID);
  pAPSBSMTx->Params.SocketCfg.Port 		= APSBSM_CONFIG_VALUE_DEFAULT_SOCKET_PORT;
  pAPSBSMTx->Params.SocketCfg.MaxAge 		= APSBSM_CONFIG_VALUE_DEFAULT_SOCKET_MAXAGE;
  pAPSBSMTx->Params.SocketCfg.UdpInterval 	= APSBSM_CONFIG_VALUE_DEFAULT_SOCKET_UDPINTERVAL;

  // WSMP defaults
  {
    memset(pAPSBSMTx->Params.WSMP.Tx.DA, 0xFF, 6);
    pAPSBSMTx->Params.WSMP.Tx.Priority   = APSBSM_CONFIG_VALUE_DEFAULT_WSMP_PRIORITY;
    pAPSBSMTx->Params.WSMP.Version       = DOT3_WSMP_VERSION_3;
    pAPSBSMTx->Params.WSMP.ChannelNumber = APSBSM_CONFIG_VALUE_DEFAULT_WSMP_CHANNEL_NUMBER;
    const tdefault_stack *pIni = default_stack_Get();
    pAPSBSMTx->Params.WSMP.ChannelNumber = pIni->ContinuousChanNum;
    default_stack_Release(&pIni);
    pAPSBSMTx->Params.WSMP.DataRate      = APSBSM_CONFIG_VALUE_DEFAULT_WSMP_DATA_RATE;
    pAPSBSMTx->Params.WSMP.TxPower       = APSBSM_CONFIG_VALUE_DEFAULT_WSMP_TX_POWER;
    pAPSBSMTx->Params.WSMP.PSID          = htonl(APSBSM_CONFIG_VALUE_DEFAULT_WSMP_PSID);
    pAPSBSMTx->Params.WSMP.Length        = htons(0);
    pAPSBSMTx->Params.WSMP.HdrExtFlags   = 0x07; // Channel | DataRate | TxPwr
  }

  // Try to read the specified config file into the config object
  if (config_read_file(pConfig, pConfigFileName) != CONFIG_TRUE)
  {
    dbg_printf("Could not open %s\n", pConfigFileName);
    // "libconfig: %s at line %d\n", config_error_text (pConfig),
    Res = -EINVAL;
    goto Error;
  }

  // Get the 'APSBSMTx' Setting
  pSetting = config_lookup(pConfig, APSBSM_CONFIG_PATH_NAME);
  if (pSetting == NULL)
  {
    dbg_printf("config_lookup(%s) failed\n", APSBSM_CONFIG_PATH_NAME);
    Res = -EINVAL;
    goto Error;
  }

  // config is open, now look for configuration entries

  // WSMP
  {
    config_setting_t *pWSMP;
    pWSMP = config_setting_get_member(pSetting,
                                      APSBSM_CONFIG_VALUE_NAME_WSMP);
    if (pWSMP != NULL)
    {
      // DataRate
      if (config_setting_lookup_int(pWSMP,
                                    APSBSM_CONFIG_VALUE_NAME_DATA_RATE,
                                    &ConfigVal))
        pAPSBSMTx->Params.WSMP.DataRate = (uint8_t) ConfigVal;
      // TxPower
      if (config_setting_lookup_int(pWSMP,
                                    APSBSM_CONFIG_VALUE_NAME_TX_POWER,
                                    &ConfigVal))
        pAPSBSMTx->Params.WSMP.TxPower = (uint8_t) ConfigVal;
    }
  }

  // SOCKET
  {
    config_setting_t *pSOCKET;
    pSOCKET = config_setting_get_member(pSetting,
				      APSBSM_CONFIG_VALUE_NAME_SOCKET);
    if (pSOCKET != NULL)
    {
      // PORT
      if (config_setting_lookup_int(pSOCKET,
				    APSBSM_CONFIG_VALUE_NAME_PORT,
				    &ConfigVal))
	pAPSBSMTx->Params.SocketCfg.Port = (uint32_t) ConfigVal;
      d_printf(D_DEBUG, 0, "APSBSMTx.Port = %d\n", pAPSBSMTx->Params.SocketCfg.Port);

      // MaxAge
      if (config_setting_lookup_int(pSOCKET,
				    APSBSM_CONFIG_VALUE_NAME_MAXAGE,
				    &ConfigVal))
	pAPSBSMTx->Params.SocketCfg.MaxAge = (uint16_t) ConfigVal;
      d_printf(D_DEBUG, 0, "APSBSMTx.MaxAge = %d\n", pAPSBSMTx->Params.SocketCfg.MaxAge);

      // Interval
      if (config_setting_lookup_int(pSOCKET,
				    APSBSM_CONFIG_VALUE_NAME_UDPINTERVAL,
				    &ConfigVal))
	pAPSBSMTx->Params.SocketCfg.UdpInterval = (uint16_t) ConfigVal;
      d_printf(D_DEBUG, 0, "APSBSMTx.UdpInterval = %d\n", pAPSBSMTx->Params.SocketCfg.UdpInterval);
    }
  }

  // APSBSM Enabled
  if (config_setting_lookup_bool(pSetting,
                                 APSBSM_CONFIG_VALUE_NAME_ENABLED,
                                 &ConfigVal))
    pAPSBSMTx->Params.Enabled = (bool) ConfigVal;
  d_printf(D_DEBUG, 0, "APSBSMTx.Enabled = %d\n", pAPSBSMTx->Params.Enabled);

  // Duration
  if (config_setting_lookup_int(pSetting,
                                APSBSM_CONFIG_VALUE_NAME_INTERVAL,
                                &ConfigVal))
    pAPSBSMTx->Params.ApplInterval = (uint16_t) ConfigVal;
  d_printf(D_DEBUG, 0, "APSBSMTx.ApplInterval = %d\n", pAPSBSMTx->Params.ApplInterval);

  // ID
  if (config_setting_lookup_int(pSetting,
                                APSBSM_CONFIG_VALUE_NAME_ID,
                                &ConfigVal))
    pAPSBSMTx->Params.ID = htonl((uint32_t) ConfigVal);
  d_printf(D_DEBUG, 0, "APSBSMTx.ID = %d\n", pAPSBSMTx->Params.ID);

  // Update complete - close the configuration
  config_destroy(pConfig);

  // Success!
  Res = 0;

Error:
  return Res;
}

/**
 * @brief Create BSM message
 * @param pAPSBSMTX APSBSM Tx module
 * @param[out] ppMsg Created BSM Message
 * @return 0 for success, negative for errors
 */
static int APSBSMTx_CreateBSM (struct APSBSMTx *pAPSBSMTX,
			       struct SAEBasicSafetyMessage **ppMsg)
{
  int Res;

  if ((pAPSBSMTX == NULL) || (ppMsg == NULL))
  {
    Res = -EINVAL;
    goto Error;
  }
  //TODO: what is MaxHP in bsm create? set to 400 for now!
  Res = J2735_BSMCreateTemplate(ppMsg, -1, SAEBasicVehicleRole_basicVehicle , 0);
  pAPSBSMTX->Params.StartTime = Util_Now();
  //fprintf(stdout,"msgCnt%8u\n",(void*)*ppMsg->coreData.msgCnt);

Error:
  return Res;
}

/**
 * @brief Encode BSM message
 * @param pAPSBSM
 * @param pMsg Message to be encoded
 * @param[out] pBuf Buffer that contains encoded message
 * @param BufSize Buffer size
 * @return Size of encoded message, negative for errors
 */
static int APSBSMTx_EncodeBSM (struct SAEBasicSafetyMessage *pMsg,
			       uint8_t **ppBuf,
			       int HeaderSize)
{
  int Res;
  int RVal;

  // Encode the BSM to a buffer
  RVal = J2735_BSMEncode_To_Buffer(pMsg, HeaderSize, ppBuf);
  if (RVal == -1)
  {
    Res = -EAGAIN;
  }
  else
  {
    Res = RVal;
  }

  return Res;
}


/**
 * @brief Populate SPAT message
 * @param pSPAT SPAT Tx module
 * @param[out] ppMsg SPAT Message to be populated
 * @param pCfg SPAT configuration
 * @return 0 for success, negative for errors
 */
static int APSBSMTx_PopulateBSM (struct APSBSMTx *pAPSBSMTx,
				 struct SAEBasicSafetyMessage *pMsg,
				 struct APSBSMTxCfg *pCfg)
{
  int Res;
  (void)pCfg;

  if (pAPSBSMTx && pMsg)
  {
    pMsg->coreData.msgCnt = 1;
    pMsg->coreData.id.buf = (uint8_t *)asn1_mallocz(4);
      if (pMsg->coreData.id.buf == NULL)
      {
	d_error(D_WARN, NULL, "unable to allocate ID\n");
	Res = -EINVAL;
	goto Error;
      }
      else
      {
	pMsg->coreData.id.len = 4;
	*((uint32_t*)pMsg->coreData.id.buf) = pAPSBSMTx->Params.ID;
      }

    pMsg->coreData.lat = 530000000;
    pMsg->coreData.Long = 740000000;
    pMsg->coreData.elev = 1000;
    struct SAEPositionalAccuracy accuracy = { 68, 68, 0 };
    pMsg->coreData.accuracy = accuracy;
    pMsg->coreData.transmission = SAETransmissionState_unavailable;
    pMsg->coreData.speed = 1;
    pMsg->coreData.heading = 5139;
    pMsg->coreData.angle = 127;
    struct SAEAccelerationSet4Way accelSet = { 11, -1, -127, 0 };
    pMsg->coreData.accelSet = accelSet;
    pMsg->coreData.brakes.traction = SAETractionControlStatus_unavailable;
    pMsg->coreData.brakes.abs = SAEAntiLockBrakeStatus_unavailable;
    pMsg->coreData.brakes.scs = SAEStabilityControlStatus_unavailable;
    pMsg->coreData.brakes.brakeBoost = SAEBrakeBoostApplied_unavailable;
    pMsg->coreData.brakes.auxBrakes = SAEAccelerationConfidence_unavailable;
    SAEVehicleSize size = { 184, 497 };
    pMsg->coreData.size = size;
    pMsg->partII_option = false;
    pMsg->regional_option = false;


//TODO:    pMsg->coreData.brakes =

    Res = 0;
  }
  else
  {
    Res = -EINVAL;
    goto Error;
  }

Error:
  return Res;
}

/**
 * @brief Update BSM pose info
 * @param pAPSBSMTx pointer to user parameters
 * @param pMsg pointer to ASN.1 BSM message
 */
static void APSBSMTx_UpdateBSM (struct APSBSMTx *pAPSBSMTx,
				struct SAEBasicSafetyMessage *pMsg)
{
  d_fnstart(D_INTERN, NULL, "(%p %p)\n", pAPSBSMTx, pMsg);
  struct LPHPos LPHPos = {0};

  if ((!pAPSBSMTx) || (!pMsg))
  {
    d_fnend(D_WARN, NULL, "(%p %p): NULL\n", pAPSBSMTx, pMsg);
    return;
  }
  pAPSBSMTx->pASN->coreData.secMark = (int)(Util_Now() - pAPSBSMTx->Params.StartTime) % SAEDSecond_Limit_Max;
  pAPSBSMTx->pASN->coreData.msgCnt = (pAPSBSMTx->pASN->coreData.msgCnt+1) % SAEMsgCount_Limit_Max ;

  /// Forward GPS data from UDP source to BSM
  if ((!pAPSBSMTx->Params.SocketCfg.Enabled)||(!pAPSBSMTx->Params.pUDPGPS))
  {
    d_printf(D_DBG, NULL,"Using local GPS data\n");
    goto Local;
  }

  pthread_mutex_lock(&GPSMutex);
  d_printf(D_DBG, NULL,
	   "injecting recv message\n(lat:%f,lng:%f,elv:%f,vel:%f)\n",
	   pAPSBSMTx->Params.pUDPGPS->Latitude,
	   pAPSBSMTx->Params.pUDPGPS->Longitude,
	   pAPSBSMTx->Params.pUDPGPS->Elevation,
	   pAPSBSMTx->Params.pUDPGPS->Speed);
  pMsg->coreData.lat = (int)(pAPSBSMTx->Params.pUDPGPS->Latitude * 10000000);
  pMsg->coreData.Long = (int)(pAPSBSMTx->Params.pUDPGPS->Longitude * 10000000);
  pMsg->coreData.elev = (int)(pAPSBSMTx->Params.pUDPGPS->Elevation / 0.1);
  pMsg->coreData.speed = (int)(pAPSBSMTx->Params.pUDPGPS->Speed/0.2);
  //TODO: check if heading is from Northing
  float heading = pAPSBSMTx->Params.pUDPGPS->Heading;
  heading = heading >= 0 ? heading : heading + 360;
  pMsg->coreData.heading = (int)(heading/0.0125);
  pthread_mutex_unlock(&GPSMutex);

  d_fnend(D_INTERN, NULL, "(%p %p)\n", pAPSBSMTx, pMsg);
  return;

Local:
  if (LPH_Position(pLPH, &LPHPos))
  {
    d_printf(D_DBG, NULL, "Unable to obtain position\n");
    pMsg->coreData.lat 		= 900000001;
    pMsg->coreData.Long 	= 1800000001;
    pMsg->coreData.elev 	= -4096;
    pMsg->coreData.speed 	= 8191;
  }
  else // DF_Position3D
  {
    pMsg->coreData.lat  	= LPHPos.Latitude;
    pMsg->coreData.Long 	= LPHPos.Longitude;
    pMsg->coreData.elev 	= LPHPos.Elevation;
    pMsg->coreData.speed 	= LPHPos.Speed;
    pMsg->coreData.heading 	= LPHPos.Heading;
    d_printf(D_DBG, NULL,
	     "injecting local gps (lat:%d,lng:%d,elv:%d,vel:%d, yaw:%d)\n",
	     LPHPos.Latitude,
	     LPHPos.Longitude,
	     LPHPos.Elevation,
	     LPHPos.Speed,
	     LPHPos.Heading);
  }
  d_fnend(D_INTERN, NULL, "(%p %p)\n", pAPSBSMTx, pMsg);
  return;
}

/**
 * @brief Populate WSM header
 * @param pAPSBSMTx
 * @param[out] pHdr WSMP header to be popualted
 * @param Len Size of WSM paylaod
 */
void APSBSMTx_PopulateWSMHeader (struct APSBSMTx *pAPSBSMTx,
				 struct Dot3WSMPHdr *pHdr,
				 int Len)
{
  memcpy(pHdr, &(pAPSBSMTx->Params.WSMP), sizeof(struct Dot3WSMPHdr));
  pHdr->Length = htons(Len);
}

/**
 * @brief Destroy a BSM Message
 * @param pMsg
 * @param pMsg BSM message
 * @return 0 for success. Negative for errors.
 */
static int APSBSMTx_DestroyBSM (struct APSBSMTx *pAPSBSMTx,
				struct SAEBasicSafetyMessage *pMsg)
{
  int Res;

  if ((pAPSBSMTx == NULL) || (pMsg == NULL))
  {
    Res = -EINVAL;
    goto Error;
  }

  J2735_BSMFree(pMsg);
  Res = 0;

Error:
  return Res;
}


/**
 * @brief Transmit BSM messages
 * @param pAPSBSMTx module
 * @return 0 for success. Negative for errors.
 */
static int APSBSMTx_TransmitBSM (struct APSBSMTx *pAPSBSMTx)
{
  int Res = 0;
  uint8_t *pWSM = NULL;
  int WSMSize;

  if (pAPSBSMTx->pASN == NULL)
  {
    // Create the ASN.1 structure
    Res = APSBSMTx_CreateBSM(pAPSBSMTx, &(pAPSBSMTx->pASN));
    if (Res != 0)
    {
    	pAPSBSMTx->pASN = NULL;
      goto Error;
    }
    d_assert(pAPSBSMTx->pASN != NULL);

    // Fill in the ASN.1 structure
    Res = APSBSMTx_PopulateBSM(pAPSBSMTx, pAPSBSMTx->pASN, &(pAPSBSMTx->Params.Cfg));
    if (Res != 0)
    {
      goto Error;
    }
  }

  // Update the phase timing in the ASN.1 structure
  APSBSMTx_UpdateBSM(pAPSBSMTx, pAPSBSMTx->pASN);

  // Allocate the WSM buffer
  WSMSize = sizeof(struct Dot3WSMPHdr) + APSBSMTx_WSM_BUF_SIZE;
  pWSM = calloc(1, WSMSize);
  uint8_t** ppWSM = &pWSM;
  if (pWSM == NULL)
  {
    // "Failed to allocate Tx WSM buffer for encoding.");
    Res = -ENOMEM;
    goto Error;
  }

  // Encode the ASN.1 structure into the WSM buffer
  {


    Res = APSBSMTx_EncodeBSM(pAPSBSMTx->pASN, ppWSM, sizeof(struct Dot3WSMPHdr));
    if (Res < 0)
    {
      goto Error;
    }
    // A positive return value means that the encoding worked
    WSMSize = Res;
  }

  // Add the WSM Header to the DER encoded buffer
  APSBSMTx_PopulateWSMHeader(pAPSBSMTx, (struct Dot3WSMPHdr *) pWSM, WSMSize);

  // Transmit the WSM.
  // Enable signing (might be fake sig if security is disabled)
  // Also disable Tx logging.
  pthread_mutex_lock(&P1609Tx_SendWSM_Mutex);
  Res = P1609Tx_SendWSM((struct Dot3WSMPHdr *) pWSM, true, false, -1);
  pthread_mutex_unlock(&P1609Tx_SendWSM_Mutex);
  if (Res != 0)
  {
    // "P1609Tx_SendWSM failed");
    goto Error;
  }
  else
  {
  }

Error:
  if (pWSM)
  {
    free(pWSM);
  }
  return Res;
}

/**
 * @brief APSBSMTx Periodic thread processing - sends a BSM
 * @param pArg Pointer to APSBSMTx object passed as generic input parameter
 */
static void APSBSMTx_ThreadProc (void *pArg)
{
  d_fnstart(D_API, NULL, "(%p)\n", pArg);
  struct APSBSMTx *pAPSBSMTx;
  struct timespec Time;

  pAPSBSMTx = (struct APSBSMTx *) pArg;

  // "Starting APSBSMTx Periodic Thread");
  pAPSBSMTx->ThreadState |= APSBSMTx_THREAD_STATE_RUN;

  // Initialise the timespec struct for the polling loop
  clock_gettime(CLOCK_MONOTONIC, &Time);

  // Thread loop
  while ((pAPSBSMTx->ThreadState & APSBSMTx_THREAD_STATE_STOP) == 0)
  {
    // polling delay
    d_error(D_WARN, NULL,"APSBSMTx_ThreadProc_loop");
    Util_Nap(pAPSBSMTx->Params.ApplInterval, &Time);

    if (pAPSBSMTx->Params.Enabled)
    {
      int Res = APSBSMTx_TransmitBSM(pAPSBSMTx); // Transmit a SPAT
      if (Res == 0)
    	  pAPSBSMTx->Stats.Tx.Okay++;
      else
    	  pAPSBSMTx->Stats.Tx.Fail++;
    }
  }

  if (pAPSBSMTx->pASN)
    (void) APSBSMTx_DestroyBSM(pAPSBSMTx, pAPSBSMTx->pASN);

  d_fnend(D_API, NULL, "(%p)\n", pArg);

  // exit thread
  (void) pthread_exit(NULL);

}


static void UDPGPSRx_ThreadProc (void *pArg)
{
  d_fnstart(D_API, NULL, "(%p)\n", pArg);
  struct APSBSMTx *pAPSBSMTx;
  struct timespec Time;
  int Timeout = 1000;
  char Buffer[1024] = {0};

  pAPSBSMTx = (struct APSBSMTx *) pArg;

  // "Starting UDPGPSRx Periodic Thread");
  pAPSBSMTx->UDPGPSRx_ThreadState |= APSBSMTx_THREAD_STATE_RUN;
  // Thread loop
  while ((pAPSBSMTx->UDPGPSRx_ThreadState & APSBSMTx_THREAD_STATE_STOP) == 0)
  {
    d_error(D_WARN, NULL,"UDPGPSRx_ThreadProc_loop");
    struct pollfd FD = {
      .fd      = GpsFd,
      .events  = (POLLIN | POLLPRI),
      .revents = 0,
    };
    int Res = poll(&FD, 1, Timeout);
    // preserve errno before calling case d_printf
    const int PollErrno = errno;
    if (Res < 0)
    {
      if (PollErrno == EINTR)
      {
	d_printf(D_INFO, NULL, "poll(%d) interrupted (%d %d).\n", FD.fd, Res, PollErrno);
	continue;
      }
      else
      {
	d_printf(D_ERR, NULL, "poll(%d) error (%d %d).\n", FD.fd, Res, PollErrno);
	break;
      }
    }
    else if (Res == 0)
    {
      d_printf(D_DBG, NULL,
	     "poll(%d) timeout @ %" PRIu64 "\n", FD.fd, Util_Now());

      continue;
    }
    ssize_t Len = recv(GpsFd, Buffer, sizeof(Buffer), 0);
    ssize_t ExpectedLen = sizeof(tUDP_GPS);
    if (Len <= 0)
    {
      d_error(D_WARN, NULL, "recv %s", strerror(errno));
    }
    else if (Len < ExpectedLen)
    {
      d_error(D_WARN, NULL, "recv message truncated: got %zu expected %zu\n",
		    Len, ExpectedLen);
    }
    else
    {
      d_printf(D_WARN, NULL, "Received %zu bytes\n", Len);
      d_dump(D_WARN, NULL, Buffer, Len);
      tUDP_GPS *Object = (tUDP_GPS *)Buffer;
      if ((pAPSBSMTx->Params.SocketCfg.MaxAge!=0)
	  &&((int)(Util_Now()-Object->Time_ms)>pAPSBSMTx->Params.SocketCfg.MaxAge))
      {
	d_printf(D_DBG, NULL,
		 "recv message discarded: reached max age\n(host:%lld,remote:%lld,diff:%d,max age:%d)\n",
		 Util_Now(), Object->Time_ms,
		 (int) (Util_Now()-Object->Time_ms),
		 pAPSBSMTx->Params.SocketCfg.MaxAge);

	// Free old UDP GPS Rx object
	pthread_mutex_lock(&GPSMutex);
	if (pAPSBSMTx->Params.pUDPGPS)
	{
	  free(pAPSBSMTx->Params.pUDPGPS);
	}
	pthread_mutex_unlock(&GPSMutex);
	continue;
      }

      pthread_mutex_lock(&GPSMutex);

      // Free old UDP GPS Rx object
      if (pAPSBSMTx->Params.pUDPGPS)
      {
	free(pAPSBSMTx->Params.pUDPGPS);
      }
      pAPSBSMTx->Params.pUDPGPS = malloc(sizeof(tUDP_GPS));
      pAPSBSMTx->Params.pUDPGPS->Elevation 	= Object->Elevation;
      pAPSBSMTx->Params.pUDPGPS->Latitude 	= Object->Latitude;
      pAPSBSMTx->Params.pUDPGPS->Longitude 	= Object->Longitude;
      pAPSBSMTx->Params.pUDPGPS->Speed 		= Object->Speed;
      pAPSBSMTx->Params.pUDPGPS->Time_ms	= Object->Time_ms;
      pAPSBSMTx->Params.pUDPGPS->Heading	= Object->Heading;

      pthread_mutex_unlock(&GPSMutex);
    }
    Util_Nap(pAPSBSMTx->Params.SocketCfg.UdpInterval, &Time);
  }
  d_fnend(D_API, NULL, "(%p)\n", pArg);

  // exit thread
  (void) pthread_exit(NULL);
}
