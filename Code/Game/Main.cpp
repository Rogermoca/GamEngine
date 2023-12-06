#include <sdl/SDL.h>
#include "Window.h"
#include "Types.h"

#include <iostream>

int main(int argc, char* argv[]) {
    void activate();

    void createWindow();

    SDL_Event e;
    bool quit = false;

    Hitbox box;
    box.x = 0.0f;
    box.y = 0.0f;
    box.height = 2.0f;
    box.width = 2.0f;

    while (!quit) {
        while (SDL_PollEvent(&e) != 0) {
            if (e.type == SDL_QUIT) {
                quit = true;
            }
        }

        paintHitbox(box); // Corrected function call
        // SDL_UpdateTexture(yourTexture, NULL, yourPixels, yourPitch); // Provide the actual texture arguments
        SDL_Delay(16);
    }

    SDL_Quit();
    return 0;
}
