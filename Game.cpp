#include "Game.h"


Game::Game() {

    m_shake = std::unique_ptr<Snake>(new Snake());


}

void Game::Update() {
    while (isRunning) {
        while (SDL_PollEvent(&event)) {

            if (event.type == SDL_QUIT) {
                isRunning = false;
            }
            if (event.type == SDL_KEYDOWN) {
                if (event.key.keysym.sym == SDLK_s) {m_shake->Move(0,10);}
                if (event.key.keysym.sym == SDLK_w) {m_shake->Move(0,-10);}
                if (event.key.keysym.sym == SDLK_a) {m_shake->Move(-10,0);}
                if (event.key.keysym.sym == SDLK_d) {m_shake->Move(10,0);}
            }
        }

        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        SDL_RenderClear(renderer); //Очистка рендера
        Color snakeColor = m_shake->GetColor();
        SDL_SetRenderDrawColor(renderer, (Uint8) snakeColor.RED, (Uint8) snakeColor.GREEN, (Uint8) snakeColor.BLUE, 15);
        m_shake->AddToRender(renderer);
       // SDL_RenderFillRect(renderer, &rect);
        SDL_RenderPresent(renderer);

    }
}

void Game::Start(GameDifficulty difficulty) {

    rect.x = 15;
    rect.y = 22;
    rect.h = 10;
    rect.w = 10;
// Создание объектов при помощи фабрик объектов
    VeryLowLevelFactory *veryLowLevelFactory = new VeryLowLevelFactory;
    LowLevelFactory *lowLevelFactory = new LowLevelFactory;
    MiddleLevelFactory *middleLevelFactory = new MiddleLevelFactory;
    HardLevelFactory *hardLevelFactory = new HardLevelFactory;
    NightmareLevelFactory *nightmareLevelFactory = new NightmareLevelFactory;

    switch (difficulty) {
        case GameDifficulty::VeryLow:
            m_level = veryLowLevelFactory->createLevel();
            break;
        case GameDifficulty::Low:
            m_level = veryLowLevelFactory->createLevel();
            break;
        case GameDifficulty::Middle:
            m_level = veryLowLevelFactory->createLevel();
            break;
        case GameDifficulty::Hard:
            m_level = veryLowLevelFactory->createLevel();
            break;
        case GameDifficulty::Nightmare:
            m_level = veryLowLevelFactory->createLevel();
            break;
        default:
            break;

    }

    InitWindow(480, 480);
    Update();

    if (isRunning == false) {
        QuitGame();
    }

}