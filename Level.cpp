#include "Level.h"


std::string VeryLowLevel::GetDifficultyName()  {
    return "VeryLowLevel";
}

std::string LowLevel::GetDifficultyName() {
    return "LowLevel";
}

std::string MiddleLevel::GetDifficultyName() {
    return "MiddleLevel";
}

std::string HardLevel::GetDifficultyName() {
    return "HardLevel";
}

std::string NightmareLevel::GetDifficultyName() {
    return "NightmareLevel";
}



std::tuple<std::vector<Food*>, std::vector<Enemy*>> VeryLowLevel::getGameObjects()
{
    this->countEnemies = 20;
    this->countFood = 100;

    auto enemies =  Spawner::CreateEnemy(countEnemies);
    auto foods =  Spawner::CreateFood(countFood);


    std::tuple<std::vector<std::unique_ptr<Food>>, std::vector<std::unique_ptr<Enemy>>> a ;
    return std::make_tuple(foods, enemies);

}

std::tuple<std::vector<Food*>, std::vector<Enemy*>> LowLevel::getGameObjects()
{
    this->countEnemies = 20;
    this->countFood = 100;
    auto enemies =  Spawner::CreateEnemy(countEnemies);
    auto foods =  Spawner::CreateFood(countFood);

    return std::make_tuple(foods, enemies);

}

std::tuple<std::vector<Food*>, std::vector<Enemy*>> MiddleLevel::getGameObjects()
{
    this->countEnemies = 20;
    this->countFood = 100;
    auto enemies =  Spawner::CreateEnemy(countEnemies);
    auto foods =  Spawner::CreateFood(countFood);

    return std::make_tuple(foods, enemies);

}

std::tuple<std::vector<Food*>, std::vector<Enemy*>> HardLevel::getGameObjects()
{
    this->countEnemies = 20;
    this->countFood = 100;
    auto enemies =  Spawner::CreateEnemy(countEnemies);
    auto foods =  Spawner::CreateFood(countFood);
   ;
    return std::make_tuple(foods, enemies);

}

std::tuple<std::vector<Food*>, std::vector<Enemy*>> NightmareLevel::getGameObjects()
{
    this->countEnemies = 20;
    this->countFood = 100;
    auto enemies =  Spawner::CreateEnemy(countEnemies);
    auto foods =  Spawner::CreateFood(countFood);


    return std::make_tuple(foods, enemies);

}






