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

#include "sleep.h"

#if defined(CONFIG_OS_WINDOWS)
# include <windows.h>
# include <time.h>
#elif defined(CONFIG_POSIX)
# include <unistd.h>
# include <time.h>
# include <sys/time.h>
# include <sys/types.h>
#endif

PAL_Boolean PAL_Time(
    PAL_Uint64* self)
{
#if defined(_MSC_VER)
    FILETIME ft;
    ULARGE_INTEGER tmp;

    GetSystemTimeAsFileTime(&ft);
    tmp.u.LowPart = ft.dwLowDateTime;
    tmp.u.HighPart = ft.dwHighDateTime;
    tmp.QuadPart -= 0X19DB1DED53E8000;
    *self = tmp.QuadPart / (UINT64)10;
    return PAL_TRUE;
#elif defined(_POSIX_TIMERS) && (_POSIX_TIMERS > 0) && defined(_POSIX_MONOTONIC_CLOCK) && (_POSIX_MONOTONIC_CLOCK > 0)

    struct timespec ts;
    memset( &ts, 0, sizeof(ts));

    if (clock_gettime(CLOCK_MONOTONIC, &ts) != 0)
        return PAL_FALSE;

    /* Seconds to microseconds plus nano seconds to microseconds */
    *self = ((PAL_Uint64)ts.tv_sec * (PAL_Uint64)1000000) + ((PAL_Uint64)ts.tv_nsec / (PAL_Uint64)1000);
    return PAL_TRUE;
#else
    struct timeval tv;
    struct timezone tz;
    memset(&tv, 0, sizeof(tv));
    memset(&tz, 0, sizeof(tz));

    if (gettimeofday(&tv, &tz) != 0)
        return PAL_FALSE;

    *self = (PAL_Uint64)tv.tv_sec * (PAL_Uint64)1000000 + (PAL_Uint64)tv.tv_usec;
    return PAL_TRUE;
#endif
}
