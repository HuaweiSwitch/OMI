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

#include <stdlib.h>
#include <MI.h>

extern MI_Result climain(int argc, const MI_Char* argv[]);

#if defined (_MSC_VER)
int MI_MAIN_CALL wmain(int argc, const MI_Char* argv[])
{
    exit((int) climain(argc, argv));
}
#else
int MI_MAIN_CALL main(int argc, const char* argv[])
{
#if defined (MI_USE_WCHAR)
    /* Going to need to convert the args to MI_Char */
    printf("Do not support %s when using wide char support yet\n", argv[0]);
    return 0;
#else
    exit((int) climain(argc, argv));
#endif
}
#endif
