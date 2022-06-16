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


        spawner->SpawnEnemy(renderer, m_enemies);
        spawner->SpawnFood(renderer, m_foods);

        SDL_SetRenderDrawColor(renderer, (Uint8) snakeColor.RED, (Uint8) snakeColor.GREEN, (Uint8) snakeColor.BLUE, 255);
        m_shake->AddToRender(renderer);
       // SDL_RenderFillRect(renderer, &rect);
        SDL_RenderPresent(renderer);

    }
}

void Game::Start(GameDifficulty difficulty) {


    spawner = std::unique_ptr<Spawner>( new Spawner(windowWeight, windowHeight));

// Создание объектов при помощи фабрик объектов
    auto veryLowLevelFactory = std::unique_ptr<VeryLowLevelFactory>(new  VeryLowLevelFactory);
    auto lowLevelFactory = std::unique_ptr<LowLevelFactory>(new LowLevelFactory);
    auto middleLevelFactory = std::unique_ptr<MiddleLevelFactory>(new MiddleLevelFactory);
    auto hardLevelFactory = std::unique_ptr<HardLevelFactory>(new HardLevelFactory);
    auto nightmareLevelFactory =std::unique_ptr<NightmareLevelFactory>( new NightmareLevelFactory);


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
    std::cout<<m_level->GetDifficultyName()<<std::endl;
    auto  data = m_level->getGameObjects();
    m_foods = std::get<0>(data);
    m_enemies = std::get<1>(data);

    for(auto &food : m_foods)
    {
        int posX = rand()% this->windowHeight;
        int posY = rand()% this->windowHeight;
        food->setPos(posX,posY);
    }

    for(auto &enemy : m_enemies)
    {
        int posX = rand()% this->windowHeight;
        int posY = rand()% this->windowHeight;
        enemy->setPos(posX,posY);
    }

    InitWindow(windowWeight, windowHeight);
    Update();

    if (isRunning == false) {
        QuitGame();
    }

}