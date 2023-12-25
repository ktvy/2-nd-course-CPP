#pragma once
#include "Object.hpp"

class Creature : public Object
{
	
public:
	virtual void Do() = 0;
	virtual void Draw(sf::RenderWindow& window) = 0;
};