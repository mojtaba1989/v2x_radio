/**
 * @addtogroup v2v_cfg_api Configuration service
 * @{
 *
 * @file
 *
 * Conf library API
 *
 * The Conf ('first-generation') configuration control system is now
 * deprecated and superseded by conf2. Since conf and conf2 maintain separate
 * records of the configuration, dynamic modifications of configuration by
 * conf are not reflected to the newer conf2 system.
 *
 */

//------------------------------------------------------------------------------
// Copyright (c) 2010 Cohda Wireless Pty Ltd
//------------------------------------------------------------------------------

#ifndef __APPCORE_CONF_H__
#define __APPCORE_CONF_H__

//------------------------------------------------------------------------------
// Included headers
//------------------------------------------------------------------------------

#include "conf-cmd.h"
#include "conf-pcap.h"

#include "default_stack_defn.h"
#include "id-global.h"

#include <stdbool.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C"
{
#endif

//------------------------------------------------------------------------------
// Macros & Constants
//------------------------------------------------------------------------------

/// Supported messages in CONF
typedef enum
{
  /// Re-read config
  QSMSG_CONF_READ_CONFIG = QS_BASE_MSG_CONF,
} tConfMsgId;

/// Default file to override compile-time defaults
#define ETS_DEFAULTS_FILENAME  "./ets.conf"

//------------------------------------------------------------------------------
// Type definitions
//------------------------------------------------------------------------------

typedef void (*tConfUpdatedCallback)(void *pData);

//------------------------------------------------------------------------------
// Function definitions
//------------------------------------------------------------------------------

/// CALL THIS FIRST!!!
int ConfInit(int Argc,
             char **ppArgv,
             tCmdConfig * CommandLine);

/// OR CALL THIS FIRST (for Library)
int ConfInitLib(const char *UserCfgFileName,
                const char *DefaultsFileName,
                tConfReadMode ReadMode,
                tConfUpdatedCallback ConfUpdatedCallback,
                void *pConfUpdatedData);

int Conf_ThreadInit(int schedulerPolicy, int schedulerPriority_pc);

void Conf_ThreadDeinit(void);

char *ConfGetFileName(void);

int ConfIniCheckForUpdates(void);

int ConfIniCheckFile(void);

void ConfDeInitLib(void);
void ConfDeInit(void);

/// Returns true if the module has been initialized.
bool ConfigInitialized(void);

const tPcapMetaData *Conf_GetMetaData(size_t *pNotesSize);

#ifdef __cplusplus
}
#endif

#endif

/**
 * @}
 */
