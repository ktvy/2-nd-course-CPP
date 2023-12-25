#pragma once
#include "Creature.hpp"


class Bird : public Creature
{
public:
    Bird();
    virtual void Do() override;
    virtual void Draw(sf::RenderWindow& window) override;
private:
    sf::Texture birdTexture;
    sf::Sprite birdSprite;
    float birdX;  // Переменная для хранения позиции птицы
};