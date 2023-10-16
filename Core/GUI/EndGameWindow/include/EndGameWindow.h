#pragma once
#include <SDL.h>
#include <SDL_ttf.h>
#include "GUITypes.h"
#include <iostream>
#include <string>

class EndGameWindow
{
public:
    enum class StateWindow: uint8_t {
        LoadGame = 0x00,
        ExitToMainWindow = 0x01,
        Exit = 0xFE,
        Wait = 0xFF
    };
private:
    void DrawEndGameGUI(SDL_Renderer *);
public:
    EndGameWindow();
    void show(SDL_Window * window, SDL_Renderer * renderer);
    void hide();
    StateWindow stateWindow() const;

private:
    SDL_Window * m_window;
    SDL_Renderer * m_renderer;
    TTF_Font* m_font {nullptr};
    StateWindow m_stateWindow;
};
