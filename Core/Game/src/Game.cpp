#include "Game.h"


Game::Game(): m_gui(std::unique_ptr<GUI>(new GUI()))  {



}

void Game::Update() {
   // std::cout<<"Update "<<std::endl;
    while (isRunning) {
        while (SDL_PollEvent(&event)) {

            if (event.type == SDL_QUIT) {
                isRunning = false;
            }
            if (event.type == SDL_KEYDOWN) {
                if (event.key.keysym.sym == SDLK_s) {m_shake->Move(0,10);
                    m_lastMove = LastMove::MoveDown;

                }
                if (event.key.keysym.sym == SDLK_w) {m_shake->Move(0,-10);
                    m_lastMove = LastMove::MoveUp;}
                if (event.key.keysym.sym == SDLK_a) {m_shake->Move(-10,0);
                    m_lastMove = LastMove::MoveLeft;}
                if (event.key.keysym.sym == SDLK_d) {m_shake->Move(10,0);
                    m_lastMove = LastMove::MoveRight;
                }
                if (event.key.keysym.sym == SDLK_ESCAPE ){
                    m_gui->onPressESC();

                    if(m_gui->guiState() == GUI::State::ExitToMainWindow)
                    {
                        return Start();
                    }
                };
            }
        }
        switch (m_lastMove) {

            case LastMove::MoveUp:
            {
                m_shake->Move(0,-1);
                break;
            }
            case LastMove::MoveDown:
            {
                m_shake->Move(0,1);
                break;
            }
            case LastMove::MoveLeft:
            {
                m_shake->Move(-1,0);
                break;
            }
            case LastMove::MoveRight:
            {
                m_shake->Move(1,0);
                break;
            }
            case LastMove::DontMove:
            {
                break;
            }
        }

        SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
        SDL_RenderClear(renderer); //Очистка рендера


        CheckCollision();


        spawner->DrawCallEnemy(renderer, m_enemies);
        spawner->DrawCallFood(renderer, m_foods);
        CheckEnemies();
        CheckFoods();
        if(m_shake.get()->snakeState() ==   SnakeState::Dead)
        {
             m_gui.get()->onDead();
             if(m_gui.get()->guiState() == GUI::State::ExitToMainWindow)
             {
                 return Start();
             }
        }
        DrawCountEnemies();
        DrawCountFoods();
        DrawCountHeal();
        m_shake->AddToRender(renderer);
       // SDL_RenderFillRect(renderer, &rect);
        SDL_RenderPresent(renderer);

    }
}

void Game::Start() {


    if( TTF_Init()  == -1 )
    {
        std::cout<<"some error"<<std::endl;
    }
    m_shake = std::unique_ptr<Snake>(new Snake());
    m_lastMove = LastMove::DontMove;

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
    onSelectDifficulty( m_gui->selectedDifficulty());
  //  m_gameDifficulty = m_gui.get()->selectedDifficulty();
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
            m_level = veryLowLevelFactory->createLevel();
            break;
    }

 //   std::cout<<m_level->GetDifficultyName()<<std::endl;
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
//    gui::MenuItem menuItems[] = {
//            { "Count Food",  ,{ 300, 200, 200, 50 } },
//            { "Count Enemy", ,{ 300, 300, 200, 50 } },
//            { "Settings", ,{ 300, 400, 200, 50 } },
//            { "Exit", ,{ 300, 675, 200, 50 } }
//    };
  //  m_font = TTF_OpenFont("assets//Caprasimo-Regular.ttf", 24);
    Update();


    TTF_Quit();

    if (isRunning == false) {
        QuitGame();
    }

}


void Game::CheckCollision() {
    auto [snakeBodyWight, snakeBodyHeight] = m_shake->GetBodyParam();

    auto [snakeHeadPosX, snakeHeadPosY] =  m_shake->GetSnakeBody()[0]->getPos();

    if(snakeHeadPosX > windowWeight || snakeHeadPosX < 0)
    {
        if(snakeHeadPosX > windowWeight)
        {
            m_shake->TeleportToPos(0, snakeHeadPosY );

        }
        else
        {
            m_shake->TeleportToPos(windowWeight, snakeHeadPosY );
        }
    }
    if(snakeHeadPosY > windowHeight || snakeHeadPosY < 0)
    {
        if(snakeHeadPosY > windowHeight)
        {
            m_shake->TeleportToPos(snakeHeadPosX, 0 );

        }
        else
        {
            m_shake->TeleportToPos(snakeHeadPosX, windowHeight );
        }
    }


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
            break;
        }
        case GUI::State::ExitGame:
            isRunning = false;
            break;
        case GUI::State::None:
            break;
    }

}

void Game::onSelectDifficulty(GameDifficulty gameDifficulty) {
    m_gameDifficulty = gameDifficulty;
}

void Game::CheckEnemies() {
  //  std::cout<< m_enemies.size() << "Count Enemies" <<   m_enemies.size();

    size_t removedEnemies = 0;
    for(size_t i  = 0; i < m_enemies.size(); ++i)
    {
        if(m_enemies[i]->CheckOnUse())
        {
            m_enemies.erase(m_enemies.begin() + i);
            removedEnemies++;

            continue;
            // std::cout<< m_enemies.size() << "Count Enemies" <<   m_enemies.size();
        }
        if(m_shake.get()->snakeState() == SnakeState::Alive) {
            auto [snakeHeadPosX, snakeHeadPosY] = m_shake->GetSnakeBody()[0]->getPos();
            auto [enemyPosX, enemyPosY] = m_enemies[i]->getPos();
            bool changePos{false};
            if (enemyPosX > snakeHeadPosX || enemyPosX < snakeHeadPosX) {
                if (enemyPosX > snakeHeadPosX) {
                    enemyPosX -= 1;
                    //  m_enemies[i]->setPos((enemyPosX - 1),  enemyPosY );
                } else {
                    enemyPosX += 1;
                    //m_enemies[i]->setPos((enemyPosX +  1),  enemyPosY );
                }
                changePos = true;
            }
            if (enemyPosY > snakeHeadPosY || enemyPosY < snakeHeadPosY) {
                if (enemyPosY > snakeHeadPosY) {
                    enemyPosY -= 1;
                    // m_enemies[i]->setPos(enemyPosX ,  enemyPosY - 1 );
                } else {
                    enemyPosY += 1;
                    //  m_enemies[i]->setPos(enemyPosX ,  enemyPosY + 1 );
                }
                changePos = true;
            }
            if (changePos) {
                m_enemies[i]->setPos(enemyPosX, enemyPosY);
            }
        }
    }
    if(removedEnemies > 0)
    {
        auto enemiesData = Spawner::CreateEnemy(removedEnemies);
        for(auto enemy : enemiesData)
        {
            int posX = rand()% this->windowHeight;
            int posY = rand()% this->windowHeight;
            enemy->setPos(posX,posY);
            m_enemies.emplace_back(enemy);
        }
    }

}

void Game::DrawCountEnemies() {
  
    m_font = TTF_OpenFont("assets//Caprasimo-Regular.ttf", 20);
    SDL_Surface* surface = TTF_RenderText_Solid(m_font, std::string("Enemy \t" +  std::to_string(m_enemies.size())).c_str()   , { 255, 0, 0,150});
    SDL_Texture* texture = SDL_CreateTextureFromSurface(renderer, surface);
    SDL_Rect textRect = { 10, 10, surface->w, surface->h };
    SDL_RenderCopy(renderer, texture, NULL, &textRect);

    SDL_FreeSurface(surface);
    SDL_DestroyTexture(texture);
    TTF_CloseFont(m_font);

}


void Game::DrawCountFoods() {

    m_font = TTF_OpenFont("assets//Caprasimo-Regular.ttf", 20);
    SDL_Surface* surface = TTF_RenderText_Solid(m_font, std::string("Foods \t" +  std::to_string(m_foods.size())).c_str()   , { 0, 255, 0,150});
    SDL_Texture* texture = SDL_CreateTextureFromSurface(renderer, surface);
    SDL_Rect textRect = { 10, 30, surface->w, surface->h };
    SDL_RenderCopy(renderer, texture, NULL, &textRect);

    SDL_FreeSurface(surface);
    SDL_DestroyTexture(texture);
    TTF_CloseFont(m_font);

}

void Game::DrawCountHeal() {

    m_font = TTF_OpenFont("assets//Caprasimo-Regular.ttf", 20);
    SDL_Surface* surface = TTF_RenderText_Solid(m_font, std::string("Heal \t" +  std::to_string(m_shake->getCurrentHeal())).c_str()   , { 0, 255, 0,150});
    SDL_Texture* texture = SDL_CreateTextureFromSurface(renderer, surface);
    SDL_Rect textRect = { 10, 50, surface->w, surface->h };
    SDL_RenderCopy(renderer, texture, NULL, &textRect);

    SDL_FreeSurface(surface);
    SDL_DestroyTexture(texture);
    TTF_CloseFont(m_font);

}




void Game::CheckFoods() {
    //  std::cout<< m_enemies.size() << "Count Enemies" <<   m_enemies.size();

    size_t removedFoods = 0;
    for(size_t i  = 0; i < m_foods.size(); ++i)
    {
        if(m_foods[i]->CheckOnUse())
        {
            m_foods.erase(m_foods.begin() + i);
            removedFoods++;


            // std::cout<< m_enemies.size() << "Count Enemies" <<   m_enemies.size();
        }
    }
    if(removedFoods > 0)
    {
        auto enemiesData = Spawner::CreateFood(removedFoods);
        for(auto food : enemiesData)
        {
            int posX = rand()% this->windowHeight;
            int posY = rand()% this->windowHeight;
            food->setPos(posX,posY);
            m_foods.emplace_back(food);
        }
    }

}