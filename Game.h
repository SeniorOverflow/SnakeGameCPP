#pragma once


#include <vector>
#include <iostream>
#include <memory>
#include "SDL2/SDL.h"
#include "Food.h"
#include "Level.h"
#include "Snake.h"
#include "Enemy.h"
#include "GameTypes.h"
#include "Spawner.h"

class Game {
public:
    Game();

    void Start(GameDifficulty difficulty);

private:
    void Update();

    void InitWindow(int width, int height) {
        SDL_Init(SDL_INIT_VIDEO);              // Initialize SDL2

        this->window = SDL_CreateWindow(
                "An SDL2 window",                  // window title
                SDL_WINDOWPOS_UNDEFINED,           // initial x position
                SDL_WINDOWPOS_UNDEFINED,           // initial y position
                width,                               // width, in pixels
                height,                               // height, in pixels
                SDL_WINDOW_OPENGL                  // flags - see below
        );

        // Check that the window was successfully created
        if (this->window == NULL) {
            // In the case that the window could not be made...
            printf("Could not create window: %s\n", SDL_GetError());
        }

        renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
        if (renderer == nullptr) {
            std::cout << "SDL_CreateRenderer Error: " << SDL_GetError() << std::endl;
        }
    }
    void CheckCollision();

    void QuitGame() {
        SDL_DestroyWindow(window);
        SDL_Quit();
    }

private:
    int windowHeight = 480;
    int windowWeight = 480;
    std::unique_ptr<Spawner> spawner;
    SDL_Rect rect;
    SDL_Window *window = nullptr;
    SDL_Renderer *renderer = nullptr;
    SDL_Event event;
    bool isRunning = true;
    Level *m_level;
    std::unique_ptr<Snake> m_shake;
    std::vector<Enemy*> m_enemies;
    std::vector<Food*> m_foods;
    unsigned long m_score = 0;
};