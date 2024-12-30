/**
 * @addtogroup v2v_cfg_api Configuration service
 * @{
 *
 * @file
 *
 * Conf2 helpers for 'default_stack'
 *
 */

//------------------------------------------------------------------------------
// Copyright (c) 2020 Cohda Wireless Pty Ltd
//------------------------------------------------------------------------------

#ifndef __PLAT_CONF2_H__
#define __PLAT_CONF2_H__

//------------------------------------------------------------------------------
// Included headers
//------------------------------------------------------------------------------

#include <stddef.h>
#include "debug-levels.h"

// Default stack structures and access functions
#include "default_stack_defn.h"

#include "conf_if.h"
#include "util.h"

#ifdef __cplusplus
extern "C"
{
#endif

//------------------------------------------------------------------------------
// Macros & Constants
//------------------------------------------------------------------------------

// Set one variable value from conf2 item
#define Conf2Assign(var, cfg)                                   \
  do {                                                          \
    const tdefault_stack *pConfig = default_stack_Get();        \
    var = pConfig->cfg;                                         \
    default_stack_Release(&pConfig);                            \
  } while (0)

// Set one string value from conf2 item (with strdup)
#define Conf2AssignStrDup(var, cfg)                             \
  do {                                                          \
    const tdefault_stack *pConfig = default_stack_Get();        \
    var = (pConfig->cfg != NULL) ? strdup(pConfig->cfg) : NULL; \
    default_stack_Release(&pConfig);                            \
  } while (0)


// Set one conf2 item to variable integer value
#define Conf2ModifyInt(cfg, var)                                        \
  do {                                                                  \
    const tdefault_stack *pConfig = default_stack_Get();                \
    const int Curr = (int)pConfig->cfg;                                 \
    default_stack_Release(&pConfig);                                    \
    const int Ret = Conf2_ParseLinesFmt("%s=%d", #cfg, ((int)var));     \
    if (Ret == 0)                                                       \
    {                                                                   \
      d_printf(D_INFO, NULL, "Modify config %s (from %d to %d)\n",      \
               #cfg, Curr, (int)var);                                   \
    }                                                                   \
    else                                                                \
    {                                                                   \
      d_printf(D_WARN, NULL,                                            \
               "Modify config %s (from %d to %d) failed (%d)\n",        \
               #cfg, Curr, (int)var, Ret);                              \
    }                                                                   \
  } while (0)

// Set one conf2 item to variable float value
#define Conf2ModifyFloat(cfg, var)                                      \
  do {                                                                  \
    const tdefault_stack *pConfig = default_stack_Get();                \
    const double Curr = (double)pConfig->cfg;                           \
    default_stack_Release(&pConfig);                                    \
    const int Ret = Conf2_ParseLinesFmt("%s=%f", #cfg, ((double)var));  \
    if (Ret == 0)                                                       \
    {                                                                   \
      d_printf(D_INFO, NULL, "Modify config %s (from %f to %f)\n",      \
               #cfg, Curr, (double)var);                                \
    }                                                                   \
    else                                                                \
    {                                                                   \
      d_printf(D_WARN, NULL,                                            \
               "Modify config %s (from %f to %f) failed (%d)\n",        \
               #cfg, Curr, (double)var, Ret);                           \
    }                                                                   \
  } while (0)

// Set one conf2 item to variable string value
#define Conf2ModifyStr(cfg, var)                                        \
  do {                                                                  \
    const tdefault_stack *pConfig = default_stack_Get();                \
    const char *pCurr = pConfig->cfg;                                   \
    const int Ret = Conf2_ParseLinesFmt("%s=%s", #cfg,                  \
                                        ((var == NULL) ? "" : var));    \
    if (Ret == 0)                                                       \
    {                                                                   \
      d_printf(D_INFO, NULL, "Modify config %s (from %s to %s)\n",      \
               #cfg, SAFE(pCurr), SAFE(var));                           \
    }                                                                   \
    else                                                                \
    {                                                                   \
      d_printf(D_WARN, NULL,                                            \
               "Modify config %s (from %s to %s) failed (%d)\n",        \
               #cfg, SAFE(pCurr), SAFE(var), Ret);                      \
    }                                                                   \
    default_stack_Release(&pConfig);                                    \
  } while (0)

//------------------------------------------------------------------------------
// Type definitions
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// Function definitions
//------------------------------------------------------------------------------

/**
 * @brief Get actively configured protocol mode
 *
 * @return Protocol Mode (ITS/1609/SAEC)
 */
static inline int Conf2_GetProtocolMode(void)
{
  int Mode;

  Conf2Assign(Mode, ProtocolMode);

  return Mode;
}

/**
 * @brief Set active protocol mode
 *
 * @param Mode Protocol Mode (ITS/1609/SAEC)
 * @return Status (0 for success)
 */
static inline int Conf2_SetProtocolMode(int Mode)
{
  d_printf(D_WARN, NULL, "Protocol Mode set to %d (%s)\n",
           Mode,
           (Mode == default_stack_ProtocolMode_ITS) ? "EU" :
           (Mode == default_stack_ProtocolMode_1609) ? "NA" :
           (Mode == default_stack_ProtocolMode_SAEC) ? "CN" : "None");

  Conf2ModifyInt(ProtocolMode, Mode);

  return 0;
}

#ifdef __cplusplus
}
#endif

#endif

/**
 * @}
 */
