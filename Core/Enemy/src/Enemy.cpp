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
    this->trigger = new Trigger(body.x, body.y, body.w, body.h);
}


SDL_Rect &Human::GetGameObjectRect() {
    return this->body;
}

std::string Human::getName() {
    return "Human";
}

int Human::GetDamage() {
    return this->m_damage;
}
int Mine::GetDamage() {
    return this->m_damage;
}
std::tuple<int, int> Mine::getPos()
{
    return  std::tuple<int, int>{body.x , body.y};
}

bool Mine::isTriggered(const Rect & otherRect)
{
    if( this->trigger->isIntoTrigger(otherRect))
    {
        isUsed = true;
        return true;
    }
    return false;
}
bool Human::isTriggered(const Rect & otherRect)
{
    if( this->trigger->isIntoTrigger(otherRect))
    {
        isUsed = true;
        return true;
    }
    return false;
}

Color Human::getColor() {
    return this->color;
}
void Human::setPos(int posX, int posY) {
    this->body.x = posX;
    this->body.y = posY;
    this->trigger = new Trigger(body.x, body.y, body.w, body.h);
}

std::tuple<int, int> Human::getPos() {
    return std::tuple<int, int>(body.x, body.y);
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

