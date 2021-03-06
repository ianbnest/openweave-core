/*
 *
 *    Copyright (c) 2017 Nest Labs, Inc.
 *    All rights reserved.
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */
#include <nest/test/trait/StructCStructSchema.h>

namespace Schema {
namespace Nest {
namespace Test {
namespace Trait {
namespace TestCTrait {

    const nl::FieldDescriptor StructCFieldDescriptors[] =
    {
        {
            NULL, offsetof(StructC, scA), SET_TYPE_AND_FLAGS(nl::SerializedFieldTypeUInt32, 0), 1
        },
        {
            NULL, offsetof(StructC, scB), SET_TYPE_AND_FLAGS(nl::SerializedFieldTypeBoolean, 0), 2
        },
    };

    const nl::SchemaFieldDescriptor StructC::FieldSchema =
    {
        .mNumFieldDescriptorElements = sizeof(StructCFieldDescriptors)/sizeof(StructCFieldDescriptors[0]),
        .mFields = StructCFieldDescriptors,
        .mSize = sizeof(StructC)
    };
}
}
}
}
}
