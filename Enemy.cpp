#include "Enemy.h"




SDL_Rect &Mine::GetGameObjectRect() {
    return this->body;
}

std::string Mine::getName() {
    return "Mine";
}

Color Mine::getColor() {
    return this->color;
}
void Mine::setPos(int posX, int posY) {
    this->body.x = posX;
    this->body.y = posY;
}


SDL_Rect &Human::GetGameObjectRect() {
    return this->body;
}

std::string Human::getName() {
    return "Human";
}

Color Human::getColor() {
    return this->color;
}
void Human::setPos(int posX, int posY) {
    this->body.x = posX;
    this->body.y = posY;
}

 Enemy* Enemy::getEnemy(EnemyType enemyType)
 {
     switch (enemyType) {
         case EnemyType::Mine:
             return new Mine;
         case EnemyType::Human:
             return  new Human;
         default:
             return new Mine;
     }
 }

