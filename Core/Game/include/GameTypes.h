#pragma once

enum class GameDifficulty : uint8_t
{
    VeryLow = 0x00,
    Low = 0x01,
    Middle = 0x02,
    Hard = 0x03,
    Nightmare = 0x04
};

enum class EnemyType : uint8_t
{
    Mine,
    Human
};

enum class FoodType : uint8_t
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