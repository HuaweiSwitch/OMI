/* @migen@ */
/*
**==============================================================================
**
** WARNING: THIS FILE WAS AUTOMATICALLY GENERATED. PLEASE DO NOT EDIT.
**
**==============================================================================
*/
#ifndef _CIM_EthPortAssociationLANEnd_h
#define _CIM_EthPortAssociationLANEnd_h

#include <MI.h>
#include "MSFT_EthernetPort.h"
#include "CIM_LANEndpoint.h"

/*
**==============================================================================
**
** CIM_EthPortAssociationLANEnd [CIM_EthPortAssociationLANEnd]
**
** Keys:
**    Left
**    Right
**
**==============================================================================
*/

typedef struct _CIM_EthPortAssociationLANEnd
{
    MI_Instance __instance;
    /* CIM_EthPortAssociationLANEnd properties */
    /*KEY*/ MSFT_EthernetPort_ConstRef Left;
    /*KEY*/ CIM_LANEndpoint_ConstRef Right;
}
CIM_EthPortAssociationLANEnd;

typedef struct _CIM_EthPortAssociationLANEnd_Ref
{
    CIM_EthPortAssociationLANEnd* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
CIM_EthPortAssociationLANEnd_Ref;

typedef struct _CIM_EthPortAssociationLANEnd_ConstRef
{
    MI_CONST CIM_EthPortAssociationLANEnd* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
CIM_EthPortAssociationLANEnd_ConstRef;

typedef struct _CIM_EthPortAssociationLANEnd_Array
{
    struct _CIM_EthPortAssociationLANEnd** data;
    MI_Uint32 size;
}
CIM_EthPortAssociationLANEnd_Array;

typedef struct _CIM_EthPortAssociationLANEnd_ConstArray
{
    struct _CIM_EthPortAssociationLANEnd MI_CONST* MI_CONST* data;
    MI_Uint32 size;
}
CIM_EthPortAssociationLANEnd_ConstArray;

typedef struct _CIM_EthPortAssociationLANEnd_ArrayRef
{
    CIM_EthPortAssociationLANEnd_Array value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
CIM_EthPortAssociationLANEnd_ArrayRef;

typedef struct _CIM_EthPortAssociationLANEnd_ConstArrayRef
{
    CIM_EthPortAssociationLANEnd_ConstArray value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
CIM_EthPortAssociationLANEnd_ConstArrayRef;

MI_EXTERN_C MI_CONST MI_ClassDecl CIM_EthPortAssociationLANEnd_rtti;

MI_INLINE MI_Result MI_CALL CIM_EthPortAssociationLANEnd_Construct(
    CIM_EthPortAssociationLANEnd* self,
    MI_Context* context)
{
    return MI_ConstructInstance(context, &CIM_EthPortAssociationLANEnd_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL CIM_EthPortAssociationLANEnd_Clone(
    const CIM_EthPortAssociationLANEnd* self,
    CIM_EthPortAssociationLANEnd** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Boolean MI_CALL CIM_EthPortAssociationLANEnd_IsA(
    const MI_Instance* self)
{
    MI_Boolean res = MI_FALSE;
    return MI_Instance_IsA(self, &CIM_EthPortAssociationLANEnd_rtti, &res) == MI_RESULT_OK && res;
}

MI_INLINE MI_Result MI_CALL CIM_EthPortAssociationLANEnd_Destruct(CIM_EthPortAssociationLANEnd* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL CIM_EthPortAssociationLANEnd_Delete(CIM_EthPortAssociationLANEnd* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL CIM_EthPortAssociationLANEnd_Post(
    const CIM_EthPortAssociationLANEnd* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL CIM_EthPortAssociationLANEnd_Set_Left(
    CIM_EthPortAssociationLANEnd* self,
    const MSFT_EthernetPort* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        0,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_EthPortAssociationLANEnd_SetPtr_Left(
    CIM_EthPortAssociationLANEnd* self,
    const MSFT_EthernetPort* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        0,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_EthPortAssociationLANEnd_Clear_Left(
    CIM_EthPortAssociationLANEnd* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_EthPortAssociationLANEnd_Set_Right(
    CIM_EthPortAssociationLANEnd* self,
    const CIM_LANEndpoint* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_EthPortAssociationLANEnd_SetPtr_Right(
    CIM_EthPortAssociationLANEnd* self,
    const CIM_LANEndpoint* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_EthPortAssociationLANEnd_Clear_Right(
    CIM_EthPortAssociationLANEnd* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

/*
**==============================================================================
**
** CIM_EthPortAssociationLANEnd provider function prototypes
**
**==============================================================================
*/

/* The developer may optionally define this structure */
typedef struct _CIM_EthPortAssociationLANEnd_Self CIM_EthPortAssociationLANEnd_Self;

MI_EXTERN_C void MI_CALL CIM_EthPortAssociationLANEnd_Load(
    CIM_EthPortAssociationLANEnd_Self** self,
    MI_Module_Self* selfModule,
    MI_Context* context);

MI_EXTERN_C void MI_CALL CIM_EthPortAssociationLANEnd_Unload(
    CIM_EthPortAssociationLANEnd_Self* self,
    MI_Context* context);

MI_EXTERN_C void MI_CALL CIM_EthPortAssociationLANEnd_EnumerateInstances(
    CIM_EthPortAssociationLANEnd_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter);

MI_EXTERN_C void MI_CALL CIM_EthPortAssociationLANEnd_GetInstance(
    CIM_EthPortAssociationLANEnd_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_EthPortAssociationLANEnd* instanceName,
    const MI_PropertySet* propertySet);

MI_EXTERN_C void MI_CALL CIM_EthPortAssociationLANEnd_CreateInstance(
    CIM_EthPortAssociationLANEnd_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_EthPortAssociationLANEnd* newInstance);

MI_EXTERN_C void MI_CALL CIM_EthPortAssociationLANEnd_ModifyInstance(
    CIM_EthPortAssociationLANEnd_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_EthPortAssociationLANEnd* modifiedInstance,
    const MI_PropertySet* propertySet);

MI_EXTERN_C void MI_CALL CIM_EthPortAssociationLANEnd_DeleteInstance(
    CIM_EthPortAssociationLANEnd_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_EthPortAssociationLANEnd* instanceName);

MI_EXTERN_C void MI_CALL CIM_EthPortAssociationLANEnd_AssociatorInstancesLeft(
    CIM_EthPortAssociationLANEnd_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_EthernetPort* instanceName,
    const MI_Char* resultClass,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter);

MI_EXTERN_C void MI_CALL CIM_EthPortAssociationLANEnd_AssociatorInstancesRight(
    CIM_EthPortAssociationLANEnd_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_LANEndpoint* instanceName,
    const MI_Char* resultClass,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter);

MI_EXTERN_C void MI_CALL CIM_EthPortAssociationLANEnd_ReferenceInstancesLeft(
    CIM_EthPortAssociationLANEnd_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_EthernetPort* instanceName,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter);

MI_EXTERN_C void MI_CALL CIM_EthPortAssociationLANEnd_ReferenceInstancesRight(
    CIM_EthPortAssociationLANEnd_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_LANEndpoint* instanceName,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter);


#endif /* _CIM_EthPortAssociationLANEnd_h */
