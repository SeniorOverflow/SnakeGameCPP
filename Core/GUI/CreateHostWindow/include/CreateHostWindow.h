#pragma once
#include <SDL.h>
#include <SDL_ttf.h>
#include "GUITypes.h"
#include <iostream>

class CreateHostWindow
{
public:
    enum class StateWindow: uint8_t {
        CreateHostStart = 0x00,
        Back = 0x01,
        Exit = 0x02,
        Wait = 0x03
    };
public:
    CreateHostWindow();
    void show(SDL_Window * window, SDL_Renderer * renderer);
    void hide();
    StateWindow stateWindow() const;

private:
    SDL_Window * m_window;
    SDL_Renderer * m_renderer;
    StateWindow m_stateWindow;
};
