#include <sdl/SDL.h>
#include "Window.h"

#include <iostream>
#include "Main.h"
//Ejecutar

int main(int argc, char* argv[]) {

    void window::activateWindow();

    void window::createWindow();

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

    SDL_Quit();
    return 0;
}