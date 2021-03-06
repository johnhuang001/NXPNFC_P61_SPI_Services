/******************************************************************************
 *
 *  Copyright (C) 1999-2012 Broadcom Corporation
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at:
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 ******************************************************************************/

/******************************************************************************
 *
 *  The original Work has been changed by NXP Semiconductors.
 *
 *  Copyright (C) 2013-2014 NXP Semiconductors
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 ******************************************************************************/
#ifdef ESE_DEBUG_UTILS_INCLUDED
#ifndef __CONFIG_H
#define __CONFIG_H

#ifdef __cplusplus
extern "C"
{
#endif
int GetNxpStrValue(const char* name, char* p_value, unsigned long len);
int GetNxpNumValue(const char* name, void* p_value, unsigned long len);
int GetNxpByteArrayValue(const char* name, char* pValue,long bufflen, long *len);
void resetNxpConfig(void);

#ifdef __cplusplus
};
#endif

#define NAME_NXPLOG_EXTNS_LOGLEVEL   "NXPLOG_EXTNS_LOGLEVEL"
#define NAME_NXPLOG_ESELIB_LOGLEVEL  "NXPLOG_ESELIB_LOGLEVEL"
#define NAME_NXPLOG_SPIX_LOGLEVEL    "NXPLOG_SPIX_LOGLEVEL"
#define NAME_NXPLOG_SPIR_LOGLEVEL    "NXPLOG_SPIR_LOGLEVEL"
#define NAME_NXPLOG_FWDNLD_LOGLEVEL  "NXPLOG_FWDNLD_LOGLEVEL"
#define NAME_NXPLOG_TML_LOGLEVEL     "NXPLOG_TML_LOGLEVEL"
#define NAME_NXP_JCOPDL_AT_BOOT_ENABLE "NXP_JCOPDL_AT_BOOT_ENABLE"
#define NAME_NXP_WTX_COUNT_VALUE     "NXP_WTX_COUNT_VALUE"
#define NAME_NXP_MAX_RSP_TIMEOUT     "NXP_MAX_RSP_TIMEOUT"
#define NAME_NXP_POWER_SCHEME        "NXP_POWER_SCHEME"
#define NAME_NXP_SOF_WRITE           "NXP_SOF_WRITE"
#define NAME_NXP_TP_MEASUREMENT      "NXP_TP_MEASUREMENT"
#define NAME_NXP_SPI_INTF_RST_ENABLE "NXP_SPI_INTF_RST_ENABLE"
#define NAME_NXP_MAX_RNACK_RETRY     "NXP_MAX_RNACK_RETRY"
#endif
#endif
