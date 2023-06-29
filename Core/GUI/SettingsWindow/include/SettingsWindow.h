#pragma once
#include <SDL.h>
#include <SDL_ttf.h>
#include "GUITypes.h"
#include <iostream>

class SettingsWindow
{
public:
    enum class StateWindow: uint8_t {
        KeyBoardSettings  = 0x00,
        AudioSettings = 0x01,
        VideoSettings = 0x02,
        MouseSettings = 0x03,
        Back = 0x04,
        Exit = 0x05,
        Wait = 0x06
    };
private:
public:
    SettingsWindow();
    void show(SDL_Window * window, SDL_Renderer * renderer);
    void hide();
    StateWindow stateWindow() const;

private:
    SDL_Window * m_window;
    SDL_Renderer * m_renderer;
    StateWindow m_stateWindow;
};
