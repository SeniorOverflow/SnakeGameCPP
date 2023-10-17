#pragma once

#include "GameTypes.h"
#include "IGameObject.h"
#include "Trigger.h"
#include <SDL.h>
#include <string>
#include <tuple>

class Enemy {
public:
  virtual std::string getName() = 0;
  virtual SDL_Rect &GetGameObjectRect() = 0;
  virtual Color getColor() = 0;
  virtual void setPos(int posX, int posY) = 0;
  virtual std::tuple<int, int> getPos() = 0;
  virtual bool isTriggered(const Rect &rect) = 0;
  virtual bool CheckOnUse() = 0;
  virtual int GetDamage() = 0;

  virtual ~Enemy() {}
  static Enemy *getEnemy(EnemyType enemyType);
};

class Mine : public Enemy {
public:
  SDL_Rect &GetGameObjectRect() override;
  void setPos(int posX, int posY) override;
  std::tuple<int, int> getPos() override;
  std::string getName() override;
  Color getColor() override;

  bool isTriggered(const Rect &rect) override;
  bool CheckOnUse() override { return isUsed; };
  int GetDamage() override;

private:
  int m_damage{15};
  int m_width{20};
  int m_height{20};
  bool isUsed = false;
  Trigger *trigger;
  Color color{250, 150, 10};
  SDL_Rect body{0, 0, m_width, m_height};
};

class Human : public Enemy {

  SDL_Rect &GetGameObjectRect() override;
  void setPos(int posX, int posY) override;

  std::tuple<int, int> getPos() override;
  std::string getName() override;
  Color getColor() override;

  bool isTriggered(const Rect &rect) override;
  bool CheckOnUse() override { return isUsed; };
  int GetDamage() override;

private:
  int m_damage{20};
  int m_width{20};
  int m_height{20};
  bool isUsed = false;
  Trigger *trigger;
  Color color{250, 150, 10};
  SDL_Rect body{0, 0, m_width, m_height};
};
