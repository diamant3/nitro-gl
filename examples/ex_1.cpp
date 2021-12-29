#define GL_SILENCE_DEPRECATION
#include "src/Resources.h"
#include "src/example.h"
#include <nitrogl/ogl/ebo.h>
#include <nitrogl/ogl/vbo.h>
#include <nitrogl/ogl/vao.h>
#include <nitrogl/ogl/fbo.h>
#include <nitrogl/ogl/gl_texture.h>
#include <nitrogl/ogl/shader.h>
#include <nitrogl/ogl/shader_program.h>

using namespace nitrogl;

struct CC {
    int width() { return 600; }
    int height() { return 600; }
};

int main() {

    const auto on_init = [](SDL_Window *, void *) {
        gl_texture tex(300,300);

        const auto render = [&]() {
        };

        example_run(CC(), render);
    };

    example_init(on_init);
}

