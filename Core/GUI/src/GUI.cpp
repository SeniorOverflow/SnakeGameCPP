#include "GUI.h"
//#include "../../Game/include/GameTypes.h"
//#include "../../Game/include/GameTypes.h"


GUI::GUI()  {

    SDL_Init(SDL_INIT_VIDEO);              // Initialize SDL2
    m_window = SDL_CreateWindow(
            "GameWindow",                  // window title
            SDL_WINDOWPOS_UNDEFINED,           // initial x position
            SDL_WINDOWPOS_UNDEFINED,           // initial y position
            windowHeight,                               // width, in pixels
            windowWeight,
            SDL_WINDOW_SHOWN// height, in pixels
            // flags - see below

    );
    //   SDL_Window* window = SDL_CreateWindow("My Core", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 900, 900, SDL_WINDOW_SHOWN);

    // Check that the window was successfully created
    if (m_window == NULL) {
        // In the case that the window could not be made...
        printf("Could not create window: %s\n", SDL_GetError());
    }
    //  SDL_Renderer* renderer = SDL_CreateRenderer(m_window, -1, SDL_RENDERER_ACCELERATED);  | SDL_RENDERER_PRESENTVSYNC
    m_renderer = SDL_CreateRenderer(m_window, -1, SDL_RENDERER_ACCELERATED);
    if (m_renderer == nullptr) {
        std::cout << "SDL_CreateRenderer Error: " << SDL_GetError() << std::endl;
    }
}



void GUI::showStartWindow() {
    m_startWindow.show( m_window, m_renderer);

    switch(m_startWindow.stateWindow())
    {
        case StartGameWindow::StateWindow::Wait:
            break;
        case StartGameWindow::StateWindow::NewGame:
        {
            m_newGameWindow.show( m_window, m_renderer);
            onNewGameWindowState(m_newGameWindow.stateWindow());
            break;
        }
        case StartGameWindow::StateWindow::LoadGame:
        {
            m_loadGameWindow.show( m_window, m_renderer);
            onLoadGameWindowState(m_loadGameWindow.stateWindow());
            break;
        }
        case StartGameWindow::StateWindow::Settings: {
            m_settingsWindow.show( m_window, m_renderer);
            onSettingsWindowState(m_settingsWindow.stateWindow());

            break;
        }
        case StartGameWindow::StateWindow::Exit: {
            m_guiState = State::ExitGame;
            break;
        }
    }
}



GUI::~GUI() {

    SDL_DestroyRenderer(m_renderer);
    SDL_DestroyWindow(m_window);
    SDL_Quit();
}

void GUI::onStartWindowState(StartGameWindow::StateWindow state) {

}

void GUI::onNewGameWindowState(NewGameWindow::StateWindow state) {
    switch(state)
    {
        case NewGameWindow::StateWindow::VeryLow:
        {
            onVeryLow();
            break;
        }

        case NewGameWindow::StateWindow::Low:
        {
            onLow();
            break;
        }
        case NewGameWindow::StateWindow::Middle:
        {
            onMiddle();
            break;
        }
        case NewGameWindow::StateWindow::Hard:
        {
            onHard();
            break;
        }
        case NewGameWindow::StateWindow::Nightmare:
        {
            onNightmare();
            break;
        }
        case NewGameWindow::StateWindow::Back:
        {
            showStartWindow();
            break;
        }

        case NewGameWindow::StateWindow::Exit:
            break;
        case NewGameWindow::StateWindow::Wait:
            break;
    }
}

void GUI::onSettingsWindowState(SettingsWindow::StateWindow state) {
    switch (state) {

        case SettingsWindow::StateWindow::KeyBoardSettings:
        {
            showStartWindow();
            break;
        }
        case SettingsWindow::StateWindow::AudioSettings:
        {
            showStartWindow();
            break;
        }
        case SettingsWindow::StateWindow::VideoSettings:
        {
            showStartWindow();
            break;
        }
        case SettingsWindow::StateWindow::MouseSettings:
        {
            showStartWindow();
            break;
        }
        case SettingsWindow::StateWindow::Back:
        {
            showStartWindow();
            break;
        }
        case SettingsWindow::StateWindow::Exit: {
            break;
        }
        case SettingsWindow::StateWindow::Wait:
            break;
    }
}

void GUI::onSaveWindowState(SaveGameWindow::StateWindow state) {

}

void GUI::onLoadGameWindowState(LoadGameWindow::StateWindow state) {
    switch (state) {

        case LoadGameWindow::StateWindow::LoadSave:
        {
            showStartWindow();
            break;
        }
        case LoadGameWindow::StateWindow::DeleteSave:
        {
            showStartWindow();
            break;
        }
        case LoadGameWindow::StateWindow::Back:
        {
            showStartWindow();
            break;
        }
        case LoadGameWindow::StateWindow::Exit:
            break;
        case LoadGameWindow::StateWindow::Wait:
            break;
    }
}

void GUI::onCreateHostWindowState(CreateHostWindow::StateWindow state) {

}

void GUI::onEscSettingsWindowState(EscSettingsWindow::StateWindow state) {

}


void GUI::onEscMenuStateWindow(EscMenuWindow::StateWindow state) {
    switch (state) {

        case EscMenuWindow::StateWindow::LoadGame:
            break;
        case EscMenuWindow::StateWindow::SaveGame:
            break;
        case EscMenuWindow::StateWindow::CreateHost:
            break;
        case EscMenuWindow::StateWindow::EscSettings:
            break;
        case EscMenuWindow::StateWindow::Back:
            break;
        case EscMenuWindow::StateWindow::Exit: {
            //showStartWindow();
            m_guiState = State::ExitToMainWindow;
            break;
        }
        case EscMenuWindow::StateWindow::Wait:
            break;
    }
}

void GUI::onNewGame() {

}

void GUI::onLoadGame() {

}

void GUI::onSaveGame() {

}

void GUI::onSettings() {

}

void GUI::onVeryLow() {
 m_difficulty = GameDifficulty::VeryLow;
}

void GUI::onLow() {
    m_difficulty = GameDifficulty::Low;
}

void GUI::onMiddle() {
    m_difficulty = GameDifficulty::Middle;
}

void GUI::onHard() {
    m_difficulty = GameDifficulty::Hard;
}

void GUI::onNightmare() {
    m_difficulty = GameDifficulty::Nightmare;
}

void GUI::onBackNewGame() {

}

void GUI::onBackLoadGame() {

}

void GUI::onBackCreateHost() {

}

void GUI::onBackSettings() {

}

void GUI::onBackEscMenu() {

}

void GUI::onBackEscMenuSettings() {

}

void GUI::onCreateSave() {

}

void GUI::onDeleteSave() {

}

void GUI::onLoadSave() {

}

void GUI::onKeyBoardSettings() {

}

void GUI::onAudioSettings() {

}

void GUI::onVideoSettings() {

}

void GUI::onMouseSettings() {

}

void GUI::LoadSave(size_t saveId) {

}

void GUI::DeleteSave(size_t saveId) {

}

GameDifficulty GUI::selectedDifficulty() const {
    return m_difficulty;
}

SDL_Window *GUI::window() {
    return m_window;
}

SDL_Renderer *GUI::renderer() {
    return m_renderer;
}

GUI::State GUI::guiState() const {
    return m_guiState;
}

void GUI::onPressESC() {
    m_escMenuWindow.show(m_window, m_renderer);
    onEscMenuStateWindow(m_escMenuWindow.stateWindow());
}

void GUI::onEndGameWindowState(EndGameWindow::StateWindow state) {

    switch (state) {

        case EndGameWindow::StateWindow::LoadGame:
            break;
        case EndGameWindow::StateWindow::Exit: {
            m_guiState = State::ExitToMainWindow;
            break;
        }
        case EndGameWindow::StateWindow::Wait:
            break;
    }
}

void GUI::onDead() {
    m_endGameWindow.show(m_window, m_renderer);
    onEndGameWindowState(m_endGameWindow.stateWindow());
}


