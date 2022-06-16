#pragma once 
#include <memory>
#include "IGameObject.h"
#include "Trigger.h"

class Food
{
public:
    virtual std::string getName() = 0;
    virtual SDL_Rect &GetGameObjectRect()  = 0;
    virtual Color getColor() = 0;
    virtual void setPos(int  posX , int posY) = 0;
    virtual  ~Food() {}
    static Food *  getFood(FoodType foodType);

};

class Apple : public Food
{
public:
    std::string getName() override;
    SDL_Rect &GetGameObjectRect() override;
    void setPos(int  posX , int posY) override;
    Color getColor() override;
private:
    Color color {150,100,100};
    SDL_Rect body{0,0,5,5};
};

class Raspberry: public Food
{
public:
    std::string getName() override;
    SDL_Rect &GetGameObjectRect() override;
    void setPos(int  posX , int posY) override;
    Color getColor() override;
private:
    Color color{100,100,100};
    SDL_Rect body{0,0,5,5};

};

class Orange: public Food
{
public:
    std::string getName() override;
    SDL_Rect &GetGameObjectRect() override;
    void setPos(int  posX , int posY) override;
    Color getColor() override;
private:
    Color color{50,100,100};
    SDL_Rect body{0,0,5,5};
};

class Pie: public Food
{
public:
    std::string getName() override;
    SDL_Rect &GetGameObjectRect() override;
    void setPos(int  posX , int posY) override;
    Color getColor() override;
private:
    Color color{200,100,100};
    SDL_Rect body{0,0,5,5};
};