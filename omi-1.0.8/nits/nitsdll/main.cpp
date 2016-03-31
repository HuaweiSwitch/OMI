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
#include "../base/Globals.h"

#ifdef _MSC_VER
#include <main.tmh>

BOOL WINAPI DllMain(_In_ HINSTANCE instance, _In_ DWORD reason, PVOID)
{
    switch( reason ) 
    { 
        case DLL_PROCESS_ATTACH:
            //
            // Next, we disable all thread attach and detach messages to minimize our working set
            //
            if ( !DisableThreadLibraryCalls ( instance ) ) 
            {
                return FALSE;
            }

            WPP_INIT_TRACING(NITS_TRACING_LOCATION);
            break;
        case DLL_PROCESS_DETACH:
            WPP_CLEANUP();
            break;
    }

    return TRUE;
}
#endif
