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

/* @statikgen@ */
/*
**==============================================================================
**
** WARNING: THIS FILE WAS AUTOMATICALLY GENERATED. PLEASE DO NOT EDIT.
**
**==============================================================================
*/
#ifndef _MyClass_h
#define _MyClass_h

#include <MI.h>

/*
**==============================================================================
**
** MyClass [MyClass]
**
** Keys:
**
**==============================================================================
*/

typedef struct _MyClass
{
    MI_Instance __instance;
    /* MyClass properties */
    MI_ConstUint32Field Property;
}
MyClass;

typedef struct _MyClass_Ref
{
    MyClass* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MyClass_Ref;

typedef struct _MyClass_ConstRef
{
    MI_CONST MyClass* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MyClass_ConstRef;

typedef struct _MyClass_Array
{
    struct _MyClass** data;
    MI_Uint32 size;
}
MyClass_Array;

typedef struct _MyClass_ConstArray
{
    struct _MyClass MI_CONST* MI_CONST* data;
    MI_Uint32 size;
}
MyClass_ConstArray;

typedef struct _MyClass_ArrayRef
{
    MyClass_Array value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MyClass_ArrayRef;

typedef struct _MyClass_ConstArrayRef
{
    MyClass_ConstArray value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MyClass_ConstArrayRef;


#endif /* _MyClass_h */
