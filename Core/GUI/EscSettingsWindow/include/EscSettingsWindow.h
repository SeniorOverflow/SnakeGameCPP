#pragma once
#include <SDL.h>
#include <SDL_ttf.h>
#include "GUITypes.h"
#include <iostream>

class EscSettingsWindow
{
public:
    enum class StateWindow: uint8_t {
        KeyBoardSettings  = 0x01,
        AudioSettings = 0x02,
        MouseSettings = 0x03,
        GameDifficultySettings = 0x04,
        Back = 0x05,
        Exit = 0x06,
        Wait = 0x07
    };
private:
public:
    EscSettingsWindow();
    void show(SDL_Window * window, SDL_Renderer * renderer);
    void hide();
    StateWindow stateWindow() const;

private:
    SDL_Window * m_window;
    SDL_Renderer * m_renderer;
    StateWindow m_stateWindow;
};
