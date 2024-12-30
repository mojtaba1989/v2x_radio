/**
 * @addtogroup ets_app_facilities_avm_api ETSI ITS Facilities AVM API
 * @{
 *
 * TS 103 882 V2.1.1
 *
 * Interface to AVM handling
 *
 * @file
 *
 */

//------------------------------------------------------------------------------
// Copyright (c) 2024 Cohda Wireless Pty Ltd
//-----------------------------------------------------------------------------

#ifndef __ETSI_AVM_ETSI_AVM_IF_H_
#define __ETSI_AVM_ETSI_AVM_IF_H_

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

/// AVM management
typedef struct AVMMgmt
{
  /// Comms Profile
  tETSIFACGNProfile CommsProfile;
  /// Traffic Class
  tETSIFACGNTC TrafficClass;
} tAVMMgmt;

/// AVM Status codes
typedef enum AVMStatusCode
{
  /// AVM success
  ETSIAVM_SUCCESS = 0x00,
  /// AVM generation failure
  ETSIAVM_FAILURE = 0x01,
  /// AVM some parameters invalid
  ETSIAVM_FAILURE_INVALID_PARAMS = 0x04,
  /// AVM limits exceeded in structure
  ETSIAVM_FAILURE_CONSTRAINT = 0x05,
  /// AVM failed to encode
  ETSIAVM_FAILURE_ENCODING = 0x06,
  /// AVM not ready
  ETSIAVM_FAILURE_NOT_READY = 0x07,

} eAVMStatusCode;

/// Status code for AVM actions @ref AVMStatusCode
typedef uint8_t tAVMStatusCode;

//------------------------------------------------------------------------------
// Function Prototypes
//------------------------------------------------------------------------------

/// @brief Trigger MIM
/// @param pMgmt Pointer to MIM management information
/// @param pMim Pointer to (first of) MIM message content
/// @param MimCount Number of Mim items
/// @param DataID Identifying value
/// @return AVM Status Code
tAVMStatusCode ETSIAVM_SendMIM(const tAVMMgmt *pMgmt, const ITSMim *pMim, uint8_t MimCount, uint32_t DataID);

/// @brief Trigger MVM
/// @param pMgmt Pointer to MVM management information
/// @param pMvm Pointer to MVM message content
/// @param DataID Identifying value
/// @return AVM Status Code
tAVMStatusCode ETSIAVM_SendMVM(const tAVMMgmt *pMgmt, const ITSMvm *pMvm, uint32_t DataID);

#ifdef __cplusplus
}
#endif

#endif // __ETSI_AVM_ETSI_AVM_IF_H_

// Close the Doxygen group
/**
 * @}
 */
