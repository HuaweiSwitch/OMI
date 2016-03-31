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

#include <stdio.h>
#include <nits/base/nits.h>
#include <pal/thread.h>
#include <pal/sleep.h>

NITS_EXTERN_C PAL_Uint32 THREAD_API MyThreadProc(_In_ void * param)
{
    PAL_UNUSED(param);    

    NitsTrace(PAL_T("MyThreadProc running\n"));

    Sleep_Milliseconds(1000);

    return 0;
}

void foo()
{
    Thread mythread;    
    PAL_Uint32 dummy;
    Sleep_Milliseconds(1000);
    NitsTrace(PAL_T("Foo running\n"));
    Thread_CreateJoinable_Injected(&mythread, MyThreadProc, NULL, NULL, NitsHere());    
    Thread_Join(&mythread, &dummy);
}

int PAL_CDECLAPI main()
{    
    foo(); 
    NitsTrace(PAL_T("main running\n"));
    return 0;
}

