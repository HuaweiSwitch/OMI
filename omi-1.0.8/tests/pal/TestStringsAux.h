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

static void FUNCTION()
{
    CHAR buf[1024];
    size_t n;

    memset(buf, 0xFF, sizeof(buf));
    n = STRLCPY(buf, LIT("abc"), 8);
    TEST_ASSERT(STRCMP(buf, LIT("abc")) == 0);
    TEST_ASSERT(n == 3);
    PAL_UNUSED(n);

    memset(buf, 0xFF, sizeof(buf));
    n = STRLCPY(buf, LIT("abc"), 3);
    TEST_ASSERT(STRCMP(buf, LIT("ab")) == 0);
    TEST_ASSERT(n == 3);
    PAL_UNUSED(n);

    memset(buf, 0xFF, sizeof(buf));
    n = STRLCPY(buf, LIT(""), 1);
    TEST_ASSERT(STRCMP(buf, LIT("")) == 0);
    TEST_ASSERT(n == 0);
    PAL_UNUSED(n);

    memset(buf, 0xFF, sizeof(buf));
    n = STRLCPY(buf, LIT("a"), 2);
    TEST_ASSERT(STRCMP(buf, LIT("a")) == 0);
    TEST_ASSERT(n == 1);
    PAL_UNUSED(n);

    memset(buf, 0xFF, sizeof(buf));
    STRLCPY(buf, LIT("aaa"), 8);
    STRLCAT(buf, LIT("bbb"), 8);
    n = STRLCAT(buf, LIT("ccc"), 8);
    TEST_ASSERT(STRCMP(buf, LIT("aaabbbc")) == 0);
    TEST_ASSERT(n == 3);
    PAL_UNUSED(n);

    n = STRLCAT(buf, LIT("ccddd"), 10);
    TEST_ASSERT(STRCMP(buf, LIT("aaabbbccc")) == 0);
    TEST_ASSERT(n == 5);
    PAL_UNUSED(n);
}
