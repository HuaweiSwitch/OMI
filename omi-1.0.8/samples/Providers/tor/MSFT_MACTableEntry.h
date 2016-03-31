/* @migen@ */
/*
**==============================================================================
**
** WARNING: THIS FILE WAS AUTOMATICALLY GENERATED. PLEASE DO NOT EDIT.
**
**==============================================================================
*/
#ifndef _MSFT_MACTableEntry_h
#define _MSFT_MACTableEntry_h

#include <MI.h>
#include "CIM_ManagedElement.h"

/*
**==============================================================================
**
** MSFT_MACTableEntry [MSFT_MACTableEntry]
**
** Keys:
**    InstanceID
**
**==============================================================================
*/

typedef struct _MSFT_MACTableEntry /* extends CIM_ManagedElement */
{
    MI_Instance __instance;
    /* CIM_ManagedElement properties */
    /*KEY*/ MI_ConstStringField InstanceID;
    MI_ConstStringField Caption;
    MI_ConstStringField Description;
    MI_ConstStringField ElementName;
    /* MSFT_MACTableEntry properties */
    MI_ConstStringField MACAddress;
    MI_ConstStringField VLANId;
    MI_ConstUint16Field EntryType;
    MI_ConstStringField InterfaceName;
    MI_ConstUint32Field Age;
}
MSFT_MACTableEntry;

typedef struct _MSFT_MACTableEntry_Ref
{
    MSFT_MACTableEntry* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MSFT_MACTableEntry_Ref;

typedef struct _MSFT_MACTableEntry_ConstRef
{
    MI_CONST MSFT_MACTableEntry* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MSFT_MACTableEntry_ConstRef;

typedef struct _MSFT_MACTableEntry_Array
{
    struct _MSFT_MACTableEntry** data;
    MI_Uint32 size;
}
MSFT_MACTableEntry_Array;

typedef struct _MSFT_MACTableEntry_ConstArray
{
    struct _MSFT_MACTableEntry MI_CONST* MI_CONST* data;
    MI_Uint32 size;
}
MSFT_MACTableEntry_ConstArray;

typedef struct _MSFT_MACTableEntry_ArrayRef
{
    MSFT_MACTableEntry_Array value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MSFT_MACTableEntry_ArrayRef;

typedef struct _MSFT_MACTableEntry_ConstArrayRef
{
    MSFT_MACTableEntry_ConstArray value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MSFT_MACTableEntry_ConstArrayRef;

MI_EXTERN_C MI_CONST MI_ClassDecl MSFT_MACTableEntry_rtti;

MI_INLINE MI_Result MI_CALL MSFT_MACTableEntry_Construct(
    MSFT_MACTableEntry* self,
    MI_Context* context)
{
    return MI_ConstructInstance(context, &MSFT_MACTableEntry_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_MACTableEntry_Clone(
    const MSFT_MACTableEntry* self,
    MSFT_MACTableEntry** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Boolean MI_CALL MSFT_MACTableEntry_IsA(
    const MI_Instance* self)
{
    MI_Boolean res = MI_FALSE;
    return MI_Instance_IsA(self, &MSFT_MACTableEntry_rtti, &res) == MI_RESULT_OK && res;
}

MI_INLINE MI_Result MI_CALL MSFT_MACTableEntry_Destruct(MSFT_MACTableEntry* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_MACTableEntry_Delete(MSFT_MACTableEntry* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_MACTableEntry_Post(
    const MSFT_MACTableEntry* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_MACTableEntry_Set_InstanceID(
    MSFT_MACTableEntry* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        0,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_MACTableEntry_SetPtr_InstanceID(
    MSFT_MACTableEntry* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        0,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_MACTableEntry_Clear_InstanceID(
    MSFT_MACTableEntry* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_MACTableEntry_Set_Caption(
    MSFT_MACTableEntry* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_MACTableEntry_SetPtr_Caption(
    MSFT_MACTableEntry* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_MACTableEntry_Clear_Caption(
    MSFT_MACTableEntry* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

MI_INLINE MI_Result MI_CALL MSFT_MACTableEntry_Set_Description(
    MSFT_MACTableEntry* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_MACTableEntry_SetPtr_Description(
    MSFT_MACTableEntry* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_MACTableEntry_Clear_Description(
    MSFT_MACTableEntry* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        2);
}

MI_INLINE MI_Result MI_CALL MSFT_MACTableEntry_Set_ElementName(
    MSFT_MACTableEntry* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_MACTableEntry_SetPtr_ElementName(
    MSFT_MACTableEntry* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_MACTableEntry_Clear_ElementName(
    MSFT_MACTableEntry* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        3);
}

MI_INLINE MI_Result MI_CALL MSFT_MACTableEntry_Set_MACAddress(
    MSFT_MACTableEntry* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        4,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_MACTableEntry_SetPtr_MACAddress(
    MSFT_MACTableEntry* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        4,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_MACTableEntry_Clear_MACAddress(
    MSFT_MACTableEntry* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        4);
}

MI_INLINE MI_Result MI_CALL MSFT_MACTableEntry_Set_VLANId(
    MSFT_MACTableEntry* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        5,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_MACTableEntry_SetPtr_VLANId(
    MSFT_MACTableEntry* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        5,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_MACTableEntry_Clear_VLANId(
    MSFT_MACTableEntry* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        5);
}

MI_INLINE MI_Result MI_CALL MSFT_MACTableEntry_Set_EntryType(
    MSFT_MACTableEntry* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->EntryType)->value = x;
    ((MI_Uint16Field*)&self->EntryType)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_MACTableEntry_Clear_EntryType(
    MSFT_MACTableEntry* self)
{
    memset((void*)&self->EntryType, 0, sizeof(self->EntryType));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_MACTableEntry_Set_InterfaceName(
    MSFT_MACTableEntry* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        7,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_MACTableEntry_SetPtr_InterfaceName(
    MSFT_MACTableEntry* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        7,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_MACTableEntry_Clear_InterfaceName(
    MSFT_MACTableEntry* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        7);
}

MI_INLINE MI_Result MI_CALL MSFT_MACTableEntry_Set_Age(
    MSFT_MACTableEntry* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->Age)->value = x;
    ((MI_Uint32Field*)&self->Age)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_MACTableEntry_Clear_Age(
    MSFT_MACTableEntry* self)
{
    memset((void*)&self->Age, 0, sizeof(self->Age));
    return MI_RESULT_OK;
}

/*
**==============================================================================
**
** MSFT_MACTableEntry provider function prototypes
**
**==============================================================================
*/

/* The developer may optionally define this structure */
typedef struct _MSFT_MACTableEntry_Self MSFT_MACTableEntry_Self;

MI_EXTERN_C void MI_CALL MSFT_MACTableEntry_Load(
    MSFT_MACTableEntry_Self** self,
    MI_Module_Self* selfModule,
    MI_Context* context);

MI_EXTERN_C void MI_CALL MSFT_MACTableEntry_Unload(
    MSFT_MACTableEntry_Self* self,
    MI_Context* context);

MI_EXTERN_C void MI_CALL MSFT_MACTableEntry_EnumerateInstances(
    MSFT_MACTableEntry_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter);

MI_EXTERN_C void MI_CALL MSFT_MACTableEntry_GetInstance(
    MSFT_MACTableEntry_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_MACTableEntry* instanceName,
    const MI_PropertySet* propertySet);

MI_EXTERN_C void MI_CALL MSFT_MACTableEntry_CreateInstance(
    MSFT_MACTableEntry_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_MACTableEntry* newInstance);

MI_EXTERN_C void MI_CALL MSFT_MACTableEntry_ModifyInstance(
    MSFT_MACTableEntry_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_MACTableEntry* modifiedInstance,
    const MI_PropertySet* propertySet);

MI_EXTERN_C void MI_CALL MSFT_MACTableEntry_DeleteInstance(
    MSFT_MACTableEntry_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_MACTableEntry* instanceName);


#endif /* _MSFT_MACTableEntry_h */
