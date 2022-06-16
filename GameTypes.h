#pragma once

enum class GameDifficulty
{
    VeryLow,
    Low,
    Middle,
    Hard,
    Nightmare
};

enum class EnemyType
{
    Mine,
    Human
};

enum class FoodType
{
    Apple,
    Raspberry,
    Orange,
    Pie,
};

struct Rect {

    int x;
    int y;
    int w;
    int h;
    Rect(int _x, int _y, int _w , int _h)
    {
        this->x = _x;
        this->y = _y;
        this->w = _w;
        this->h = _h;
    }
};


struct Color
{
    uint8_t RED;
    uint8_t GREEN;
    uint8_t BLUE;
    Color(uint8_t red = 0,uint8_t green = 0,uint8_t blue = 0)
    {
        RED = red;
        GREEN = green;
        BLUE = blue;
    }

};