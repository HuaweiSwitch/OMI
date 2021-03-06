/* @migen@ */
/*
**==============================================================================
**
** WARNING: THIS FILE WAS AUTOMATICALLY GENERATED. PLEASE DO NOT EDIT.
**
**==============================================================================
*/
#ifndef _CIM_View_h
#define _CIM_View_h

#include <MI.h>
#include "CIM_ManagedElement.h"

/*
**==============================================================================
**
** CIM_View [CIM_View]
**
** Keys:
**
**==============================================================================
*/

typedef struct _CIM_View /* extends CIM_ManagedElement */
{
    MI_Instance __instance;
    /* CIM_ManagedElement properties */
    MI_ConstStringField InstanceID;
    MI_ConstStringField Caption;
    MI_ConstStringField Description;
    MI_ConstStringField ElementName;
    /* CIM_View properties */
}
CIM_View;

typedef struct _CIM_View_Ref
{
    CIM_View* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
CIM_View_Ref;

typedef struct _CIM_View_ConstRef
{
    MI_CONST CIM_View* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
CIM_View_ConstRef;

typedef struct _CIM_View_Array
{
    struct _CIM_View** data;
    MI_Uint32 size;
}
CIM_View_Array;

typedef struct _CIM_View_ConstArray
{
    struct _CIM_View MI_CONST* MI_CONST* data;
    MI_Uint32 size;
}
CIM_View_ConstArray;

typedef struct _CIM_View_ArrayRef
{
    CIM_View_Array value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
CIM_View_ArrayRef;

typedef struct _CIM_View_ConstArrayRef
{
    CIM_View_ConstArray value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
CIM_View_ConstArrayRef;

MI_EXTERN_C MI_CONST MI_ClassDecl CIM_View_rtti;

MI_INLINE MI_Result MI_CALL CIM_View_Construct(
    CIM_View* self,
    MI_Context* context)
{
    return MI_ConstructInstance(context, &CIM_View_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL CIM_View_Clone(
    const CIM_View* self,
    CIM_View** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Boolean MI_CALL CIM_View_IsA(
    const MI_Instance* self)
{
    MI_Boolean res = MI_FALSE;
    return MI_Instance_IsA(self, &CIM_View_rtti, &res) == MI_RESULT_OK && res;
}

MI_INLINE MI_Result MI_CALL CIM_View_Destruct(CIM_View* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL CIM_View_Delete(CIM_View* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL CIM_View_Post(
    const CIM_View* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL CIM_View_Set_InstanceID(
    CIM_View* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        0,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_View_SetPtr_InstanceID(
    CIM_View* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        0,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_View_Clear_InstanceID(
    CIM_View* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_View_Set_Caption(
    CIM_View* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_View_SetPtr_Caption(
    CIM_View* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_View_Clear_Caption(
    CIM_View* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

MI_INLINE MI_Result MI_CALL CIM_View_Set_Description(
    CIM_View* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_View_SetPtr_Description(
    CIM_View* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_View_Clear_Description(
    CIM_View* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        2);
}

MI_INLINE MI_Result MI_CALL CIM_View_Set_ElementName(
    CIM_View* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_View_SetPtr_ElementName(
    CIM_View* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_View_Clear_ElementName(
    CIM_View* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        3);
}


#endif /* _CIM_View_h */
