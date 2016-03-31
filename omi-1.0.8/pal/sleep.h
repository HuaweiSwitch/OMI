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

#ifndef _pal_sleep_h
#define _pal_sleep_h

#include "palcommon.h"

#if defined(PAL_HAVE_POSIX)
# include <unistd.h>
# include <time.h>
#endif

PAL_BEGIN_EXTERNC

PAL_INLINE void Sleep_Milliseconds(
    _In_ unsigned long milliseconds)
{
#if defined(_MSC_VER)
    Sleep((DWORD)milliseconds);
#else
    struct timespec ts;
    ts.tv_sec = (long)(milliseconds / 1000);
    ts.tv_nsec = (long)((milliseconds % 1000) * 1000 * 1000);
    nanosleep(&ts, NULL);
#endif
}

/* invalid time value;
  based on 'memset(0) to init' philosophy; this value must be 0;
  do not re-assign it */
#define TIME_NEVER  0

/* returns current time in micro-sec (usec) since Epoch */
PAL_Boolean PAL_Time(
    PAL_Uint64* time_usec);

PAL_END_EXTERNC

#endif /* _pal_sleep_h */
