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

#if !defined(DEST) || !defined(STRLCPY)
# error "internal file: do not include!"
#endif

size_t STRLCPY(
    _Out_writes_z_(size) DEST* dest, 
    _In_z_ const SRC* src, 
    size_t size)
{
    const SRC* start = src;

    if (size)
    {
        DEST* end = dest + size - 1;

        while (*src && dest != end)
            *dest++ = (DEST)*src++;

        *dest = '\0';
    }

    while (*src)
        src++;

    return src - start;
}
