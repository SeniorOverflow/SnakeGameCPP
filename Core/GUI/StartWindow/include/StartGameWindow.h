#pragma once
#include <SDL.h>
#include <SDL_ttf.h>
#include "GUITypes.h"
#include <iostream>

class StartGameWindow
{
public:
    enum class StateWindow: uint8_t {
        Wait = 0x00,
        NewGame = 0x01,
        LoadGame = 0x02,
        Settings = 0x03,
        Exit = 0x04
    };
private:
public:
    StartGameWindow();
    void show(SDL_Window * window, SDL_Renderer * renderer);
    void hide();
    StateWindow stateWindow() const;

private:
    SDL_Window * m_window;
    SDL_Renderer * m_renderer;
    StateWindow m_stateWindow;
};
