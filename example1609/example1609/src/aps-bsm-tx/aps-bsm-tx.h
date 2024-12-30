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

#ifndef APS_BSM_TX_H_
#define APS_BSM_TX_H_

//------------------------------------------------------------------------------
// Included headers
//------------------------------------------------------------------------------

#include "dot3-wsmp.h"
#include "J2735_BSM.h"

#include <pthread.h>
#include <stdbool.h>
#include <stdint.h>

//------------------------------------------------------------------------------
// Macros & Constants
//------------------------------------------------------------------------------

/// Location of the SPAT configuration settings
#define APSBSM_CONFIG_PATH_NAME  "Example.APSBSMTx"

// SPAT Configuration value names
#define APSBSM_CONFIG_VALUE_NAME_WSMP            "WSMP"
#define APSBSM_CONFIG_VALUE_NAME_PSID            "PSID"
#define APSBSM_CONFIG_VALUE_NAME_ID	         "DevID"
#define APSBSM_CONFIG_VALUE_NAME_CHANNEL_NUMBER  "ChannelNumber"
#define APSBSM_CONFIG_VALUE_NAME_DATA_RATE       "DataRate"
#define APSBSM_CONFIG_VALUE_NAME_TX_POWER        "TxPower"
#define APSBSM_CONFIG_VALUE_NAME_PRIORITY        "Priority"
#define APSBSM_CONFIG_VALUE_NAME_ENABLED         "Enabled"
#define APSBSM_CONFIG_VALUE_NAME_INTERVAL        "ApplInterval"
#define APSBSM_CONFIG_VALUE_NAME_SOCKET          "Socket"
#define APSBSM_CONFIG_VALUE_NAME_PORT            "Port"
#define APSBSM_CONFIG_VALUE_NAME_MAXAGE          "MaxAge" // mSec
#define APSBSM_CONFIG_VALUE_NAME_UDPINTERVAL     "UdpInterval" // mSec

#define APSBSM_CONFIG_VALUE_DEFAULT_INTERVAL             (100) // mSec
#define APSBSM_CONFIG_VALUE_DEFAULT_ID			 (0x12345678) // mSec
#define APSBSM_CONFIG_VALUE_DEFAULT_WSMP_PSID            (0x20)
#define APSBSM_CONFIG_VALUE_DEFAULT_WSMP_PRIORITY        (5)
#define APSBSM_CONFIG_VALUE_DEFAULT_WSMP_CHANNEL_NUMBER  (180)
#define APSBSM_CONFIG_VALUE_DEFAULT_WSMP_DATA_RATE       (12)
#define APSBSM_CONFIG_VALUE_DEFAULT_WSMP_TX_POWER        (5)
#define APSBSM_CONFIG_VALUE_DEFAULT_TYPE_EVENT           (0x0)
#define APSBSM_CONFIG_VALUE_DEFAULT_SOCKET_PORT          (1551)
#define APSBSM_CONFIG_VALUE_DEFAULT_SOCKET_MAXAGE        (1200) // mSec 0:disable age check
#define APSBSM_CONFIG_VALUE_DEFAULT_SOCKET_UDPINTERVAL   (50) // mSec

//-----------------------------------------------------------------------------
// Type Definitions
//-----------------------------------------------------------------------------

/// State IDs for APSBSM Tx thread
typedef enum APSBSMTxThreadState
{
  /// Not initialized
  APSBSMTx_THREAD_STATE_NONE = 0x00,
  /// Initializing
  APSBSMTx_THREAD_STATE_INIT = 0x01,
  /// Running
  APSBSMTx_THREAD_STATE_RUN  = 0x02,
  /// Stopping
  APSBSMTx_THREAD_STATE_STOP = 0x04,
  /// Stopped
  APSBSMTx_THREAD_STATE_END  = 0x08,
} eAPSBSMTxThreadState;
/// @ref APSBSMTxThreadState
typedef int tAPSBSMTxThreadState;

/// SPAT transmitter Statistics
typedef struct APSBSMTxStats
{
  /// Transmit counters
  struct {
    uint32_t Okay;
    uint32_t Fail;
  } Tx;

} tAPSBSMTxStats;

typedef struct UDP_GPS
{
  uint64_t Time_ms; // Unix time in ms
  float Latitude;  // J2735 Latitude
  float Longitude; // J2735 Longitude
  float Elevation; // J2735 Elevation
  float Speed;
  float Heading;
} tUDP_GPS;

typedef struct APSBSMTxCfg
{
  int Reserved;
} tAPSBSMTxCfg;

typedef struct SOCKETCfg
{
  /// Enables read GPS from Socket
  bool Enabled;
  /// Socket Port
  uint32_t Port;
  /// Max acceptable age of data
  uint16_t MaxAge;
  /// UDP read interval
  uint16_t UdpInterval;
}tSOCKETCfg;

/// APSBSMTx parameters - Stored in Config File
typedef struct APSBSMTxParams
{
  /// APSBSMTx Enable
  bool Enabled;
  /// Radio ID
  uint32_t ID;
  /// APSBSM transmission interval (mSec)
  uint16_t ApplInterval;
  /// stamp app starting time for SecMark
  uint64_t StartTime;
  /// socket Config
  tSOCKETCfg SocketCfg;
  /// UDP GPS object
  tUDP_GPS *pUDPGPS;
  /// WSMP parameters
  struct Dot3WSMPHdr WSMP;
  /// ASN.1 structure config
  struct APSBSMTxCfg Cfg;
} tAPSBSMTxParams;

/// APSBSMTx state
typedef struct APSBSMTx
{
  /// ID of APSBSM thread
  pthread_t ThreadID;
  /// APSBSM thread state
  tAPSBSMTxThreadState ThreadState;
  /// ID of udpgpsRx thread
  pthread_t UDPGPSRx_ThreadID;
  /// udpgpsRx thread state
  tAPSBSMTxThreadState UDPGPSRx_ThreadState;
  /// Attributes used for thread
  pthread_attr_t ThreadAttr;
  /// Module statistics
  struct APSBSMTxStats Stats;
  /// ASN.1 structure
  struct SAEBasicSafetyMessage *pASN;
  /// Configuration
  struct APSBSMTxParams Params;
} tAPSBSMTx;


//-----------------------------------------------------------------------------
// Function Declarations
//-----------------------------------------------------------------------------

int APSBSMTx_Open (struct APSBSMTx **ppAPSBSMTx,
                 pthread_attr_t *pAttr,
                 char *pConfigFileName);

void APSBSMTx_Close (struct APSBSMTx *pAPSBSMTx);

void APSBSMTx_PrintStats (struct APSBSMTx *pAPSBSMTx);

#endif /* APS_BSM_TX_H_ */
