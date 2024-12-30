/**
 * @addtogroup p1609_app_facilities_rsm
 * @{
 *
 * @internal
 *
 * Facilities Layer encoding & transmission of SAE J2945/4 RSMs
 *
 * @note See the usage example code in apps/example1609/src/rsm-trx
 *
 * @file
 */

//------------------------------------------------------------------------------
// Copyright (c) 2024 Cohda Wireless Pty Ltd
//-----------------------------------------------------------------------------

#ifndef CW_J29454_RSM_IF_H_CW
#define CW_J29454_RSM_IF_H_CW

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

// Default RSM PSID
#define J29454_RSM_PSID (0x8003)

//------------------------------------------------------------------------------
// Type definitions
//------------------------------------------------------------------------------

// Forward decl. See "j2734asn.h"
struct SAERoadSafetyMessage;

/// RSM control transport settings (PSID, SSPs etc.)
typedef struct RSMCtrl
{
  /// Security options
  struct {
    /// IEEE1609.2 security flags @sa Dot3WSMPSecurity
    uint8_t Flags;
  } Dot2;
  /// Network layer options
  struct {
    /// p-encoded PSID in host byte order
    uint32_t PSID;
    /// Priority (0:7)
    uint8_t Priority;
    /// See @sa Dot3WSMPExtFlag
    uint8_t HdrExtFlags;
  } Dot3;
} tRSMCtrl;

//------------------------------------------------------------------------------
// Function Prototypes
//------------------------------------------------------------------------------

/**
 * @brief Transmit an RSM
 *
 * @param pRSM RSM message content
 * @param pCtrl RSM control transport settings. Use NULL for defaults
 * @return Zero for success otherwise a negaitve error code
 *
 * @note Ownership of pRSM is not transferred so users still have to:
 * `asn1_free_value(asn1_type_SAERoadSafetyMessage, pRSM);`
 */
int J29454RSM_TxReq(const struct SAERoadSafetyMessage *pRSM,
                    const tRSMCtrl *pCtrl);

#ifdef __cplusplus
}
#endif

#endif // CW_J29454_RSM_IF_H_CW

// Close the doxygen group
/**
 * @}
 */

