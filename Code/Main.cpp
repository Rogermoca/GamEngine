#include <sdl/SDL.h>

#include <iostream>

int main(int argc, char* argv[]) {
    SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO);
    if (SDL_Init(SDL_INIT_VIDEO) < 0 and SDL_Init(SDL_INIT_AUDIO) < 0) {
        std::cout << "Error SDL";
        return 1;
    }
    SDL_Window* window = SDL_CreateWindow("Engine Test", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 800, 600, SDL_WINDOW_SHOWN | SDL_WINDOW_OPENGL);
    if (!window) {
        std::cout << "Error ventana";
        SDL_Quit();
        return 1;
    }

    SDL_Event event;
    bool quit = false;

    while (!quit) {

        while (SDL_PollEvent(&event) != 0) {
            if (event.type == SDL_QUIT) {
                // Se ha pulsado el botón de cerrar
                quit = true;
            }
        }

        SDL_Delay(16);
    }

    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}