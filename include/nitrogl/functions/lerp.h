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

#include <nitrogl/math/vertex2.h>
namespace nitrogl {

    namespace functions {

        template<typename number>
        inline vertex2<number> lerp(const vertex2<number> & a,
                           const vertex2<number> & b,
                           number alpha) {
            return a * (number(1)-alpha) + b * alpha;
        }
    }
}
