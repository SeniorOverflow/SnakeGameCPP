#pragma once
#include <SDL.h>
#include <SDL_ttf.h>
#include "StartGameWindow.h"
#include "NewGameWindow.h"
#include "SaveGameWindow.h"
#include "LoadGameWindow.h"
#include "SettingsWindow.h"
#include "EscSettingsWindow.h"
#include "EscMenuWindow.h"

#include "CreateHostWindow.h"

//#include "Game.h"
#include "GameTypes.h"
#include <string>
#include <memory>
#include "GUITypes.h"
#include "EndGameWindow.h"


class GUI
{
public:
    enum class State : uint8_t
    {
        StartGame  = 0x00,
        ExitGame = 0x01,
        ExitToMainWindow = 0x02,
        None = 0xFF
    };
//    enum class SelectedDifficulty : uint8_t
//    {
//        VeryLow = 0x00,
//        Low= 0x01,
//        Middle= 0x02,
//        Hard= 0x03,
//        Nightmare = 0x04
//    };
private:
    void onStartWindowState(StartGameWindow::StateWindow state);
    void onNewGameWindowState(NewGameWindow::StateWindow state);
    void onSettingsWindowState(SettingsWindow::StateWindow state);
    void onSaveWindowState(SaveGameWindow::StateWindow state);
    void onLoadGameWindowState(LoadGameWindow::StateWindow state);
    void onCreateHostWindowState(CreateHostWindow::StateWindow state);
    void onEscSettingsWindowState(EscSettingsWindow::StateWindow state);
    void onEscMenuStateWindow(EscMenuWindow::StateWindow state);
    void onEndGameWindowState(EndGameWindow::StateWindow state);
    void onBackNewGame ();
    void onBackLoadGame();
    void onBackCreateHost();
    void onBackSettings ();
    void onBackEscMenu ();
    void onBackEscMenuSettings ();


    void onNewGame();
    void onLoadGame();
    void onSaveGame();
    void onSettings();


    void onVeryLow();
    void onLow ();
    void onMiddle ();
    void onHard ();
    void onNightmare ();



    void onCreateSave();
    void onDeleteSave ();
    void onLoadSave ();
    void onKeyBoardSettings ();
    void onAudioSettings ();
    void onVideoSettings ();
    void onMouseSettings ();

    void LoadSave(size_t saveId);
    void DeleteSave(size_t saveId);

public:
    GUI();
    void showStartWindow();
    GameDifficulty selectedDifficulty() const;
    State guiState() const;

    SDL_Window * window();
    SDL_Renderer * renderer();
    void onPressESC();
    void onDead();
    ~GUI();

private:
    int windowHeight { 960};
    int windowWeight { 960};

    StartGameWindow m_startWindow;
    NewGameWindow m_newGameWindow;
    LoadGameWindow m_loadGameWindow;
    SaveGameWindow m_saveGameWindow;
    SettingsWindow m_settingsWindow;
    CreateHostWindow m_createHostWindow;
    EscMenuWindow m_escMenuWindow;
    EscSettingsWindow m_escSettingsWindow;
    EndGameWindow m_endGameWindow;




    SDL_Window * m_window { nullptr};
    SDL_Renderer * m_renderer { nullptr};

    GameDifficulty m_difficulty;
    State m_guiState;
};
