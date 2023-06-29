#pragma once


#include <vector>
#include <iostream>

#include "SDL.h"
#include "Food.h"
#include "Level.h"
#include "Snake.h"
#include "Enemy.h"
#include "GameTypes.h"
#include "Spawner.h"
#include "GUI.h"

class Game {
public:
    Game();

    void Start();
    ~Game();
private:
    void Update();

    void CheckCollision();

    void QuitGame() {
        SDL_DestroyWindow(window);
        SDL_Quit();
    }

    void onStateGUI(GUI::State state);
    void onSelectDifficulty(GUI::SelectedDifficulty selectedDifficulty);
private:
    int windowHeight = 960;
    int windowWeight = 960;
    std::unique_ptr<Spawner> spawner;
    SDL_Rect rect;
    SDL_Window * window = nullptr;
    SDL_Renderer *renderer = nullptr;
    SDL_Event event;
    bool isRunning = true;
    Level * m_level;
    std::unique_ptr<Snake> m_shake;
    std::vector<Enemy*> m_enemies;
    std::vector<Food*> m_foods;
    std::unique_ptr<GUI>  m_gui ;
    GameDifficulty m_gameDifficulty;
    unsigned long m_score = 0;

    bool m_isExit {false};
};