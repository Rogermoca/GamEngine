#include <sdl/SDL.h>
#include "Window.h"

#include <iostream>
//Ejecutar

int main(int argc, char* argv[]){

    void activateWindow();

    void createWindow();

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