#pragma once 
#include <memory>
#include "IGameObject.h"
#include "Trigger.h"
#include <SDL.h>
class Food
{
public:
    virtual std::string getName() = 0;
    virtual SDL_Rect &GetGameObjectRect()  = 0;
    virtual Color getColor() = 0;
    virtual void setPos(int  posX , int posY) = 0;
    virtual bool isTriggered(const Rect & rect) = 0;
    virtual bool CheckOnUse() = 0;
    virtual int GetHealth() = 0;

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
    bool isTriggered(const Rect & rect) override;
    bool CheckOnUse() override {return isUsed;};
    int GetHealth() override;

private:
    int m_heal {10};
    int m_width {20};
    int m_height {20 };
    Color color {150,100,100};
    SDL_Rect body{0,0,m_width,m_height};
    Trigger* trigger;
    bool isUsed = false;
};

class Raspberry: public Food
{
public:
    std::string getName() override;
    SDL_Rect &GetGameObjectRect() override;
    void setPos(int  posX , int posY) override;
    Color getColor() override;
    bool isTriggered(const Rect & rect) override;
    bool CheckOnUse() override {return isUsed;};
    int GetHealth() override;
private:
    int m_heal {120};
    int m_width {20};
    int m_height {20 };
    Color m_color{100, 100, 100};
    SDL_Rect m_body{0, 0, m_width, m_height};
    Trigger* m_trigger;
    bool isUsed = false;
};

class Orange: public Food
{
public:
    std::string getName() override;
    SDL_Rect &GetGameObjectRect() override;
    void setPos(int  posX , int posY) override;
    Color getColor() override;
    bool isTriggered(const Rect & rect) override;
    bool CheckOnUse() override {return isUsed;};
    int GetHealth() override;
private:
    int m_heal {130};
    int m_width {20 };
    int m_height {20 };
    Color color{50,100,100};
    SDL_Rect body{0,0,m_width,m_height};
    Trigger *trigger;
    bool isUsed = false;
};

class Pie: public Food
{
public:
    std::string getName() override;
    SDL_Rect &GetGameObjectRect() override;
    void setPos(int  posX , int posY) override;
    Color getColor() override;
    bool isTriggered(const Rect & rect) override;
    bool CheckOnUse() override {return isUsed;};
    int GetHealth() override;
private:
    int m_heal {140};
    int m_width {20 };
    int m_height {20 };

    Color color{200,100,100};
    SDL_Rect body{0,0,m_width,m_height};
    Trigger *trigger;
    bool isUsed = false;
};