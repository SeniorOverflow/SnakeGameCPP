#pragma once

#include "IGameObject.h"
#include "GameTypes.h"
#include <string>
#include "Trigger.h"


class Enemy {
public:
    virtual std::string getName() = 0;
    virtual SDL_Rect &GetGameObjectRect()  = 0;
    virtual Color getColor() = 0;
    virtual void setPos(int  posX , int posY) = 0;
    virtual ~Enemy(){}
    static Enemy *getEnemy(EnemyType enemyType);
};

class Mine : public Enemy {
public :

    SDL_Rect &GetGameObjectRect() override;
    void setPos(int  posX , int posY) override;
    std::string getName() override;

    Color getColor() override;

private:
    Color color {250,150,10};
    SDL_Rect body{0,0,20,5};
};

class Human : public Enemy {

    SDL_Rect &GetGameObjectRect() override;
    void setPos(int  posX , int posY) override;
    std::string getName() override;

    Color getColor() override;

private:
    Color color {150,50,40};
    SDL_Rect body{0,0,10,5};
};