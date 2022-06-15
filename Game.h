#pragma once
#include "Level.h"
#include "Snake.h"
#include <iostream>
#include <memory>
#include <vector>

class Game
{
private:
    Game()
    {

    }
    void Update()
    {
        while(true)
        {

        }
    }
public:

    void Start()
    {

        level = std::unique_ptr<Level>(new Level())
    }
private:
    std::unique_ptr<Level> level;
    std::unique_ptr<Snake> shake;
    std::vector<std::unique_ptr<Eneny>> enemies;
    std::vector<std::unique_ptr<Food>> foods;

};