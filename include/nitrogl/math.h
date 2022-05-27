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

#include "math/base_math.h"
//#include "math/int_math.h"

#ifdef MICROGL_AVOID_BUILTIN_MATH
#elif defined(MICROGL_USE_STD_MATH)
//#include "math/non_std_q_math.h"
#include "math/std_float_math.h"
#else
//#include "math/non_std_q_math.h"
#include "math/non_std_float_math.h"
#endif

#include "math/mat3.h"
#include "math/mat4.h"
#include "math/rect.h"
#include "math/vertex2.h"
#include "math/vertex3.h"
#include "math/vertex4.h"

namespace nitrogl {
    namespace math {
    };
}