#pragma once 

#include "IPlayer.h"
#include "IGameObject.h"
#include <vector>
#include "GameTypes.h"
#include <tuple>
#include <iostream>


class SnakeBody : IPlayer , IGameObject
{
public:
    SnakeBody(Color, int x, int  y ,  int w ,  int h  );
    void setPos(int posX, int posY);
    std::tuple<int, int> getPos();
    void Move(int verticalDirection, int horizontalDirection);
    SDL_Rect & GetGameObjectRect() override;

private:
    SDL_Rect body {0,0,0,0};
    Color color;
};

class Snake
{
public:
    Snake();
    void Move(int verticalDirection, int HorizontalDirection);
    void AddToRender(SDL_Renderer * renderer);
    Color GetColor (){return color;};
private:
    Color color;
    int pos_x = 100;
    int pos_y = 100;
    int bodyWight = 10;
    int bodyHeight = 10;
    int health = 100;
    std::vector<SnakeBody> m_snakeBody;
};