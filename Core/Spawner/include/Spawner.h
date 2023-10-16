//
// Created by DonEn on 6/16/2022.
//
#pragma once

#include <SDL.h>
#include <vector>
#include "Food.h"
#include "Enemy.h"
#include "Snake.h"
#include "GameTypes.h"
#include <random>



class Spawner {
public :
    Spawner( int windowWight, int windowHeight);

    void DrawCallEnemy(SDL_Renderer *renderer, const std::vector<Enemy*> enemies);

    void DrawCallFood(SDL_Renderer *renderer,const  std::vector<Food*> foods);

    void SpawnSnake(SDL_Renderer *renderer, std::unique_ptr<Snake> snake);

    static std::vector<Enemy*> CreateEnemy(size_t countEnemies ) ;
    static std::vector<Food*> CreateFood(size_t countFood ) ;

private:
    int m_windowWight = 0;
    int m_windowHeight = 0;
};


