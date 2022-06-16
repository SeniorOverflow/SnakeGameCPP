#pragma once 
#include "IGameObject.h"

class Enemy : IGameObject
{
public:
    virtual Enemy * getEnemy() = 0;
    virtual ~Enemy();
};

class Mine : Enemy
{
    Enemy  * getEnemy();
};

class Human : Enemy
{
    Enemy  * getEnemy();
};