#include "Snake.h"



void Snake::AddToRender(SDL_Renderer * renderer)
{
    for(auto  &body : this->m_snakeBody)
    {
        SDL_RenderFillRect(renderer, &body.GetGameObjectRect());
    }
}
SDL_Rect & SnakeBody::GetGameObjectRect() {

    return this->body;
}

void SnakeBody::Move(int verticalDirection, int horizontalDirection) {

    std::cout<<body.x <<" --- " <<body.y<<std::endl;
    this->body.x +=verticalDirection;
    this->body.y +=horizontalDirection;


}

void SnakeBody::setPos(int posX, int posY)
{
    this->body.x = posX;
    this->body.y = posY;
}

SnakeBody::SnakeBody( int x, int y , int w ,int  h)
{
    this->body.w = w;
    this->body.h = h;
    this->body.x = x;
    this->body.y = y;
}

void Snake::Move(int verticalDirection, int horizontalDirection) {

    bool isHead = true;
    int prevPosX = 0;
    int prevPosY = 0;
    for(auto & body: m_snakeBody)
    {

        if(isHead) {
            auto [l_prevPosX, l_prevPosY] = body.getPos();
            prevPosX = l_prevPosX;
            prevPosY = l_prevPosY;
            body.Move(verticalDirection, horizontalDirection);
            isHead = false;
            continue;
        }
        else
        {
            auto [l_prevPosX, l_prevPosY] = body.getPos();
            body.setPos(prevPosX,prevPosY);
            prevPosX = l_prevPosX;
            prevPosY = l_prevPosY;

        }

    }
}


std::tuple<int, int> SnakeBody::getPos()
{
    return std::tuple(this->body.x, this->body.y);
}

Snake::Snake() {
    color.RED = 244;
    color.GREEN = 124;
    color.BLUE = 124;

    SnakeBody body( this->pos_x, this->pos_y, this->bodyWight, this->bodyHeight );
    SnakeBody body2( this->pos_x, this->pos_y - 15, this->bodyWight, this->bodyHeight );
    SnakeBody body3( this->pos_x, this->pos_y  - 30, this->bodyWight, this->bodyHeight );
    SnakeBody body4( this->pos_x, this->pos_y - 45, this->bodyWight, this->bodyHeight );
    SnakeBody body5( this->pos_x, this->pos_y - 60, this->bodyWight, this->bodyHeight );


    this->m_snakeBody.push_back(body);
    this->m_snakeBody.push_back(body2);
    this->m_snakeBody.push_back(body3);
    this->m_snakeBody.push_back(body4);
    this->m_snakeBody.push_back(body5);
}