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
//  Copyright (C) 2007 Microsoft Corporation
//  All rights reserved.
//*****************************************************************************

#include "Globals.h"
#ifdef _MSC_VER
    #include <nitsdll.tmh>
#endif

#include <pal/lock.h>

namespace TestSystem
{

//This object sets up internal cross-process structures automatically.
//No other action is necessary beyond linking to this DLL.
System System::s_system;

NITS_EXPORT DWORD Initialize(_In_z_ const PAL_Char * name,
                 _In_reads_bytes_(bytes) void const *context,
                 _Outptr_result_bytebuffer_(bytes) void **shared,
                 long bytes)
{
    static Lock s_spinlock = LOCK_INITIALIZER;

    Lock_Acquire(&s_spinlock);

    DWORD error = 0;

    Mapping &m = System::GetInstance().GetMapping(name);
    error = m.Initialize(context, bytes);
    *shared = m.m_data;

    Lock_Release(&s_spinlock);
    return error;
}

NITS_EXPORT DWORD GetFaultWin32()
{
    return WIN32_FROM_HRESULT(GetGlobals().GetFaultError());
}

}//namespace TestSystem
