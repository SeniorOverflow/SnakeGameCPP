//
#include <SDL.h>
#include <SDL_ttf.h>
#include <iostream>
#include "Game.h"
#include <memory>
//
////int main(int argc, char *argv[])
////{
////*
////    // returns zero on success else non-zero
////    if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
////
////    }
////    SDL_Window* win = SDL_CreateWindow("GAME",
////                                       SDL_WINDOWPOS_CENTERED,
////                                       SDL_WINDOWPOS_CENTERED,
////                                       1000, 1000, 0);
////    while (1)
////        ;
//// */
////    return 0;
////}
//
//
//
//


int main(int argc, char* argv[]) {
    Game * game = new Game();
    game->Start();
    return 0;
}


//#include <SDL.h>
//#include <SDL_ttf.h>
//
//int main(int argc, char* argv[])
//{
//    SDL_Init(SDL_INIT_VIDEO);
//    TTF_Init();
//
//    SDL_Window* window = SDL_CreateWindow("SDL2 and SDL_ttf", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, SDL_WINDOW_SHOWN);
//    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
//
//    TTF_Font* font = TTF_OpenFont("arial.ttf", 24);
//    SDL_Color color = { 255, 255, 255 };
//    SDL_Surface* surface = TTF_RenderText_Solid(font, "Hello, world!", color);
//    SDL_Texture* texture = SDL_CreateTextureFromSurface(renderer, surface);
//
//    SDL_Event event;
//    int running = 1;
//    while (running) {
//        while (SDL_PollEvent(&event)) {
//            if (event.type == SDL_QUIT) {
//                running = 0;
//            }
//        }
//
//        SDL_RenderClear(renderer);
//        SDL_RenderCopy(renderer, texture, NULL, NULL);
//        SDL_RenderPresent(renderer);
//    }
//
//    SDL_DestroyTexture(texture);
//    SDL_FreeSurface(surface);
//    TTF_CloseFont(font);
//    SDL_DestroyRenderer(renderer);
//    SDL_DestroyWindow(window);
//
//    TTF_Quit();
//    SDL_Quit();
//
//    return 0;
//}