#pragma once
#include <SDL.h>
#include <SDL_ttf.h>
#include "GUITypes.h"
#include <iostream>

class EscMenuWindow
{
public:
    enum class StateWindow: uint8_t {
        LoadGame = 0x01,
        SaveGame = 0x02,
        CreateHost = 0x03,
        EscSettings = 0x04,
        Back = 0x05,
        Exit = 0x06,
        Wait = 0x07
    };
private:
public:
    EscMenuWindow();
    void show(SDL_Window * window, SDL_Renderer * renderer);
    void hide();
    StateWindow stateWindow() const;

private:
    SDL_Window * m_window;
    SDL_Renderer * m_renderer;
    StateWindow m_stateWindow;
};
