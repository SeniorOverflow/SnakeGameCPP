#pragma once
#include <SDL.h>
#include <SDL_ttf.h>
#include "GUITypes.h"
#include <iostream>

class LoadGameWindow
{
public:
    enum class StateWindow: uint8_t {
        LoadSave = 0x00,
        DeleteSave = 0x01,
        Back = 0x02,
        Exit = 0x03,
        Wait = 0x04
    };
private:
public:
    LoadGameWindow();
    void show(SDL_Window * window, SDL_Renderer * renderer);
    void hide();
    StateWindow stateWindow() const;

private:
    SDL_Window * m_window;
    SDL_Renderer * m_renderer;
    StateWindow m_stateWindow;
};
