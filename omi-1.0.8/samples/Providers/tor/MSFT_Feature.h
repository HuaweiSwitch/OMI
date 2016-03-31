/* @migen@ */
/*
**==============================================================================
**
** WARNING: THIS FILE WAS AUTOMATICALLY GENERATED. PLEASE DO NOT EDIT.
**
**==============================================================================
*/
#ifndef _MSFT_Feature_h
#define _MSFT_Feature_h

#include <MI.h>
#include "CIM_LogicalElement.h"

/*
**==============================================================================
**
** MSFT_Feature [MSFT_Feature]
**
** Keys:
**    InstanceID
**
**==============================================================================
*/

typedef struct _MSFT_Feature /* extends CIM_LogicalElement */
{
    MI_Instance __instance;
    /* CIM_ManagedElement properties */
    /*KEY*/ MI_ConstStringField InstanceID;
    MI_ConstStringField Caption;
    MI_ConstStringField Description;
    MI_ConstStringField ElementName;
    /* CIM_ManagedSystemElement properties */
    MI_ConstDatetimeField InstallDate;
    MI_ConstStringField Name;
    MI_ConstUint16AField OperationalStatus;
    MI_ConstStringAField StatusDescriptions;
    MI_ConstStringField Status;
    MI_ConstUint16Field HealthState;
    MI_ConstUint16Field CommunicationStatus;
    MI_ConstUint16Field DetailedStatus;
    MI_ConstUint16Field OperatingStatus;
    MI_ConstUint16Field PrimaryStatus;
    /* CIM_LogicalElement properties */
    /* MSFT_Feature properties */
    MI_ConstUint16Field FeatureName;
    MI_ConstStringField OtherFeatureName;
    MI_ConstBooleanField IsEnabled;
    MI_ConstUint16Field Count;
}
MSFT_Feature;

typedef struct _MSFT_Feature_Ref
{
    MSFT_Feature* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MSFT_Feature_Ref;

typedef struct _MSFT_Feature_ConstRef
{
    MI_CONST MSFT_Feature* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MSFT_Feature_ConstRef;

typedef struct _MSFT_Feature_Array
{
    struct _MSFT_Feature** data;
    MI_Uint32 size;
}
MSFT_Feature_Array;

typedef struct _MSFT_Feature_ConstArray
{
    struct _MSFT_Feature MI_CONST* MI_CONST* data;
    MI_Uint32 size;
}
MSFT_Feature_ConstArray;

typedef struct _MSFT_Feature_ArrayRef
{
    MSFT_Feature_Array value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MSFT_Feature_ArrayRef;

typedef struct _MSFT_Feature_ConstArrayRef
{
    MSFT_Feature_ConstArray value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MSFT_Feature_ConstArrayRef;

MI_EXTERN_C MI_CONST MI_ClassDecl MSFT_Feature_rtti;

MI_INLINE MI_Result MI_CALL MSFT_Feature_Construct(
    MSFT_Feature* self,
    MI_Context* context)
{
    return MI_ConstructInstance(context, &MSFT_Feature_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_Feature_Clone(
    const MSFT_Feature* self,
    MSFT_Feature** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Boolean MI_CALL MSFT_Feature_IsA(
    const MI_Instance* self)
{
    MI_Boolean res = MI_FALSE;
    return MI_Instance_IsA(self, &MSFT_Feature_rtti, &res) == MI_RESULT_OK && res;
}

MI_INLINE MI_Result MI_CALL MSFT_Feature_Destruct(MSFT_Feature* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_Feature_Delete(MSFT_Feature* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_Feature_Post(
    const MSFT_Feature* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_Feature_Set_InstanceID(
    MSFT_Feature* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        0,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_Feature_SetPtr_InstanceID(
    MSFT_Feature* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        0,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_Feature_Clear_InstanceID(
    MSFT_Feature* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_Feature_Set_Caption(
    MSFT_Feature* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_Feature_SetPtr_Caption(
    MSFT_Feature* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_Feature_Clear_Caption(
    MSFT_Feature* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

MI_INLINE MI_Result MI_CALL MSFT_Feature_Set_Description(
    MSFT_Feature* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_Feature_SetPtr_Description(
    MSFT_Feature* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_Feature_Clear_Description(
    MSFT_Feature* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        2);
}

MI_INLINE MI_Result MI_CALL MSFT_Feature_Set_ElementName(
    MSFT_Feature* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_Feature_SetPtr_ElementName(
    MSFT_Feature* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_Feature_Clear_ElementName(
    MSFT_Feature* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        3);
}

MI_INLINE MI_Result MI_CALL MSFT_Feature_Set_InstallDate(
    MSFT_Feature* self,
    MI_Datetime x)
{
    ((MI_DatetimeField*)&self->InstallDate)->value = x;
    ((MI_DatetimeField*)&self->InstallDate)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_Feature_Clear_InstallDate(
    MSFT_Feature* self)
{
    memset((void*)&self->InstallDate, 0, sizeof(self->InstallDate));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_Feature_Set_Name(
    MSFT_Feature* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        5,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_Feature_SetPtr_Name(
    MSFT_Feature* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        5,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_Feature_Clear_Name(
    MSFT_Feature* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        5);
}

MI_INLINE MI_Result MI_CALL MSFT_Feature_Set_OperationalStatus(
    MSFT_Feature* self,
    const MI_Uint16* data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        6,
        (MI_Value*)&arr,
        MI_UINT16A,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_Feature_SetPtr_OperationalStatus(
    MSFT_Feature* self,
    const MI_Uint16* data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        6,
        (MI_Value*)&arr,
        MI_UINT16A,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_Feature_Clear_OperationalStatus(
    MSFT_Feature* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        6);
}

MI_INLINE MI_Result MI_CALL MSFT_Feature_Set_StatusDescriptions(
    MSFT_Feature* self,
    const MI_Char** data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        7,
        (MI_Value*)&arr,
        MI_STRINGA,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_Feature_SetPtr_StatusDescriptions(
    MSFT_Feature* self,
    const MI_Char** data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        7,
        (MI_Value*)&arr,
        MI_STRINGA,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_Feature_Clear_StatusDescriptions(
    MSFT_Feature* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        7);
}

MI_INLINE MI_Result MI_CALL MSFT_Feature_Set_Status(
    MSFT_Feature* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        8,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_Feature_SetPtr_Status(
    MSFT_Feature* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        8,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_Feature_Clear_Status(
    MSFT_Feature* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        8);
}

MI_INLINE MI_Result MI_CALL MSFT_Feature_Set_HealthState(
    MSFT_Feature* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->HealthState)->value = x;
    ((MI_Uint16Field*)&self->HealthState)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_Feature_Clear_HealthState(
    MSFT_Feature* self)
{
    memset((void*)&self->HealthState, 0, sizeof(self->HealthState));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_Feature_Set_CommunicationStatus(
    MSFT_Feature* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->CommunicationStatus)->value = x;
    ((MI_Uint16Field*)&self->CommunicationStatus)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_Feature_Clear_CommunicationStatus(
    MSFT_Feature* self)
{
    memset((void*)&self->CommunicationStatus, 0, sizeof(self->CommunicationStatus));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_Feature_Set_DetailedStatus(
    MSFT_Feature* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->DetailedStatus)->value = x;
    ((MI_Uint16Field*)&self->DetailedStatus)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_Feature_Clear_DetailedStatus(
    MSFT_Feature* self)
{
    memset((void*)&self->DetailedStatus, 0, sizeof(self->DetailedStatus));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_Feature_Set_OperatingStatus(
    MSFT_Feature* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->OperatingStatus)->value = x;
    ((MI_Uint16Field*)&self->OperatingStatus)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_Feature_Clear_OperatingStatus(
    MSFT_Feature* self)
{
    memset((void*)&self->OperatingStatus, 0, sizeof(self->OperatingStatus));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_Feature_Set_PrimaryStatus(
    MSFT_Feature* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->PrimaryStatus)->value = x;
    ((MI_Uint16Field*)&self->PrimaryStatus)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_Feature_Clear_PrimaryStatus(
    MSFT_Feature* self)
{
    memset((void*)&self->PrimaryStatus, 0, sizeof(self->PrimaryStatus));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_Feature_Set_FeatureName(
    MSFT_Feature* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->FeatureName)->value = x;
    ((MI_Uint16Field*)&self->FeatureName)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_Feature_Clear_FeatureName(
    MSFT_Feature* self)
{
    memset((void*)&self->FeatureName, 0, sizeof(self->FeatureName));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_Feature_Set_OtherFeatureName(
    MSFT_Feature* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        15,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_Feature_SetPtr_OtherFeatureName(
    MSFT_Feature* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        15,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_Feature_Clear_OtherFeatureName(
    MSFT_Feature* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        15);
}

MI_INLINE MI_Result MI_CALL MSFT_Feature_Set_IsEnabled(
    MSFT_Feature* self,
    MI_Boolean x)
{
    ((MI_BooleanField*)&self->IsEnabled)->value = x;
    ((MI_BooleanField*)&self->IsEnabled)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_Feature_Clear_IsEnabled(
    MSFT_Feature* self)
{
    memset((void*)&self->IsEnabled, 0, sizeof(self->IsEnabled));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_Feature_Set_Count(
    MSFT_Feature* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->Count)->value = x;
    ((MI_Uint16Field*)&self->Count)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_Feature_Clear_Count(
    MSFT_Feature* self)
{
    memset((void*)&self->Count, 0, sizeof(self->Count));
    return MI_RESULT_OK;
}

/*
**==============================================================================
**
** MSFT_Feature provider function prototypes
**
**==============================================================================
*/

/* The developer may optionally define this structure */
typedef struct _MSFT_Feature_Self MSFT_Feature_Self;

MI_EXTERN_C void MI_CALL MSFT_Feature_Load(
    MSFT_Feature_Self** self,
    MI_Module_Self* selfModule,
    MI_Context* context);

MI_EXTERN_C void MI_CALL MSFT_Feature_Unload(
    MSFT_Feature_Self* self,
    MI_Context* context);

MI_EXTERN_C void MI_CALL MSFT_Feature_EnumerateInstances(
    MSFT_Feature_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter);

MI_EXTERN_C void MI_CALL MSFT_Feature_GetInstance(
    MSFT_Feature_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_Feature* instanceName,
    const MI_PropertySet* propertySet);

MI_EXTERN_C void MI_CALL MSFT_Feature_CreateInstance(
    MSFT_Feature_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_Feature* newInstance);

MI_EXTERN_C void MI_CALL MSFT_Feature_ModifyInstance(
    MSFT_Feature_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_Feature* modifiedInstance,
    const MI_PropertySet* propertySet);

MI_EXTERN_C void MI_CALL MSFT_Feature_DeleteInstance(
    MSFT_Feature_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_Feature* instanceName);


#endif /* _MSFT_Feature_h */
