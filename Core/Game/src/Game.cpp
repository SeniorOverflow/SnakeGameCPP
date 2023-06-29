#include "Game.h"


Game::Game(): m_gui(std::unique_ptr<GUI>(new GUI()))  {

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
                if (event.key.keysym.sym == SDLK_ESCAPE ){m_gui->onPressESC(); };
            }
        }

        SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
        SDL_RenderClear(renderer); //Очистка рендера


        CheckCollision();
        spawner->SpawnEnemy(renderer, m_enemies);
        spawner->SpawnFood(renderer, m_foods);



        m_shake->AddToRender(renderer);
       // SDL_RenderFillRect(renderer, &rect);
        SDL_RenderPresent(renderer);

    }
}

void Game::Start() {

    m_gui->showStartWindow();
    onStateGUI(m_gui->guiState());


    window = m_gui->window();
    renderer = m_gui->renderer();
    spawner = std::unique_ptr<Spawner>( new Spawner(windowWeight, windowHeight));

// Создание объектов при помощи фабрик объектов
    auto veryLowLevelFactory = std::unique_ptr<VeryLowLevelFactory>(new  VeryLowLevelFactory);
    auto lowLevelFactory = std::unique_ptr<LowLevelFactory>(new LowLevelFactory);
    auto middleLevelFactory = std::unique_ptr<MiddleLevelFactory>(new MiddleLevelFactory);
    auto hardLevelFactory = std::unique_ptr<HardLevelFactory>(new HardLevelFactory);
    auto nightmareLevelFactory =std::unique_ptr<NightmareLevelFactory>( new NightmareLevelFactory);


    switch (m_gameDifficulty) {
        case GameDifficulty::VeryLow:
            m_level = veryLowLevelFactory->createLevel();
            break;
        case GameDifficulty::Low:
            m_level = lowLevelFactory->createLevel();
            break;
        case GameDifficulty::Middle:
            m_level = middleLevelFactory->createLevel();
            break;
        case GameDifficulty::Hard:
            m_level = hardLevelFactory->createLevel();
            break;
        case GameDifficulty::Nightmare:
            m_level = nightmareLevelFactory->createLevel();
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
    //InitWindow(windowWeight, windowHeight);

    Update();


    if (isRunning == false) {
        QuitGame();
    }
}


void Game::CheckCollision() {
    auto [snakeBodyWight, snakeBodyHeight] = m_shake->GetBodyParam();
    for( auto  & snakeBody : m_shake->GetSnakeBody())
    {
        auto [snakeBodyPosX, snakeBodyPosY] = snakeBody->getPos();
        Rect rect(snakeBodyPosX,snakeBodyPosY, snakeBodyWight , snakeBodyHeight);
        for(size_t i =0; i < m_foods.size() ; ++i)
        {
            if(m_foods[i]->CheckOnUse())
            {
                continue;
            }
            if( m_foods[i]->isTriggered(rect))
            {
                m_shake->AddHeal(m_foods[i]->GetHealth());
                std::cout<<snakeBodyPosX << " - -  -" <<snakeBodyPosY<<std::endl;

                std::cout<<"Trigered"<<std::endl;
            }
        }

        for(size_t i =0; i < m_enemies.size() ; ++i)
        {
            if(m_enemies[i]->CheckOnUse())
            {
                continue;
            }
            if( m_enemies[i]->isTriggered(rect))
            {
                m_shake->AddDamage(m_enemies[i]->GetDamage());
                std::cout<<snakeBodyPosX << " - -  -" <<snakeBodyPosY<<std::endl;

                std::cout<<"Trigered"<<std::endl;
            }
        }
    }
}

Game::~Game() {

}

void Game::onStateGUI(GUI::State state) {

    switch (state) {

        case GUI::State::StartGame: {

            onSelectDifficulty( m_gui->selectedDifficulty());
            break;
        }
        case GUI::State::ExitGame:
            isRunning = false;
            break;
        case GUI::State::None:
            break;
    }

}

void Game::onSelectDifficulty(GUI::SelectedDifficulty state) {
    switch (state) {
        case GUI::SelectedDifficulty::VeryLow:
        {
            m_gameDifficulty = GameDifficulty::VeryLow;
            break;
        }
        case GUI::SelectedDifficulty::Low:
        {
            m_gameDifficulty = GameDifficulty::Low;
            break;
        }
        case GUI::SelectedDifficulty::Middle:
        {
            m_gameDifficulty = GameDifficulty::Middle;
            break;
        }
        case GUI::SelectedDifficulty::Hard:
        {
            m_gameDifficulty = GameDifficulty::Hard;
            break;
        }
        case GUI::SelectedDifficulty::Nightmare:
        {
            m_gameDifficulty = GameDifficulty::Nightmare;
            break;
        }
    }
}
