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

#include "once.h"
#include "atomic.h"
#include "lock.h"

int __Once_Invoke(
    _Inout_ Once* self,
    _In_ OnceWorkerFunction func,
    _In_ void* data)
{
    volatile ptrdiff_t *state = (volatile ptrdiff_t*)&self->value;
    ptrdiff_t key = (ptrdiff_t)self;
    ptrdiff_t swapState;
    ptrdiff_t oldState;

start:
    swapState = Atomic_CompareAndSwap(
        state,
        ONCE_STATE_NOTINVOKEDYET,
        ONCE_STATE_INVOKING);

    if (swapState == ONCE_STATE_NOTINVOKEDYET)
    {
        /* This thread changed state to ONCE_STATE_INVOKING. */
        void* value;
        int result = (*func)(data, &value);
        *state = (result == 0) ? (ptrdiff_t)value : ONCE_STATE_NOTINVOKEDYET;
            
        CondLock_Broadcast(key);
        return result;
    }

    for(;;)
    {
        oldState = *state;
        if (oldState == ONCE_STATE_INVOKING)
            CondLock_Wait(
                    key,
                    state,
                    ONCE_STATE_INVOKING,
                    CONDLOCK_DEFAULT_SPINCOUNT);
        else if (oldState == ONCE_STATE_NOTINVOKEDYET)
            goto start;
        else return 0;
    }
}
