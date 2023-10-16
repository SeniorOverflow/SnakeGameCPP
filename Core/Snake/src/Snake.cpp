#include "Snake.h"



void Snake::AddToRender(SDL_Renderer * renderer)
{
    bool isHead = true;

    for(auto & body : this->m_snakeBody)
    {
        if(isHead)
        {
            SDL_SetRenderDrawColor(renderer, (Uint8) m_colorHead.RED, (Uint8) m_colorHead.GREEN, (Uint8) m_colorHead.BLUE, 255);
            isHead = false;
        }
        else
        {
            SDL_SetRenderDrawColor(renderer, (Uint8) m_colorBody.RED, (Uint8) m_colorBody.GREEN, (Uint8) m_colorBody.BLUE, 255);
        }
        SDL_RenderFillRect(renderer, &body->GetGameObjectRect());
    }
}
SDL_Rect & SnakeBody::GetGameObjectRect() {

    return this->body;
}

void SnakeBody::Move(int verticalDirection, int horizontalDirection) {

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
            auto [l_prevPosX, l_prevPosY] = body->getPos();
            prevPosX = l_prevPosX;
            prevPosY = l_prevPosY;
            body->Move(verticalDirection, horizontalDirection);
            isHead = false;
            continue;
        }
        else
        {
            auto [l_prevPosX, l_prevPosY] = body->getPos();
            body->setPos(prevPosX,prevPosY);
            prevPosX = l_prevPosX;
            prevPosY = l_prevPosY;

        }

    }
}


std::tuple<int, int> SnakeBody::getPos() const
{
    return std::tuple(this->body.x, this->body.y);
}


Snake::Snake() {
    AddSnakeBody();
}
std::vector<const SnakeBody*> Snake::GetSnakeBody()
{
    std::vector<const SnakeBody*> body;
    for(auto & snakebody : m_snakeBody)
    {
        body.push_back(snakebody);
    }
    return  body;
}

void Snake::AddHeal(int heal)
{
    m_snakeHeal += heal;
    std::cout<<"count\t" <<m_snakeHeal / 100<<" -  - -"<<m_snakeHeal << "health : \t "<<heal<<std::endl;
    std::cout<<m_snakeBody.size()<<std::endl;
    if(m_snakeHeal / 100  > m_snakeBody.size())
    {
        int countNeededBody =    m_snakeHeal / 100 - m_snakeBody.size();
        AddSnakeBody(countNeededBody);
        std::cout<<"Added"<<std::endl;
    }
}
void Snake::AddDamage(int damage)
{
    m_snakeHeal -= damage;
    if(m_snakeHeal / 100 < m_snakeBody.size())
    {
        size_t countRemoveBody = m_snakeBody.size() - m_snakeHeal / 100;
        RemoveBody(countRemoveBody);
    }
}


void Snake::AddSnakeBody(size_t count)
{

    for(size_t i = 0; i < count; ++i) {
        SnakeBody *body;
        if(m_lastBody == nullptr) {
            body = new SnakeBody(this->pos_x, this->pos_y, this->bodyWight, this->bodyHeight);
        }
        else
        {
            auto [posX, posY] = m_lastBody->getPos();
            body =  new SnakeBody(posX, posY, this->bodyWight, this->bodyHeight);
        }
            m_lastBody = body;
            this->m_snakeBody.push_back(body);
    }
}
void Snake::RemoveBody(size_t count)
{
    if(count <= m_snakeBody.size())
    {
        m_snakeBody.erase(m_snakeBody.end() - count , m_snakeBody.end());
        if(m_snakeBody.size() > 0)
        {
            m_lastBody = m_snakeBody[m_snakeBody.size() -1 ];
        }
        else
        {
            m_snakeState = SnakeState::Dead;
        }
    }
}

void Snake::TeleportToPos(int posX, int posY) {
    if(m_snakeBody.size() > 0 )
    {
        m_snakeBody[0]->setPos(posX, posY);
    }
}
