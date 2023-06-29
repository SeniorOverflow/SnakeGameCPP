#pragma once
#include <SDL.h>
#include <SDL_ttf.h>
#include "GUITypes.h"
#include <iostream>

class SaveGameWindow
{
public:
    enum class StateWindow: uint8_t {
        CreateSave = 0x01,
        DeleteSave = 0x02,
        Back = 0x03,
        Exit = 0x04,
        Wait = 0x05
    };
private:
public:
    SaveGameWindow();
    void show(SDL_Window * window, SDL_Renderer * renderer);
    void hide();
    StateWindow stateWindow() const;

private:
    SDL_Window * m_window;
    SDL_Renderer * m_renderer;
    StateWindow m_stateWindow;
};
