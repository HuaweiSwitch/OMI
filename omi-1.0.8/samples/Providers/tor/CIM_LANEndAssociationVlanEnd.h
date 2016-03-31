/* @migen@ */
/*
**==============================================================================
**
** WARNING: THIS FILE WAS AUTOMATICALLY GENERATED. PLEASE DO NOT EDIT.
**
**==============================================================================
*/
#ifndef _CIM_LANEndAssociationVlanEnd_h
#define _CIM_LANEndAssociationVlanEnd_h

#include <MI.h>
#include "CIM_LANEndpoint.h"
#include "CIM_VLANEndpoint.h"

/*
**==============================================================================
**
** CIM_LANEndAssociationVlanEnd [CIM_LANEndAssociationVlanEnd]
**
** Keys:
**    Left
**    Right
**
**==============================================================================
*/

typedef struct _CIM_LANEndAssociationVlanEnd
{
    MI_Instance __instance;
    /* CIM_LANEndAssociationVlanEnd properties */
    /*KEY*/ CIM_LANEndpoint_ConstRef Left;
    /*KEY*/ CIM_VLANEndpoint_ConstRef Right;
}
CIM_LANEndAssociationVlanEnd;

typedef struct _CIM_LANEndAssociationVlanEnd_Ref
{
    CIM_LANEndAssociationVlanEnd* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
CIM_LANEndAssociationVlanEnd_Ref;

typedef struct _CIM_LANEndAssociationVlanEnd_ConstRef
{
    MI_CONST CIM_LANEndAssociationVlanEnd* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
CIM_LANEndAssociationVlanEnd_ConstRef;

typedef struct _CIM_LANEndAssociationVlanEnd_Array
{
    struct _CIM_LANEndAssociationVlanEnd** data;
    MI_Uint32 size;
}
CIM_LANEndAssociationVlanEnd_Array;

typedef struct _CIM_LANEndAssociationVlanEnd_ConstArray
{
    struct _CIM_LANEndAssociationVlanEnd MI_CONST* MI_CONST* data;
    MI_Uint32 size;
}
CIM_LANEndAssociationVlanEnd_ConstArray;

typedef struct _CIM_LANEndAssociationVlanEnd_ArrayRef
{
    CIM_LANEndAssociationVlanEnd_Array value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
CIM_LANEndAssociationVlanEnd_ArrayRef;

typedef struct _CIM_LANEndAssociationVlanEnd_ConstArrayRef
{
    CIM_LANEndAssociationVlanEnd_ConstArray value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
CIM_LANEndAssociationVlanEnd_ConstArrayRef;

MI_EXTERN_C MI_CONST MI_ClassDecl CIM_LANEndAssociationVlanEnd_rtti;

MI_INLINE MI_Result MI_CALL CIM_LANEndAssociationVlanEnd_Construct(
    CIM_LANEndAssociationVlanEnd* self,
    MI_Context* context)
{
    return MI_ConstructInstance(context, &CIM_LANEndAssociationVlanEnd_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL CIM_LANEndAssociationVlanEnd_Clone(
    const CIM_LANEndAssociationVlanEnd* self,
    CIM_LANEndAssociationVlanEnd** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Boolean MI_CALL CIM_LANEndAssociationVlanEnd_IsA(
    const MI_Instance* self)
{
    MI_Boolean res = MI_FALSE;
    return MI_Instance_IsA(self, &CIM_LANEndAssociationVlanEnd_rtti, &res) == MI_RESULT_OK && res;
}

MI_INLINE MI_Result MI_CALL CIM_LANEndAssociationVlanEnd_Destruct(CIM_LANEndAssociationVlanEnd* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL CIM_LANEndAssociationVlanEnd_Delete(CIM_LANEndAssociationVlanEnd* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL CIM_LANEndAssociationVlanEnd_Post(
    const CIM_LANEndAssociationVlanEnd* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL CIM_LANEndAssociationVlanEnd_Set_Left(
    CIM_LANEndAssociationVlanEnd* self,
    const CIM_LANEndpoint* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        0,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_LANEndAssociationVlanEnd_SetPtr_Left(
    CIM_LANEndAssociationVlanEnd* self,
    const CIM_LANEndpoint* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        0,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_LANEndAssociationVlanEnd_Clear_Left(
    CIM_LANEndAssociationVlanEnd* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_LANEndAssociationVlanEnd_Set_Right(
    CIM_LANEndAssociationVlanEnd* self,
    const CIM_VLANEndpoint* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_LANEndAssociationVlanEnd_SetPtr_Right(
    CIM_LANEndAssociationVlanEnd* self,
    const CIM_VLANEndpoint* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_LANEndAssociationVlanEnd_Clear_Right(
    CIM_LANEndAssociationVlanEnd* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

/*
**==============================================================================
**
** CIM_LANEndAssociationVlanEnd provider function prototypes
**
**==============================================================================
*/

/* The developer may optionally define this structure */
typedef struct _CIM_LANEndAssociationVlanEnd_Self CIM_LANEndAssociationVlanEnd_Self;

MI_EXTERN_C void MI_CALL CIM_LANEndAssociationVlanEnd_Load(
    CIM_LANEndAssociationVlanEnd_Self** self,
    MI_Module_Self* selfModule,
    MI_Context* context);

MI_EXTERN_C void MI_CALL CIM_LANEndAssociationVlanEnd_Unload(
    CIM_LANEndAssociationVlanEnd_Self* self,
    MI_Context* context);

MI_EXTERN_C void MI_CALL CIM_LANEndAssociationVlanEnd_EnumerateInstances(
    CIM_LANEndAssociationVlanEnd_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter);

MI_EXTERN_C void MI_CALL CIM_LANEndAssociationVlanEnd_GetInstance(
    CIM_LANEndAssociationVlanEnd_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_LANEndAssociationVlanEnd* instanceName,
    const MI_PropertySet* propertySet);

MI_EXTERN_C void MI_CALL CIM_LANEndAssociationVlanEnd_CreateInstance(
    CIM_LANEndAssociationVlanEnd_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_LANEndAssociationVlanEnd* newInstance);

MI_EXTERN_C void MI_CALL CIM_LANEndAssociationVlanEnd_ModifyInstance(
    CIM_LANEndAssociationVlanEnd_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_LANEndAssociationVlanEnd* modifiedInstance,
    const MI_PropertySet* propertySet);

MI_EXTERN_C void MI_CALL CIM_LANEndAssociationVlanEnd_DeleteInstance(
    CIM_LANEndAssociationVlanEnd_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_LANEndAssociationVlanEnd* instanceName);

MI_EXTERN_C void MI_CALL CIM_LANEndAssociationVlanEnd_AssociatorInstancesLeft(
    CIM_LANEndAssociationVlanEnd_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_LANEndpoint* instanceName,
    const MI_Char* resultClass,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter);

MI_EXTERN_C void MI_CALL CIM_LANEndAssociationVlanEnd_AssociatorInstancesRight(
    CIM_LANEndAssociationVlanEnd_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_VLANEndpoint* instanceName,
    const MI_Char* resultClass,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter);

MI_EXTERN_C void MI_CALL CIM_LANEndAssociationVlanEnd_ReferenceInstancesLeft(
    CIM_LANEndAssociationVlanEnd_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_LANEndpoint* instanceName,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter);

MI_EXTERN_C void MI_CALL CIM_LANEndAssociationVlanEnd_ReferenceInstancesRight(
    CIM_LANEndAssociationVlanEnd_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_VLANEndpoint* instanceName,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter);


#endif /* _CIM_LANEndAssociationVlanEnd_h */
