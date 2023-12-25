#pragma once 
#include "Object.hpp"

class Tree : public Object
{
public:
    Tree();
    virtual void Do() override;
    virtual void Draw(sf::RenderWindow& window) override;
private:
    sf::Texture treeTexture;
    sf::Sprite treeSprite;
};