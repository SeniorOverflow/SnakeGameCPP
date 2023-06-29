//
// Created by DonEn on 6/16/2022.
//
#pragma  once
#include <SDL.h>
#include "GameTypes.h"



class Trigger
{
public:

    Trigger(int posX, int posY, int wight, int height);
    bool isIntoTrigger( const Rect & rect);
    bool IsPointIntoTrigger(int posX, int posY);

private:
    int m_posX = 0;
    int m_posY = 0;
    int m_wight = 0;
    int m_height = 0;
};

