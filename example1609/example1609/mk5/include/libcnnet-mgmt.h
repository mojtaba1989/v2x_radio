/**
 * @addtogroup saec_libcnnet_mgmt SAEC Network Layer Management API
 * @{
 *
 * Interface to manage SAEC Network Layer
 *
 * @file
 *
 */

//------------------------------------------------------------------------------
// Copyright (c) 2019 Cohda Wireless Pty Ltd
//-----------------------------------------------------------------------------

#ifndef __LIBCNNET_MGMT_H_
#define __LIBCNNET_MGMT_H_

//------------------------------------------------------------------------------
// Included headers
//------------------------------------------------------------------------------

#include <stdint.h>

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

/// Struct for Init parameters
typedef struct libCNNet_InitData_tag
{
} tlibCNNet_InitData;

//------------------------------------------------------------------------------
// Function Prototypes
//------------------------------------------------------------------------------

int libCNNet_Init(tlibCNNet_InitData *pData);

int libCNNet_Start(void);

int libCNNet_Stop(void);

int libCNNet_DeInit(void);

#ifdef __cplusplus
}
#endif

#endif // __LIBCNNET_MGMT_H_

// Close the Doxygen group
/**
 * @}
 */
