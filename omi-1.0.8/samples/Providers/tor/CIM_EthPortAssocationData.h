/* @migen@ */
/*
**==============================================================================
**
** WARNING: THIS FILE WAS AUTOMATICALLY GENERATED. PLEASE DO NOT EDIT.
**
**==============================================================================
*/
#ifndef _CIM_EthPortAssocationData_h
#define _CIM_EthPortAssocationData_h

#include <MI.h>
#include "MSFT_EthernetPort.h"
#include "CIM_EthernetPortAllocationSettingData.h"

/*
**==============================================================================
**
** CIM_EthPortAssocationData [CIM_EthPortAssocationData]
**
** Keys:
**    Left
**    Right
**
**==============================================================================
*/

typedef struct _CIM_EthPortAssocationData
{
    MI_Instance __instance;
    /* CIM_EthPortAssocationData properties */
    /*KEY*/ MSFT_EthernetPort_ConstRef Left;
    /*KEY*/ CIM_EthernetPortAllocationSettingData_ConstRef Right;
}
CIM_EthPortAssocationData;

typedef struct _CIM_EthPortAssocationData_Ref
{
    CIM_EthPortAssocationData* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
CIM_EthPortAssocationData_Ref;

typedef struct _CIM_EthPortAssocationData_ConstRef
{
    MI_CONST CIM_EthPortAssocationData* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
CIM_EthPortAssocationData_ConstRef;

typedef struct _CIM_EthPortAssocationData_Array
{
    struct _CIM_EthPortAssocationData** data;
    MI_Uint32 size;
}
CIM_EthPortAssocationData_Array;

typedef struct _CIM_EthPortAssocationData_ConstArray
{
    struct _CIM_EthPortAssocationData MI_CONST* MI_CONST* data;
    MI_Uint32 size;
}
CIM_EthPortAssocationData_ConstArray;

typedef struct _CIM_EthPortAssocationData_ArrayRef
{
    CIM_EthPortAssocationData_Array value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
CIM_EthPortAssocationData_ArrayRef;

typedef struct _CIM_EthPortAssocationData_ConstArrayRef
{
    CIM_EthPortAssocationData_ConstArray value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
CIM_EthPortAssocationData_ConstArrayRef;

MI_EXTERN_C MI_CONST MI_ClassDecl CIM_EthPortAssocationData_rtti;

MI_INLINE MI_Result MI_CALL CIM_EthPortAssocationData_Construct(
    CIM_EthPortAssocationData* self,
    MI_Context* context)
{
    return MI_ConstructInstance(context, &CIM_EthPortAssocationData_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL CIM_EthPortAssocationData_Clone(
    const CIM_EthPortAssocationData* self,
    CIM_EthPortAssocationData** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Boolean MI_CALL CIM_EthPortAssocationData_IsA(
    const MI_Instance* self)
{
    MI_Boolean res = MI_FALSE;
    return MI_Instance_IsA(self, &CIM_EthPortAssocationData_rtti, &res) == MI_RESULT_OK && res;
}

MI_INLINE MI_Result MI_CALL CIM_EthPortAssocationData_Destruct(CIM_EthPortAssocationData* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL CIM_EthPortAssocationData_Delete(CIM_EthPortAssocationData* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL CIM_EthPortAssocationData_Post(
    const CIM_EthPortAssocationData* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL CIM_EthPortAssocationData_Set_Left(
    CIM_EthPortAssocationData* self,
    const MSFT_EthernetPort* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        0,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_EthPortAssocationData_SetPtr_Left(
    CIM_EthPortAssocationData* self,
    const MSFT_EthernetPort* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        0,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_EthPortAssocationData_Clear_Left(
    CIM_EthPortAssocationData* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_EthPortAssocationData_Set_Right(
    CIM_EthPortAssocationData* self,
    const CIM_EthernetPortAllocationSettingData* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_EthPortAssocationData_SetPtr_Right(
    CIM_EthPortAssocationData* self,
    const CIM_EthernetPortAllocationSettingData* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_EthPortAssocationData_Clear_Right(
    CIM_EthPortAssocationData* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

/*
**==============================================================================
**
** CIM_EthPortAssocationData provider function prototypes
**
**==============================================================================
*/

/* The developer may optionally define this structure */
typedef struct _CIM_EthPortAssocationData_Self CIM_EthPortAssocationData_Self;

MI_EXTERN_C void MI_CALL CIM_EthPortAssocationData_Load(
    CIM_EthPortAssocationData_Self** self,
    MI_Module_Self* selfModule,
    MI_Context* context);

MI_EXTERN_C void MI_CALL CIM_EthPortAssocationData_Unload(
    CIM_EthPortAssocationData_Self* self,
    MI_Context* context);

MI_EXTERN_C void MI_CALL CIM_EthPortAssocationData_EnumerateInstances(
    CIM_EthPortAssocationData_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter);

MI_EXTERN_C void MI_CALL CIM_EthPortAssocationData_GetInstance(
    CIM_EthPortAssocationData_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_EthPortAssocationData* instanceName,
    const MI_PropertySet* propertySet);

MI_EXTERN_C void MI_CALL CIM_EthPortAssocationData_CreateInstance(
    CIM_EthPortAssocationData_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_EthPortAssocationData* newInstance);

MI_EXTERN_C void MI_CALL CIM_EthPortAssocationData_ModifyInstance(
    CIM_EthPortAssocationData_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_EthPortAssocationData* modifiedInstance,
    const MI_PropertySet* propertySet);

MI_EXTERN_C void MI_CALL CIM_EthPortAssocationData_DeleteInstance(
    CIM_EthPortAssocationData_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_EthPortAssocationData* instanceName);

MI_EXTERN_C void MI_CALL CIM_EthPortAssocationData_AssociatorInstancesLeft(
    CIM_EthPortAssocationData_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_EthernetPort* instanceName,
    const MI_Char* resultClass,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter);

MI_EXTERN_C void MI_CALL CIM_EthPortAssocationData_AssociatorInstancesRight(
    CIM_EthPortAssocationData_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_EthernetPortAllocationSettingData* instanceName,
    const MI_Char* resultClass,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter);

MI_EXTERN_C void MI_CALL CIM_EthPortAssocationData_ReferenceInstancesLeft(
    CIM_EthPortAssocationData_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_EthernetPort* instanceName,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter);

MI_EXTERN_C void MI_CALL CIM_EthPortAssocationData_ReferenceInstancesRight(
    CIM_EthPortAssocationData_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_EthernetPortAllocationSettingData* instanceName,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter);


#endif /* _CIM_EthPortAssocationData_h */
