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

std::tuple<std::vector<std::unique_ptr<Food>>, std::vector<std::unique_ptr<Enemy>>> VeryLowLevel::getGameObjects()
{
    std::tuple<std::vector<std::unique_ptr<Food>>, std::vector<std::unique_ptr<Enemy>>> a ;
    return a;

}

std::tuple<std::vector<std::unique_ptr<Food>>, std::vector<std::unique_ptr<Enemy>>> LowLevel::getGameObjects()
{
    this->countEnemies = 20;
    this->countFood = 100;
    std::tuple<std::vector<std::unique_ptr<Food>>, std::vector<std::unique_ptr<Enemy>>> a ;
    return a;

}

std::tuple<std::vector<std::unique_ptr<Food>>, std::vector<std::unique_ptr<Enemy>>> MiddleLevel::getGameObjects()
{
    this->countEnemies = 20;
    this->countFood = 100;
    std::tuple<std::vector<std::unique_ptr<Food>>, std::vector<std::unique_ptr<Enemy>>> a ;
    return a;

}

std::tuple<std::vector<std::unique_ptr<Food>>, std::vector<std::unique_ptr<Enemy>>> HardLevel::getGameObjects()
{
    this->countEnemies = 20;
    this->countFood = 100;
    std::tuple<std::vector<std::unique_ptr<Food>>, std::vector<std::unique_ptr<Enemy>>> a ;
    return a;

}

std::tuple<std::vector<std::unique_ptr<Food>>, std::vector<std::unique_ptr<Enemy>>> NightmareLevel::getGameObjects()
{
    this->countEnemies = 20;
    this->countFood = 100;

    std::tuple<std::vector<std::unique_ptr<Food>>, std::vector<std::unique_ptr<Enemy>>> a ;
    return a;

}






