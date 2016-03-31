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

//*****************************************************************************
//	Copyright (C) 2003 Microsoft Corporation
//  All rights reserved.
//*****************************************************************************

void *Shim_HeapAlloc(
    size_t bytes,
    NitsCallSite line);

BOOL Shim_SendRequest(
    PCWSTR str,
    NitsCallSite line);

#define _HeapAlloc(bytes, line) Shim_HeapAlloc(bytes, line)
#define _SendRequest(str, line) Shim_SendRequest(str, line)
