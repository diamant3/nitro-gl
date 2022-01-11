/*========================================================================================
 Copyright (2021), Tomer Shalev (tomer.shalev@gmail.com, https://github.com/HendrixString).
 All Rights Reserved.
 License is a custom open source semi-permissive license with the following guidelines:
 1. unless otherwise stated, derivative work and usage of this file is permitted and
    should be credited to the project and the author of this project.
 2. Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
========================================================================================*/
#pragma once

#include "../traits.h"
#include "sampler.h"

namespace nitrogl {

    struct test_sampler : public sampler_t {
        const char * name() override { return "test_sampler"; }
        const char * uniforms() override {
            return R"(
            )";
        }

        const char * other_functions() override {
            return R"(
vec4 other_function(float t) {
    return vec4(t);
}
)";
        }

        const char * main() override {
            return R"(
(vec3 uv, float time) {
    return vec4(uv.y, uv.y, uv.y, 1.0);
}
)";
        }

    };

}