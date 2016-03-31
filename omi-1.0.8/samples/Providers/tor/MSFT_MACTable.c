/* @migen@ */
#include <MI.h>
#include "MSFT_MACTable.h"

void MI_CALL MSFT_MACTable_Load(
    MSFT_MACTable_Self** self,
    MI_Module_Self* selfModule,
    MI_Context* context)
{
    *self = NULL;
    MI_Context_PostResult(context, MI_RESULT_OK);
}

void MI_CALL MSFT_MACTable_Unload(
    MSFT_MACTable_Self* self,
    MI_Context* context)
{
    MI_Context_PostResult(context, MI_RESULT_OK);
}

void MI_CALL MSFT_MACTable_EnumerateInstances(
    MSFT_MACTable_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    MSFT_MACTable stMACTable;

    MSFT_MACTable_Construct(&stMACTable, context);
    MSFT_MACTable_Set_InstanceID(&stMACTable, MI_T("MAC TABLE"));
    MSFT_MACTable_Post(&stMACTable, context);       

    MSFT_MACTable_Destruct(&stMACTable);

    MI_Context_PostResult(context, MI_RESULT_OK);
}

void MI_CALL MSFT_MACTable_GetInstance(
    MSFT_MACTable_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_MACTable* instanceName,
    const MI_PropertySet* propertySet)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MSFT_MACTable_CreateInstance(
    MSFT_MACTable_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_MACTable* newInstance)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MSFT_MACTable_ModifyInstance(
    MSFT_MACTable_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_MACTable* modifiedInstance,
    const MI_PropertySet* propertySet)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MSFT_MACTable_DeleteInstance(
    MSFT_MACTable_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_MACTable* instanceName)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

