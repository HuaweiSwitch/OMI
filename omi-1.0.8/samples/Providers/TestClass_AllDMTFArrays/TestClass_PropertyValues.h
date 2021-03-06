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

/* @migen@ */
/*
**==============================================================================
**
** WARNING: THIS FILE WAS AUTOMATICALLY GENERATED. PLEASE DO NOT EDIT.
**
**==============================================================================
*/
#ifndef _TestClass_PropertyValues_h
#define _TestClass_PropertyValues_h

#include <MI.h>

/*
**==============================================================================
**
** TestClass_PropertyValues [TestClass_PropertyValues]
**
** Keys:
**    v_Key
**
**==============================================================================
*/

typedef struct _TestClass_PropertyValues
{
    MI_Instance __instance;
    /* TestClass_PropertyValues properties */
    /*KEY*/ MI_ConstUint64Field v_Key;
}
TestClass_PropertyValues;

typedef struct _TestClass_PropertyValues_Ref
{
    TestClass_PropertyValues* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
TestClass_PropertyValues_Ref;

typedef struct _TestClass_PropertyValues_ConstRef
{
    MI_CONST TestClass_PropertyValues* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
TestClass_PropertyValues_ConstRef;

typedef struct _TestClass_PropertyValues_Array
{
    struct _TestClass_PropertyValues** data;
    MI_Uint32 size;
}
TestClass_PropertyValues_Array;

typedef struct _TestClass_PropertyValues_ConstArray
{
    struct _TestClass_PropertyValues MI_CONST* MI_CONST* data;
    MI_Uint32 size;
}
TestClass_PropertyValues_ConstArray;

typedef struct _TestClass_PropertyValues_ArrayRef
{
    TestClass_PropertyValues_Array value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
TestClass_PropertyValues_ArrayRef;

typedef struct _TestClass_PropertyValues_ConstArrayRef
{
    TestClass_PropertyValues_ConstArray value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
TestClass_PropertyValues_ConstArrayRef;

MI_EXTERN_C MI_CONST MI_ClassDecl TestClass_PropertyValues_rtti;

MI_INLINE MI_Result MI_CALL TestClass_PropertyValues_Construct(
    TestClass_PropertyValues* self,
    MI_Context* context)
{
    return MI_ConstructInstance(context, &TestClass_PropertyValues_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL TestClass_PropertyValues_Clone(
    const TestClass_PropertyValues* self,
    TestClass_PropertyValues** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Boolean MI_CALL TestClass_PropertyValues_IsA(
    const MI_Instance* self)
{
    MI_Boolean res = MI_FALSE;
    return MI_Instance_IsA(self, &TestClass_PropertyValues_rtti, &res) == MI_RESULT_OK && res;
}

MI_INLINE MI_Result MI_CALL TestClass_PropertyValues_Destruct(TestClass_PropertyValues* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL TestClass_PropertyValues_Delete(TestClass_PropertyValues* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL TestClass_PropertyValues_Post(
    const TestClass_PropertyValues* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL TestClass_PropertyValues_Set_v_Key(
    TestClass_PropertyValues* self,
    MI_Uint64 x)
{
    ((MI_Uint64Field*)&self->v_Key)->value = x;
    ((MI_Uint64Field*)&self->v_Key)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL TestClass_PropertyValues_Clear_v_Key(
    TestClass_PropertyValues* self)
{
    memset((void*)&self->v_Key, 0, sizeof(self->v_Key));
    return MI_RESULT_OK;
}


#endif /* _TestClass_PropertyValues_h */
