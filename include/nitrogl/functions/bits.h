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

namespace nitrogl {
    namespace functions {
        using bits= unsigned char;

        constexpr inline bool is_set(const unsigned char ops, const unsigned char feature)  {
            return ops & feature;
        }

        template <typename Integer>
        bits used_integer_bits(const Integer &value) {
            // todo:: make it a binary search instead to get O(log(bits)) instead of linear O(bits)
            const Integer abs_value= value<0 ? -value:value;
            bits bits_used=0;
            while (abs_value>Integer(1)<<(bits_used++)) {};
            return bits_used;
        }

    }
}