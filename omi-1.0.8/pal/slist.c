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

#include "slist.h"

#if !defined(_MSC_VER)

PAL_INLINE void Atomic_Lock(
    _Inout_ volatile ptrdiff_t* dest)
{
    while (Atomic_Swap(dest, 1) == 1)
        while (*dest)
            ;
}

PAL_INLINE void Atomic_Unlock(
    _Inout_ volatile ptrdiff_t* dest)
{
    Atomic_Swap(dest, 0);
}

SListEntry* SList_FlushAtomic(
    _Inout_ SListHead* head)
{
    Atomic_Lock(&head->__private.lock);
    SListEntry* p = head->__private.next;
    head->__private.next = NULL;
    Atomic_Unlock(&head->__private.lock);
    return p;
}

SListEntry* SList_PushAtomic(
    _Inout_ SListHead* head,
    _Inout_ SListEntry* entry)
{
    SListEntry* p;

    Atomic_Lock(&head->__private.lock);

    entry->__private.next = head->__private.next;
    p = head->__private.next;
    head->__private.next = entry;

    Atomic_Unlock(&head->__private.lock);

    return p;
}

SListEntry* SList_PopAtomic(
    _Inout_ SListHead* head)
{
    Atomic_Lock(&head->__private.lock);

    SListEntry* p = head->__private.next;

    if (p)
    {
        head->__private.next = p->__private.next;
    }

    Atomic_Unlock(&head->__private.lock);

    return p;
}

#endif /* !defined(_MSC_VER) */
