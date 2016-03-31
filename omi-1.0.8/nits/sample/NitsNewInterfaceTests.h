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

#ifndef __NITS_NEW_INTERFACE_TESTS_H__
#define __NITS_NEW_INTERFACE_TESTS_H__

#define TEST_BUILD
#ifdef _MSC_VER
	#include <windows.h>
#endif
#include <nits/base/nits.h>
#include <pal/palcommon.h>

using namespace TestSystem;

struct MyStruct
{
    int x;
    wchar_t *p;
};

struct MyStruct1
{
    int a, b;
};

struct MyStruct2
{
    int c, d;
};

NitsDeclSetup0(Fixture0, MyStruct);

NitsDeclSetup1(Fixture2, MyStruct2, Fixture0);

NitsDeclSetup1(Fixture4, MyStruct2, Fixture0);

NitsDeclSetup2(Fixture5, MyStruct2, Fixture2, Fixture4);

NitsDeclSplit2(Fixture3, MyStruct, Fixture0, Fixture1);

NitsDeclSetup(MySetup2);

#endif
