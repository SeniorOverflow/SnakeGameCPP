#include <iostream>
#include "Food.h"


SDL_Rect &Apple::GetGameObjectRect() {
    return this->body;
}

std::string Apple::getName() {
    return "Mine";
}

Color Apple::getColor() {
    return this->color;
}

SDL_Rect &Orange::GetGameObjectRect() {
    return this->body;
}

std::string Orange::getName() {
    return "Mine";
}

Color Orange::getColor() {
    return this->color;
}


SDL_Rect & Raspberry::GetGameObjectRect() {
    return this->m_body;
}

std::string Raspberry::getName() {
    return "Mine";
}

Color Raspberry::getColor() {
    return this->m_color;
}

SDL_Rect &Pie::GetGameObjectRect() {
    return this->body;
}

std::string Pie::getName() {
    return "Mine";
}

Color Pie::getColor() {
    return this->color;
}

void Apple::setPos(int posX, int posY) {
    this->body.x = posX;
    this->body.y = posY;
    this->trigger = new Trigger(body.x, body.y, body.w, body.h);
}

void Orange::setPos(int posX, int posY) {
    this->body.x = posX;
    this->body.y = posY;
    this->trigger =  new Trigger(body.x, body.y, body.w, body.h);
}
void Raspberry::setPos(int posX, int posY) {
    this->m_body.x = posX;
    this->m_body.y = posY;
    this->m_trigger = new Trigger(posX, posY, m_body.w, m_body.h);
}
void Pie::setPos(int posX, int posY) {
    this->body.x = posX;
    this->body.y = posY;
    this->trigger = new Trigger(body.x, body.y, body.w, body.h);
}

bool Apple::isTriggered(const Rect & otherRect)
{
    if( this->trigger->isIntoTrigger(otherRect))
    {
        isUsed = true;
        return true;
    }
    return false;
}

bool Orange::isTriggered(const Rect & otherRect)
{

    if( this->trigger->isIntoTrigger(otherRect))
    {
        isUsed = true;
        return true;
    }
    return false;

}
bool Raspberry::isTriggered(const Rect & otherRect)
{
    if( this->m_trigger->isIntoTrigger(otherRect))
    {

        isUsed = true;
        return true;
    }
    return false;
}
bool Pie::isTriggered(const Rect & otherRect)
{
    if(this->trigger->isIntoTrigger(otherRect))
    {
        isUsed = true;
        return true;
    }
    return false;
}
int Apple::GetHealth() {
    return m_heal;
}
int Orange::GetHealth() {
    return m_heal;
}
int Pie::GetHealth() {
    return m_heal;
}
int Raspberry::GetHealth() {
    return m_heal;
}


Food* Food::getFood(FoodType foodType)
{
    switch (foodType) {
        case FoodType::Apple:
            return new Apple;
        case FoodType::Orange:
            return  new Orange;
        case FoodType::Raspberry:
            return  new Raspberry;
        case FoodType::Pie:
            return  new Pie;
        default:
            return new Apple;
    }
}
