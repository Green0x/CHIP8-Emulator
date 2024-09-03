#include <SDL.h>


int render() {
    SDL_Window* screen;
    unsigned char display[64 * 32];
    SDL_Texture* tex;
    
    SDL_Renderer* renderer;

    SDL_Init(SDL_INIT_VIDEO);

    screen = SDL_CreateWindow("CHIP-8", SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED, 64 * 8, 32 * 8, 0);
    renderer = SDL_CreateRenderer(screen, -1, SDL_RENDERER_ACCELERATED);

    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);

    // clear the current rendering target with the drawing color
    SDL_RenderClear(renderer);

    // iterating through the display (64*32)
    for (int y = 0; y < 32; y++) {
        for (int x = 0; x < 64; x++) {
            if (display[x + (y * 64)]) {
                SDL_Rect rect;

                rect.x = x * 8;
                rect.y = y * 8;
                rect.w = 8;
                rect.h = 8;

                SDL_RenderFillRect(renderer, &rect);
            }
        }
    }



    // update the screen
    SDL_RenderPresent(renderer);
    SDL_Delay(5000);
    //SDL_Quit();
    return 1;
}