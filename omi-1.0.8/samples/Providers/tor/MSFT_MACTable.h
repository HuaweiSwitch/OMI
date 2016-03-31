/* @migen@ */
/*
**==============================================================================
**
** WARNING: THIS FILE WAS AUTOMATICALLY GENERATED. PLEASE DO NOT EDIT.
**
**==============================================================================
*/
#ifndef _MSFT_MACTable_h
#define _MSFT_MACTable_h

#include <MI.h>
#include "CIM_SystemSpecificCollection.h"

/*
**==============================================================================
**
** MSFT_MACTable [MSFT_MACTable]
**
** Keys:
**    InstanceID
**
**==============================================================================
*/

typedef struct _MSFT_MACTable /* extends CIM_SystemSpecificCollection */
{
    MI_Instance __instance;
    /* CIM_ManagedElement properties */
    /*KEY*/ MI_ConstStringField InstanceID;
    MI_ConstStringField Caption;
    MI_ConstStringField Description;
    MI_ConstStringField ElementName;
    /* CIM_Collection properties */
    /* CIM_SystemSpecificCollection properties */
    /* MSFT_MACTable properties */
}
MSFT_MACTable;

typedef struct _MSFT_MACTable_Ref
{
    MSFT_MACTable* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MSFT_MACTable_Ref;

typedef struct _MSFT_MACTable_ConstRef
{
    MI_CONST MSFT_MACTable* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MSFT_MACTable_ConstRef;

typedef struct _MSFT_MACTable_Array
{
    struct _MSFT_MACTable** data;
    MI_Uint32 size;
}
MSFT_MACTable_Array;

typedef struct _MSFT_MACTable_ConstArray
{
    struct _MSFT_MACTable MI_CONST* MI_CONST* data;
    MI_Uint32 size;
}
MSFT_MACTable_ConstArray;

typedef struct _MSFT_MACTable_ArrayRef
{
    MSFT_MACTable_Array value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MSFT_MACTable_ArrayRef;

typedef struct _MSFT_MACTable_ConstArrayRef
{
    MSFT_MACTable_ConstArray value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MSFT_MACTable_ConstArrayRef;

MI_EXTERN_C MI_CONST MI_ClassDecl MSFT_MACTable_rtti;

MI_INLINE MI_Result MI_CALL MSFT_MACTable_Construct(
    MSFT_MACTable* self,
    MI_Context* context)
{
    return MI_ConstructInstance(context, &MSFT_MACTable_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_MACTable_Clone(
    const MSFT_MACTable* self,
    MSFT_MACTable** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Boolean MI_CALL MSFT_MACTable_IsA(
    const MI_Instance* self)
{
    MI_Boolean res = MI_FALSE;
    return MI_Instance_IsA(self, &MSFT_MACTable_rtti, &res) == MI_RESULT_OK && res;
}

MI_INLINE MI_Result MI_CALL MSFT_MACTable_Destruct(MSFT_MACTable* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_MACTable_Delete(MSFT_MACTable* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_MACTable_Post(
    const MSFT_MACTable* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_MACTable_Set_InstanceID(
    MSFT_MACTable* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        0,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_MACTable_SetPtr_InstanceID(
    MSFT_MACTable* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        0,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_MACTable_Clear_InstanceID(
    MSFT_MACTable* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_MACTable_Set_Caption(
    MSFT_MACTable* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_MACTable_SetPtr_Caption(
    MSFT_MACTable* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_MACTable_Clear_Caption(
    MSFT_MACTable* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

MI_INLINE MI_Result MI_CALL MSFT_MACTable_Set_Description(
    MSFT_MACTable* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_MACTable_SetPtr_Description(
    MSFT_MACTable* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_MACTable_Clear_Description(
    MSFT_MACTable* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        2);
}

MI_INLINE MI_Result MI_CALL MSFT_MACTable_Set_ElementName(
    MSFT_MACTable* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_MACTable_SetPtr_ElementName(
    MSFT_MACTable* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_MACTable_Clear_ElementName(
    MSFT_MACTable* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        3);
}

/*
**==============================================================================
**
** MSFT_MACTable provider function prototypes
**
**==============================================================================
*/

/* The developer may optionally define this structure */
typedef struct _MSFT_MACTable_Self MSFT_MACTable_Self;

MI_EXTERN_C void MI_CALL MSFT_MACTable_Load(
    MSFT_MACTable_Self** self,
    MI_Module_Self* selfModule,
    MI_Context* context);

MI_EXTERN_C void MI_CALL MSFT_MACTable_Unload(
    MSFT_MACTable_Self* self,
    MI_Context* context);

MI_EXTERN_C void MI_CALL MSFT_MACTable_EnumerateInstances(
    MSFT_MACTable_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter);

MI_EXTERN_C void MI_CALL MSFT_MACTable_GetInstance(
    MSFT_MACTable_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_MACTable* instanceName,
    const MI_PropertySet* propertySet);

MI_EXTERN_C void MI_CALL MSFT_MACTable_CreateInstance(
    MSFT_MACTable_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_MACTable* newInstance);

MI_EXTERN_C void MI_CALL MSFT_MACTable_ModifyInstance(
    MSFT_MACTable_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_MACTable* modifiedInstance,
    const MI_PropertySet* propertySet);

MI_EXTERN_C void MI_CALL MSFT_MACTable_DeleteInstance(
    MSFT_MACTable_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_MACTable* instanceName);


#endif /* _MSFT_MACTable_h */
