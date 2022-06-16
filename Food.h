#pragma once 
#include <memory>
#include "IGameObject.h"

class Food : IGameObject
{
public:
    virtual Food *  getFood() = 0;
    virtual  ~Food() {};
};

class Apple : Food
{
    Food * getFood();
};

class Raspberry: Food
{
    Food * getFood();
};

class Orange: Food
{
    Food * getFood();
};

class Pie: Food
{
    Food * getFood();
};