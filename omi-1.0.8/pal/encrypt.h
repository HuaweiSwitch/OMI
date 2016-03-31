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

#include "palcommon.h"


_Success_(return == 0)
int EncryptData(
    _In_bytecount_(inbufferLength) const void *inbuffer, 
    PAL_Uint32 inbufferLength, 
    _Out_writes_bytes_to_opt_(outbufferLength, *outbufferLengthNeeded) void *outbuffer, 
    PAL_Uint32 outbufferLength, 
    _When_(return == -2, _Out_) _When_(return == 0, _Out_)  PAL_Uint32 *outbufferLengthNeeded);

_Success_(return == 0)
int DecryptData(
    _In_bytecount_(inbufferLength) const void *inbuffer, 
    PAL_Uint32 inbufferLength, 
    _Out_writes_bytes_to_opt_(outbufferLength, *outbufferLengthNeeded) void *outbuffer, 
    PAL_Uint32 outbufferLength, 
    _When_(return == -2, _Out_) _When_(return == 0, _Out_) PAL_Uint32 *outbufferLengthNeeded);
