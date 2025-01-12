/*
 * Copyright (c) 2023, NVIDIA CORPORATION.  All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#pragma once
/*
 * File:   dcgm_structs_internal_24.h
 */

/**
 * Request to blacklist a given module ID
 */
typedef struct
{
    unsigned int version;    /*!< Version. Should be dcgmModuleBlacklist_version */
    dcgmModuleId_t moduleId; /*!< Module to blacklist */
} dcgmModuleBlacklist_v1;

#define dcgmModuleBlacklist_version1 MAKE_DCGM_VERSION(dcgmModuleBlacklist_v1, 1)

typedef struct
{
    unsigned int moduleId; //!< IN: Module to blacklist
    unsigned int cmdRet;   //!< OUT: Error code generated
} dcgmMsgModuleBlacklist_v1;

DCGM_CASSERT(dcgmDeviceAttributes_version1 == (long)16782628, 1);
DCGM_CASSERT(dcgmDeviceAttributes_version2 == (long)33559648, 1);
DCGM_CASSERT(dcgmDiagResponse_version6 == (long)0x06079090, 1);
DCGM_CASSERT(dcgmIntrospectFieldsExecTime_version == (long)16777248, 1);
DCGM_CASSERT(dcgmIntrospectFullFieldsExecTime_version == (long)0x020004D8, 1);
DCGM_CASSERT(dcgmIntrospectContext_version == (long)16777232, 1);
