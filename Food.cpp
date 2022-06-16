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
    return this->body;
}

std::string Raspberry::getName() {
    return "Mine";
}

Color Raspberry::getColor() {
    return this->color;
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
}
void Orange::setPos(int posX, int posY) {
    this->body.x = posX;
    this->body.y = posY;
}
void Raspberry::setPos(int posX, int posY) {
    this->body.x = posX;
    this->body.y = posY;
}
void Pie::setPos(int posX, int posY) {
    this->body.x = posX;
    this->body.y = posY;
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
