/* @migen@ */
/*
**==============================================================================
**
** WARNING: THIS FILE WAS AUTOMATICALLY GENERATED. PLEASE DO NOT EDIT.
**
**==============================================================================
*/
#ifndef _CIM_MACTableAssociationEntry_h
#define _CIM_MACTableAssociationEntry_h

#include <MI.h>
#include "MSFT_MACTable.h"
#include "MSFT_MACTableEntry.h"

/*
**==============================================================================
**
** CIM_MACTableAssociationEntry [CIM_MACTableAssociationEntry]
**
** Keys:
**    Left
**    Right
**
**==============================================================================
*/

typedef struct _CIM_MACTableAssociationEntry
{
    MI_Instance __instance;
    /* CIM_MACTableAssociationEntry properties */
    /*KEY*/ MSFT_MACTable_ConstRef Left;
    /*KEY*/ MSFT_MACTableEntry_ConstRef Right;
}
CIM_MACTableAssociationEntry;

typedef struct _CIM_MACTableAssociationEntry_Ref
{
    CIM_MACTableAssociationEntry* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
CIM_MACTableAssociationEntry_Ref;

typedef struct _CIM_MACTableAssociationEntry_ConstRef
{
    MI_CONST CIM_MACTableAssociationEntry* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
CIM_MACTableAssociationEntry_ConstRef;

typedef struct _CIM_MACTableAssociationEntry_Array
{
    struct _CIM_MACTableAssociationEntry** data;
    MI_Uint32 size;
}
CIM_MACTableAssociationEntry_Array;

typedef struct _CIM_MACTableAssociationEntry_ConstArray
{
    struct _CIM_MACTableAssociationEntry MI_CONST* MI_CONST* data;
    MI_Uint32 size;
}
CIM_MACTableAssociationEntry_ConstArray;

typedef struct _CIM_MACTableAssociationEntry_ArrayRef
{
    CIM_MACTableAssociationEntry_Array value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
CIM_MACTableAssociationEntry_ArrayRef;

typedef struct _CIM_MACTableAssociationEntry_ConstArrayRef
{
    CIM_MACTableAssociationEntry_ConstArray value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
CIM_MACTableAssociationEntry_ConstArrayRef;

MI_EXTERN_C MI_CONST MI_ClassDecl CIM_MACTableAssociationEntry_rtti;

MI_INLINE MI_Result MI_CALL CIM_MACTableAssociationEntry_Construct(
    CIM_MACTableAssociationEntry* self,
    MI_Context* context)
{
    return MI_ConstructInstance(context, &CIM_MACTableAssociationEntry_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL CIM_MACTableAssociationEntry_Clone(
    const CIM_MACTableAssociationEntry* self,
    CIM_MACTableAssociationEntry** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Boolean MI_CALL CIM_MACTableAssociationEntry_IsA(
    const MI_Instance* self)
{
    MI_Boolean res = MI_FALSE;
    return MI_Instance_IsA(self, &CIM_MACTableAssociationEntry_rtti, &res) == MI_RESULT_OK && res;
}

MI_INLINE MI_Result MI_CALL CIM_MACTableAssociationEntry_Destruct(CIM_MACTableAssociationEntry* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL CIM_MACTableAssociationEntry_Delete(CIM_MACTableAssociationEntry* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL CIM_MACTableAssociationEntry_Post(
    const CIM_MACTableAssociationEntry* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL CIM_MACTableAssociationEntry_Set_Left(
    CIM_MACTableAssociationEntry* self,
    const MSFT_MACTable* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        0,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_MACTableAssociationEntry_SetPtr_Left(
    CIM_MACTableAssociationEntry* self,
    const MSFT_MACTable* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        0,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_MACTableAssociationEntry_Clear_Left(
    CIM_MACTableAssociationEntry* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_MACTableAssociationEntry_Set_Right(
    CIM_MACTableAssociationEntry* self,
    const MSFT_MACTableEntry* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_MACTableAssociationEntry_SetPtr_Right(
    CIM_MACTableAssociationEntry* self,
    const MSFT_MACTableEntry* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_MACTableAssociationEntry_Clear_Right(
    CIM_MACTableAssociationEntry* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

/*
**==============================================================================
**
** CIM_MACTableAssociationEntry provider function prototypes
**
**==============================================================================
*/

/* The developer may optionally define this structure */
typedef struct _CIM_MACTableAssociationEntry_Self CIM_MACTableAssociationEntry_Self;

MI_EXTERN_C void MI_CALL CIM_MACTableAssociationEntry_Load(
    CIM_MACTableAssociationEntry_Self** self,
    MI_Module_Self* selfModule,
    MI_Context* context);

MI_EXTERN_C void MI_CALL CIM_MACTableAssociationEntry_Unload(
    CIM_MACTableAssociationEntry_Self* self,
    MI_Context* context);

MI_EXTERN_C void MI_CALL CIM_MACTableAssociationEntry_EnumerateInstances(
    CIM_MACTableAssociationEntry_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter);

MI_EXTERN_C void MI_CALL CIM_MACTableAssociationEntry_GetInstance(
    CIM_MACTableAssociationEntry_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_MACTableAssociationEntry* instanceName,
    const MI_PropertySet* propertySet);

MI_EXTERN_C void MI_CALL CIM_MACTableAssociationEntry_CreateInstance(
    CIM_MACTableAssociationEntry_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_MACTableAssociationEntry* newInstance);

MI_EXTERN_C void MI_CALL CIM_MACTableAssociationEntry_ModifyInstance(
    CIM_MACTableAssociationEntry_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_MACTableAssociationEntry* modifiedInstance,
    const MI_PropertySet* propertySet);

MI_EXTERN_C void MI_CALL CIM_MACTableAssociationEntry_DeleteInstance(
    CIM_MACTableAssociationEntry_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_MACTableAssociationEntry* instanceName);

MI_EXTERN_C void MI_CALL CIM_MACTableAssociationEntry_AssociatorInstancesLeft(
    CIM_MACTableAssociationEntry_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_MACTable* instanceName,
    const MI_Char* resultClass,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter);

MI_EXTERN_C void MI_CALL CIM_MACTableAssociationEntry_AssociatorInstancesRight(
    CIM_MACTableAssociationEntry_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_MACTableEntry* instanceName,
    const MI_Char* resultClass,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter);

MI_EXTERN_C void MI_CALL CIM_MACTableAssociationEntry_ReferenceInstancesLeft(
    CIM_MACTableAssociationEntry_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_MACTable* instanceName,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter);

MI_EXTERN_C void MI_CALL CIM_MACTableAssociationEntry_ReferenceInstancesRight(
    CIM_MACTableAssociationEntry_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_MACTableEntry* instanceName,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter);


#endif /* _CIM_MACTableAssociationEntry_h */
