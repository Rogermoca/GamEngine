#include "Window.h"
#include <sdl/SDL.h>

#include "iostream"
//Roger

void window::activate() {
    SDL_Init(SDL_INIT_EVERYTHING);
    if (SDL_Init(SDL_INIT_EVERYTHING) != NULL) {
        std::cout << "Error SDL";
        SDL_Quit();
    }
}

void window::createWindow(){
    window = SDL_CreateWindow("Engine Test", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 800, 600, SDL_WINDOW_SHOWN | SDL_WINDOW_OPENGL);
    if (!window) {
        std::cout << "Error ventana";
        SDL_DestroyWindow(window);
        SDL_Quit();
    }
}

void window::destroy(){
    SDL_DestroyWindow(window);
    SDL_Quit();
}
