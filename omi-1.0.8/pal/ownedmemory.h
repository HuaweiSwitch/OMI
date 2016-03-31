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

#ifndef _pal_ownedmemory_h
#define _pal_ownedmemory_h

#include <pal/palcommon.h>

PAL_BEGIN_EXTERNC

/*
* Usage of these APIs is specifically in those places where the allocation happens on ad-hoc calls
* And there is no single place where someone can deallocate all memory allocated so far possibly because 
* the memory allocation was done as part of shared library and there is no single exit point since atexit
* does not run upon its unload on unix systems
* the memory locations which were allocated will be kept till the end of program or till you call OwnedMemory_Free
* the memory will be in address space of PAL shared library on unix systems and non non-unix ones it will be part of anyone
* who links against PAL static library
*/
void *OwnedMemory_Alloc(size_t length);

int OwnedMemory_Free(void *ptr);

PAL_END_EXTERNC

#endif /* _pal_ownedmemory_h */
