#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>

class Object
{
public:
    virtual void Do() = 0;
    virtual void Draw(sf::RenderWindow& window) = 0;
};