//
// Created by DonEn on 6/16/2022.
//
#include  "Trigger.h"

Trigger::Trigger(int posX, int posY, int wight, int height) {
    this->m_posX = posX;
    this->m_posY = posY;
    this->m_height = height;
    this->m_wight = wight;
}

bool RectIntoRect(Rect aRect, Rect bRect) {
    if (aRect.x + aRect.w >= bRect.x &&
        bRect.x + bRect.w >= aRect.x &&
        aRect.y + aRect.h >= bRect.y &&
        bRect.y + bRect.h >= aRect.y)
        return  true;
    return  false;
}

bool Trigger::isIntoTrigger(const Rect &rect) {
    Rect triggerRect(m_posX, m_posY, m_wight ,m_height);
    Rect otherRect(rect.x, rect.y, rect.w ,rect.h);
    return  RectIntoRect(triggerRect, otherRect);
}
