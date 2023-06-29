#pragma once 
#include <string>
#include <SDL.h>

class IGameObject
{
    virtual SDL_Rect & GetGameObjectRect() = 0;

};