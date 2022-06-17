//
// Created by DonEn on 6/16/2022.
//

#include "Spawner.h"



std::vector<Enemy*> Spawner::CreateEnemy(size_t countEnemies) {
    std::vector<Enemy*> enemies;



    for (size_t i = 0; i < countEnemies; i++) {
        int probability = std::rand() % 100;

        if (probability >= 0 && probability < 40) {
            auto enemy = Enemy::getEnemy(EnemyType::Human);
            enemies.push_back(enemy);
        } else {
            auto enemy = Enemy::getEnemy(EnemyType::Mine);
            enemies.push_back(enemy);
        }
    }
    return  enemies;
}

std::vector<Food*>  Spawner::CreateFood(size_t countFoods) {
    std::vector<Food*> foods;
    for (size_t i = 0; i < countFoods; i++) {
        int probability = std::rand() % 100;
        if (probability >= 0 && probability < 25) {
            foods.push_back(Food::getFood(FoodType::Apple));
        } else if(probability >= 0 && probability < 25) {
            foods.push_back(Food::getFood(FoodType::Orange));
        }
        else if(probability >= 0 && probability < 25) {
            foods.push_back(Food::getFood(FoodType::Pie));
        }
        else
        {
            foods.push_back(Food::getFood(FoodType::Raspberry));
        }
    }
    return  foods;
}




Spawner::Spawner( int windowWight, int windowHeight)
{
    m_windowHeight = windowHeight;
    m_windowWight = windowWight;
}

void Spawner::SpawnEnemy(SDL_Renderer *renderer, std::vector<Enemy*> enemies)
{

    for(auto & enemy : enemies)
    {
        Color colorEnemy = enemy->getColor();

        SDL_SetRenderDrawColor(renderer, colorEnemy.RED, colorEnemy.GREEN, colorEnemy.BLUE, 255);
        SDL_RenderFillRect(renderer, &enemy->GetGameObjectRect());
    }


}


void Spawner::SpawnFood(SDL_Renderer *renderer, std::vector<Food*> foods)
{
    for(auto & food : foods)
    {
        if(food->CheckOnUse())
        {
            continue;
        }
        else {

            Color colorFood = food->getColor();
            SDL_SetRenderDrawColor(renderer, colorFood.RED, colorFood.GREEN, colorFood.BLUE, 255);
            SDL_RenderFillRect(renderer, &food->GetGameObjectRect());
        }
    }

}

