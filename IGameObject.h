#pragma once 
#include <string>
#include <SDL2/SDL.h>

class IGameObject
{
    virtual SDL_Rect & GetGameObjectRect() = 0;

};