/*
**==============================================================================
**
** Open Management Infrastructure (OMI)
**
** Copyright (c) Microsoft Corporation
** 
** Licensed under the Apache License, Version 2.0 (the "License"); you may not 
** use this file except in compliance with the License. You may obtain a copy 
** of the License at 
**
**     http://www.apache.org/licenses/LICENSE-2.0 
**
** THIS CODE IS PROVIDED *AS IS* BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
** KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION ANY IMPLIED 
** WARRANTIES OR CONDITIONS OF TITLE, FITNESS FOR A PARTICULAR PURPOSE, 
** MERCHANTABLITY OR NON-INFRINGEMENT. 
**
** See the Apache 2 License for the specific language governing permissions 
** and limitations under the License.
**
**==============================================================================
*/

/* @migen@ */
#ifndef _Base_Class_Provider_h
#define _Base_Class_Provider_h

#include "Base.h"
#ifdef __cplusplus
# include <micxx/micxx.h>
# include "module.h"

MI_BEGIN_NAMESPACE

/*
**==============================================================================
**
** Base provider class declaration
**
**==============================================================================
*/

class Base_Class_Provider
{
/* @MIGEN.BEGIN@ CAUTION: PLEASE DO NOT EDIT OR DELETE THIS LINE. */
private:
    Module* m_Module;

public:
    Base_Class_Provider(
        Module* module);

    ~Base_Class_Provider();

    void Load(
        Context& context);

    void Unload(
        Context& context);

    void EnumerateInstances(
        Context& context,
        const String& nameSpace,
        const PropertySet& propertySet,
        bool keysOnly,
        const MI_Filter* filter);

    void GetInstance(
        Context& context,
        const String& nameSpace,
        const Base_Class& instance,
        const PropertySet& propertySet);

    void CreateInstance(
        Context& context,
        const String& nameSpace,
        const Base_Class& newInstance);

    void ModifyInstance(
        Context& context,
        const String& nameSpace,
        const Base_Class& modifiedInstance,
        const PropertySet& propertySet);

    void DeleteInstance(
        Context& context,
        const String& nameSpace,
        const Base_Class& instance);

    void Invoke_Foo(
        Context& context,
        const String& nameSpace,
        const Base_Class& instanceName,
        const Base_Foo_Class& in);

/* @MIGEN.END@ CAUTION: PLEASE DO NOT EDIT OR DELETE THIS LINE. */
};

MI_END_NAMESPACE

#endif /* __cplusplus */

#endif /* _Base_Class_Provider_h */

