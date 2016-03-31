/*
**==============================================================================
**
** Open Management Infrastructure (OMI)
**
** Copyright (c) Microsoft Corporation
** 
** Licensed under the Apache License, Version 2.0 (the "License"); you may not 
** use this file except in compliance with the License. You may obtain a copy 
** of the License at 
**
**     http://www.apache.org/licenses/LICENSE-2.0 
**
** THIS CODE IS PROVIDED *AS IS* BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
** KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION ANY IMPLIED 
** WARRANTIES OR CONDITIONS OF TITLE, FITNESS FOR A PARTICULAR PURPOSE, 
** MERCHANTABLITY OR NON-INFRINGEMENT. 
**
** See the Apache 2 License for the specific language governing permissions 
** and limitations under the License.
**
**==============================================================================
*/

#ifndef _omierror_h
#define _omierror_h

#include "OMI_Error.h"
#include <pal/strings.h>
#include <base/batch.h>

_Success_(return == MI_RESULT_OK)
MI_Result OMI_ErrorFromErrorCode(
    _In_opt_ Batch* batch,
    MI_Uint32 OMI_Code,
    _In_z_ const MI_Char *OMI_Type,  
    _In_z_ const MI_Char* OMI_ErrorMessage, 
    _Outptr_opt_result_maybenull_ OMI_Error **omiError_);

MI_ErrorCategory ErrorCategoryFromErrorCode(
    MI_Uint32 OMI_Code, 
    _In_z_ const MI_Char *OMI_Type);

const MI_Char *ErrnoToString(
    MI_Uint32 OMI_Code,
    _Out_writes_z_(len) MI_Char *buffer,
    MI_Uint32 len);

#endif /* _omierror_h */
