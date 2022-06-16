#pragma once

#include <iostream>
#include <vector>

#include "GameTypes.h"
#include <memory>
#include "Food.h"
#include "Enemy.h"
#include <string>

class Level {
public:
    virtual std::string GetDifficultyName() = 0;
    virtual std::tuple<std::vector<std::unique_ptr<Food>>, std::vector<std::unique_ptr<Enemy>>> getGameObjects() = 0;
    virtual  ~Level() {};
protected:
    std::vector<std::unique_ptr<Food>> m_foods;
    std::vector<std::unique_ptr<Enemy>> m_enemies;
    size_t countFood = 0 ;
    size_t countEnemies = 0;
};


class VeryLowLevel : public Level {
public:
    std::string GetDifficultyName() override;
    std::tuple<std::vector<std::unique_ptr<Food>>, std::vector<std::unique_ptr<Enemy>>> getGameObjects() override;
};


class LowLevel : public Level {
public:
    std::string GetDifficultyName() override ;
     std::tuple<std::vector<std::unique_ptr<Food>>, std::vector<std::unique_ptr<Enemy>>> getGameObjects() override ;
};

class MiddleLevel : public Level {
public:
    std::string GetDifficultyName() override ;
      std::tuple<std::vector<std::unique_ptr<Food>>, std::vector<std::unique_ptr<Enemy>>> getGameObjects() override ;
};

class HardLevel : public Level {
public:
    std::string GetDifficultyName() override;
     std::tuple<std::vector<std::unique_ptr<Food>>, std::vector<std::unique_ptr<Enemy>>> getGameObjects() override ;
};

class NightmareLevel : public Level {
public:
    std::string GetDifficultyName() override;
    std::tuple<std::vector<std::unique_ptr<Food>>, std::vector<std::unique_ptr<Enemy>>> getGameObjects() override ;
};


class Factory {
public:
    virtual Level *createLevel() = 0;

    virtual ~Factory() {}
};


class VeryLowLevelFactory : public Factory {
public:
    Level *createLevel() override {
        return new VeryLowLevel;
    }
};

class LowLevelFactory : public Factory {
public:
    Level *createLevel() override {
        return new LowLevel;
    }
};

class MiddleLevelFactory : public Factory {
public:
    Level *createLevel() override {
        return new MiddleLevel;
    }
};


class HardLevelFactory : public Factory {
public:
    Level *createLevel() override {
        return new HardLevel;
    }
};


class NightmareLevelFactory : public Factory {
public:
    Level *createLevel() override {
        return new NightmareLevel;
    }
};


