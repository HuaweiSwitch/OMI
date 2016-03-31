/* @migen@ */
/*
**==============================================================================
**
** WARNING: THIS FILE WAS AUTOMATICALLY GENERATED. PLEASE DO NOT EDIT.
**
**==============================================================================
*/
#ifndef _MSFT_RemoteServerGroup_h
#define _MSFT_RemoteServerGroup_h

#include <MI.h>
#include "CIM_Collection.h"

/*
**==============================================================================
**
** MSFT_RemoteServerGroup [MSFT_RemoteServerGroup]
**
** Keys:
**    InstanceID
**
**==============================================================================
*/

typedef struct _MSFT_RemoteServerGroup /* extends CIM_Collection */
{
    MI_Instance __instance;
    /* CIM_ManagedElement properties */
    /*KEY*/ MI_ConstStringField InstanceID;
    MI_ConstStringField Caption;
    MI_ConstStringField Description;
    MI_ConstStringField ElementName;
    /* CIM_Collection properties */
    /* MSFT_RemoteServerGroup properties */
    MI_ConstUint16Field FeatureName;
    MI_ConstStringField OtherFeatureName;
}
MSFT_RemoteServerGroup;

typedef struct _MSFT_RemoteServerGroup_Ref
{
    MSFT_RemoteServerGroup* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MSFT_RemoteServerGroup_Ref;

typedef struct _MSFT_RemoteServerGroup_ConstRef
{
    MI_CONST MSFT_RemoteServerGroup* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MSFT_RemoteServerGroup_ConstRef;

typedef struct _MSFT_RemoteServerGroup_Array
{
    struct _MSFT_RemoteServerGroup** data;
    MI_Uint32 size;
}
MSFT_RemoteServerGroup_Array;

typedef struct _MSFT_RemoteServerGroup_ConstArray
{
    struct _MSFT_RemoteServerGroup MI_CONST* MI_CONST* data;
    MI_Uint32 size;
}
MSFT_RemoteServerGroup_ConstArray;

typedef struct _MSFT_RemoteServerGroup_ArrayRef
{
    MSFT_RemoteServerGroup_Array value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MSFT_RemoteServerGroup_ArrayRef;

typedef struct _MSFT_RemoteServerGroup_ConstArrayRef
{
    MSFT_RemoteServerGroup_ConstArray value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MSFT_RemoteServerGroup_ConstArrayRef;

MI_EXTERN_C MI_CONST MI_ClassDecl MSFT_RemoteServerGroup_rtti;

MI_INLINE MI_Result MI_CALL MSFT_RemoteServerGroup_Construct(
    MSFT_RemoteServerGroup* self,
    MI_Context* context)
{
    return MI_ConstructInstance(context, &MSFT_RemoteServerGroup_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_RemoteServerGroup_Clone(
    const MSFT_RemoteServerGroup* self,
    MSFT_RemoteServerGroup** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Boolean MI_CALL MSFT_RemoteServerGroup_IsA(
    const MI_Instance* self)
{
    MI_Boolean res = MI_FALSE;
    return MI_Instance_IsA(self, &MSFT_RemoteServerGroup_rtti, &res) == MI_RESULT_OK && res;
}

MI_INLINE MI_Result MI_CALL MSFT_RemoteServerGroup_Destruct(MSFT_RemoteServerGroup* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_RemoteServerGroup_Delete(MSFT_RemoteServerGroup* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_RemoteServerGroup_Post(
    const MSFT_RemoteServerGroup* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_RemoteServerGroup_Set_InstanceID(
    MSFT_RemoteServerGroup* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        0,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_RemoteServerGroup_SetPtr_InstanceID(
    MSFT_RemoteServerGroup* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        0,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_RemoteServerGroup_Clear_InstanceID(
    MSFT_RemoteServerGroup* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_RemoteServerGroup_Set_Caption(
    MSFT_RemoteServerGroup* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_RemoteServerGroup_SetPtr_Caption(
    MSFT_RemoteServerGroup* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_RemoteServerGroup_Clear_Caption(
    MSFT_RemoteServerGroup* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

MI_INLINE MI_Result MI_CALL MSFT_RemoteServerGroup_Set_Description(
    MSFT_RemoteServerGroup* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_RemoteServerGroup_SetPtr_Description(
    MSFT_RemoteServerGroup* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_RemoteServerGroup_Clear_Description(
    MSFT_RemoteServerGroup* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        2);
}

MI_INLINE MI_Result MI_CALL MSFT_RemoteServerGroup_Set_ElementName(
    MSFT_RemoteServerGroup* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_RemoteServerGroup_SetPtr_ElementName(
    MSFT_RemoteServerGroup* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_RemoteServerGroup_Clear_ElementName(
    MSFT_RemoteServerGroup* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        3);
}

MI_INLINE MI_Result MI_CALL MSFT_RemoteServerGroup_Set_FeatureName(
    MSFT_RemoteServerGroup* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->FeatureName)->value = x;
    ((MI_Uint16Field*)&self->FeatureName)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_RemoteServerGroup_Clear_FeatureName(
    MSFT_RemoteServerGroup* self)
{
    memset((void*)&self->FeatureName, 0, sizeof(self->FeatureName));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_RemoteServerGroup_Set_OtherFeatureName(
    MSFT_RemoteServerGroup* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        5,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_RemoteServerGroup_SetPtr_OtherFeatureName(
    MSFT_RemoteServerGroup* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        5,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_RemoteServerGroup_Clear_OtherFeatureName(
    MSFT_RemoteServerGroup* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        5);
}


#endif /* _MSFT_RemoteServerGroup_h */
