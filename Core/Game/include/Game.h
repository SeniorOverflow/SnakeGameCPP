#pragma once


#include <vector>
#include <iostream>
#include <SDL_ttf.h>
#include "SDL.h"
#include "Food.h"
#include "Level.h"
#include "Snake.h"
#include "Enemy.h"
#include "GameTypes.h"
#include "Spawner.h"
#include "GUI.h"

struct GameUIData {
    const char * name;
    const uint32_t * data;
    SDL_Rect pos;
};

enum class LastMove
{
    MoveUp = 0x00,
    MoveDown = 0x01,
    MoveLeft = 0x02,
    MoveRight = 0x03,
    DontMove = 0xFF

};



class Game {
public:
    Game();

    void Start();
    ~Game();
private:
    void Update();
    void DrawCountEnemies();
    void CheckEnemies();

    void CheckFoods();

    void DrawCountFoods();

    void CheckCollision();
    void QuitGame() {
        SDL_DestroyWindow(window);
        SDL_Quit();
    }
    void onStateGUI(GUI::State state);
    void onSelectDifficulty(GameDifficulty selectedDifficulty);
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
    TTF_Font* m_font {nullptr};
    bool m_isExit {false};
    Colors m_colors;

    std::vector<GameUIData> m_guiData;
    LastMove m_lastMove {LastMove::DontMove} ;
    void DrawCountHeal();
};