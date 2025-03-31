#include <SDL.h>
#include <cstdio>
#include "cube1.h"

int main(int argc, char* argv[]) {
    // initialize SDL video subsystem
    if (SDL_Init(SDL_INIT_VIDEO) != 0) {
        printf("SDL_Init Error: %s\n", SDL_GetError());
        return 1;
    }

    // create a window
    SDL_Window* window = SDL_CreateWindow("Cube1 WebAssembly Port", 
                                          SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 
                                          640, 480, SDL_WINDOW_SHOWN);
    if (!window) {
        printf("SDL_CreateWindow Error: %s\n", SDL_GetError());
        SDL_Quit();
        return 1;
    }

    // initialize Cube1 engine (placeholder)
    initCube1();

    // simple main loop (for demonstration, exits after 3 seconds)
    SDL_Delay(3000);

    // clean up
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}