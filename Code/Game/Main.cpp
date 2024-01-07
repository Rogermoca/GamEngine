#include <sdl/SDL.h>
#include "Window.h"
#include "Types.h"

#include <iostream>

int main(int argc, char* argv[]) {
    void activate();

    void createWindow();

    SDL_Event e;
    bool quit = false;

    while (!quit) {
        while (SDL_PollEvent(&e) != 0) {
            if (e.type == SDL_QUIT) {
                quit = true;
            }
        }

        SDL_Delay(16);
    }

    SDL_Quit();
    return 0;
}
