/***************************************************************************
 *
 * Copyright (c) 2015 Baidu, Inc. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 **************************************************************************/
/**
* @created:     2015/06/18
* @author:      zhangyuncong (bigflow-opensource@baidu.com)
* @brief:       ExtractValue
*/

#ifndef BIGFLOW_PYTHON_EXTRACT_VALUE_FN_H
#define BIGFLOW_PYTHON_EXTRACT_VALUE_FN_H

#include "glog/logging.h"
#include "bigflow_python/functors/functor.h"

namespace baidu {
namespace bigflow {
namespace python {

class ExtractValueFn : public Functor {
public:
    ExtractValueFn();
    virtual void Setup(const std::string& config);
    virtual void call(void* object, flume::core::Emitter* emitter);
    virtual ~ExtractValueFn() {}
};

}  // namespace python
}  // namespace bigflow
}  // namespace baidu

#endif  // BIGFLOW_PYTHON_EXTRACT_VALUE_FN_H
