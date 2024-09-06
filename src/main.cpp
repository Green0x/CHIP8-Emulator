#include <vector>
#include <print>
#include <SDL.h>

#include "renderer.h"
#include "chip8.h"

int main(int argc, char *argv[])
{
   
    SDL_Event event;
    // TODO: Feed argv to loadRom
    loadRom("IBM_Logo.ch8");
    std::println("Rom Loaded into memory!");
    chip8();
    SDL_Window* screen;
    screen = SDL_CreateWindow("CHIP-8", SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED, 64 * 8, 32 * 8, 0); // 8x resolution
    SDL_Renderer* renderer;

    
    renderer = SDL_CreateRenderer(screen, -1, SDL_RENDERER_ACCELERATED);

    SDL_Init(SDL_INIT_VIDEO);

    while (true) { // main event loop
        render(screen, renderer);

        while (SDL_PollEvent(&event)) {
            switch (event.type) {
            case SDL_KEYDOWN:
                std::print("Key press detected\n");
                break;

            case SDL_KEYUP:
                std::print("Key release detected\n");
                break;

            default:
                break;
            }
        }
    }
    
    
	return 0;
    
}