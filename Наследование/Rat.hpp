#pragma once
#include "Creature.hpp"

class Rat : public Creature
{
public:
    Rat(sf::RenderWindow& window);
    void virtual Do() override;
    void virtual Draw(sf::RenderWindow& window) override;
private:
    sf::Texture ratTexture;
    sf::Sprite ratSprite;
    float ratX;
    float ratY;
};