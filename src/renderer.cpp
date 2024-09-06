#include <SDL.h>
#include <print>


int render(SDL_Window* screen, SDL_Renderer* renderer) {
    
    unsigned char display[64][32]{};

    display[0][5] = { 1 };
    

    // clear the current rendering target with the drawing color
    SDL_RenderClear(renderer);

    // iterating through the display (64*32)
    for (int y = 0; y < 32; y++) {
        for (int x = 0; x < 64; x++) {
            if (display[x][y] == 1) {
                SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
                SDL_Rect rect;

                rect.x = x * 8;
                rect.y = y * 8;
                rect.w = 8;
                rect.h = 8;

                SDL_RenderFillRect(renderer, &rect);
            }
            else {
                SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
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
    return 1;
}