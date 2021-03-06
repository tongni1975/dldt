/*
// Copyright (c) 2016 Intel Corporation
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
*/

///////////////////////////////////////////////////////////////////////////////////////////////////
#pragma once
#include "api/CPP/softmax.hpp"
#include "primitive_inst.h"

namespace cldnn
{
using softmax_node = typed_program_node<softmax>;

template <>
class typed_primitive_inst<softmax> : public typed_primitive_inst_base<softmax>
{
    using parent = typed_primitive_inst_base<softmax>;

public:
    static layout calc_output_layout(softmax_node const& node);
    static std::string to_string(softmax_node const& node);

public:
    typed_primitive_inst(network_impl& network, softmax_node const& desc);
};

using softmax_inst = typed_primitive_inst<softmax>;

}
