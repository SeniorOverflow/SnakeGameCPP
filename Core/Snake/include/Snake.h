#pragma once

#include "IPlayer.h"
#include "IGameObject.h"
#include <vector>
#include "GameTypes.h"
#include <tuple>
#include <iostream>
#include "Trigger.h"


class SnakeBody : IPlayer, IGameObject {
public:
    SnakeBody(int x, int y, int w, int h);

    void setPos(int posX, int posY);

    std::tuple<int, int> getPos() const;

    void Move(int verticalDirection, int horizontalDirection);

    SDL_Rect &GetGameObjectRect() override;

private:
    SDL_Rect body{0, 0, 0, 0};
    Color color;
};

class Snake {
public:
    Snake();
    void AddHeal(int heal);
    void AddDamage(int damage);

    void Move(int verticalDirection, int HorizontalDirection);

    void AddToRender(SDL_Renderer *renderer);

    std::vector<const SnakeBody *> GetSnakeBody();

    Color GetHeadColor() { return m_colorHead; };
    Color GetBodyColor() { return m_colorBody; };

    std::tuple<int, int> GetBodyParam() { return std::tuple(bodyWight, bodyHeight); };
private :
    void AddSnakeBody(size_t count = 1);
    void RemoveBody(size_t count = 1);
private:
    int m_shankeHeal {100};
    Color m_colorHead {253, 107, 15};
    Color m_colorBody{253, 204, 77};

    int pos_x = 100;
    int pos_y = 100;
    int bodyWight = 10;
    int bodyHeight = 10;
    std::vector<SnakeBody *> m_snakeBody;
    SnakeBody * m_lastBody = nullptr;
};