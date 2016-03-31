/* @migen@ */
#include <MI.h>
#include "MSFT_Feature.h"

MSFT_Feature stMSFT_Feature ;

void MI_CALL MSFT_Feature_Load(
    MSFT_Feature_Self** self,
    MI_Module_Self* selfModule,
    MI_Context* context)
{
    *self = NULL;

    MSFT_Feature_Construct(&stMSFT_Feature, context);  
    MSFT_Feature_Set_InstanceID(&stMSFT_Feature, MI_T("SDN2_Feature"));
    MSFT_Feature_Set_FeatureName(&stMSFT_Feature,2);
    MSFT_Feature_Set_Count(&stMSFT_Feature,100);
    
    MI_Context_PostResult(context, MI_RESULT_OK);
}

void MI_CALL MSFT_Feature_Unload(
    MSFT_Feature_Self* self,
    MI_Context* context)
{
    MSFT_Feature_Destruct(&stMSFT_Feature);

    MI_Context_PostResult(context, MI_RESULT_OK);
}

void MI_CALL MSFT_Feature_EnumerateInstances(
    MSFT_Feature_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    MSFT_Feature_Post(&stMSFT_Feature, context);

    MI_Context_PostResult(context, MI_RESULT_OK);
}

void MI_CALL MSFT_Feature_GetInstance(
    MSFT_Feature_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_Feature* instanceName,
    const MI_PropertySet* propertySet)
{
    MI_Context_PostResult(context, MI_RESULT_OK);
}

void MI_CALL MSFT_Feature_CreateInstance(
    MSFT_Feature_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_Feature* newInstance)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MSFT_Feature_ModifyInstance(
    MSFT_Feature_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_Feature* modifiedInstance,
    const MI_PropertySet* propertySet)
{
    switch(stMSFT_Feature.FeatureName.value)
    {
        case 2:/*support ssh modify*/
            MSFT_Feature_Set_IsEnabled(&stMSFT_Feature, modifiedInstance->IsEnabled.value);
            if(modifiedInstance->IsEnabled.value == 1)/*enable ssh*/
            {
                system("/opt/omi-1.0.8/bin/ssh-enable.sh");
            }
            else
            {
                system("/opt/omi-1.0.8/bin/ssh-disable.sh");            
            }
        break;

        default:
            MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
    }   

    MSFT_Feature_Post(&stMSFT_Feature, context);

    MI_Context_PostResult(context, MI_RESULT_OK);

}

void MI_CALL MSFT_Feature_DeleteInstance(
    MSFT_Feature_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_Feature* instanceName)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

