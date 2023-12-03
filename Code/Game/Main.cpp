#include <sdl/SDL.h>
#include "Window.h"
#include "Types.h"

#include <iostream>
//Ejecutar

int main(int argc, char* argv[]){

    void activate();

    void createWindow();

    SDL_Event e;
    bool quit = false;

    while (!quit) {
        while (SDL_PollEvent(&e) != 0) {
            if (e.type == SDL_QUIT) {
                quit = true;
            }
            else if (e.type == SDL_KEYDOWN) {
                // Evento de tecla presionada
                switch (e.key.keysym.sym) {
                case SDLK_w:
                    std::cout << "Tecla arriba presionada." << std::endl;
                    // Agregar código para manejar la tecla arriba
                    void destroy();
                    break;
                }
        }

        SDL_Delay(16);
    }

    SDL_Quit();
    return 0;
}