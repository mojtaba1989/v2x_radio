/**
 * @addtogroup ets_app_facilities_poi_api ETSI ITS Facilities POI API
 * @{
 *
 * TS 103 916 V2.1.1
 *
 * Interface to POI handling
 *
 * @file
 *
 */

//------------------------------------------------------------------------------
// Copyright (c) 2024 Cohda Wireless Pty Ltd
//-----------------------------------------------------------------------------

#ifndef __ETSI_POI_ETSI_POI_IF_H_
#define __ETSI_POI_ETSI_POI_IF_H_

//------------------------------------------------------------------------------
// Included headers
//------------------------------------------------------------------------------

#include <stdint.h>
#include "etsi-fac-common.h"

#include "itsasn.h"
#include "itsasn_def.h"

#ifdef __cplusplus
extern "C"
{
#endif

//------------------------------------------------------------------------------
// Macros & Constants
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// Type definitions
//------------------------------------------------------------------------------

/// POI management
/// @note Both RepetitionDuration and RepetitionInterval need to be non-zero for repetition
/// @note RepetitionDuration needs to be less than ITSValidityDuration_Limit_Max
/// @note RepetitionInterval needs to be between ETSIFAC_REPETITIONINTERVALMINMS
///       and ETSIFAC_REPETITIONINTERVALMAXMS
/// @note To immediately terminate a repetition, set RepetitionDuration to ETSIFAC_REPETITIONDURATIONNONE
///       and RepetitionInterval to ETSIFAC_REPETITIONINTERVALTERMINATE
typedef struct POIMgmt
{
  /// Repetition Duration (sec), ETSIFAC_REPETITIONDURATIONNONE for none
  uint32_t RepetitionDuration;
  /// Repetition Interval (mS), ETSIFAC_REPETITIONINTERVALNONE for none
  uint16_t RepetitionInterval;

  /// GN Packet transport type @ref ETSIFACGeoNetTransport
  /// ETSIFAC_GN_TRANSPORT_GEOBROADCAST, ETSIFAC_GN_TRANSPORT_TSB,
  /// ETSIFAC_GN_TRANSPORT_SHB supported
  tETSIFACGeoNetTransport PktTransport;

  /// Destination Area (only required for GBC PktTransport)
  tETSIFACGeoNetArea DestArea;

  /// Comms Profile
  tETSIFACGNProfile CommsProfile;
  /// Traffic Class
  tETSIFACGNTC TrafficClass;
  /// HopLimit
  tETSIFACGNHopLimit HopLimit;
} tPOIMgmt;

/// POI Status codes
typedef enum POIStatusCode
{
  /// POI success
  ETSIPOI_SUCCESS = 0x00,
  /// POI generation failure
  ETSIPOI_FAILURE = 0x01,
  /// POI some parameters invalid
  ETSIPOI_FAILURE_INVALID_PARAMS = 0x04,
  /// POI limits exceeded in structure
  ETSIPOI_FAILURE_CONSTRAINT = 0x05,
  /// POI failed to encode
  ETSIPOI_FAILURE_ENCODING = 0x06,
  /// POI not ready
  ETSIPOI_FAILURE_NOT_READY = 0x07,

} ePOIStatusCode;

/// Status code for POI actions @ref POIStatusCode
typedef uint8_t tPOIStatusCode;

/// Action ID
typedef uint16_t tPOIIdNum;

//------------------------------------------------------------------------------
// Function Prototypes
//------------------------------------------------------------------------------

/// @brief Trigger POI
/// @param pMgmt Pointer to POI management information
/// @param pPA Pointer to POI parking availability message content
/// @param IdNum Identifier of POI to handle
/// @return POI Status Code
tPOIStatusCode ETSIPOI_SendPA(const tPOIMgmt *pMgmt, const ITSParkingAvailabilityBlock *pPA, tPOIIdNum IdNum);

#ifdef __cplusplus
}
#endif

#endif // __ETSI_POI_ETSI_POI_IF_H_

// Close the Doxygen group
/**
 * @}
 */
