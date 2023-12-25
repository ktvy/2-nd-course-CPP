#include "Rat.hpp"

Rat::Rat(sf::RenderWindow& window)
{
    if (!ratTexture.loadFromFile("Rat.png")) {
        std::cerr << "Failed to load rat.png" << std::endl;
    }
    ratSprite.setTexture(ratTexture);

    // Устанавливаем начальную позицию крысы в правый нижний угол окна
    ratX = window.getSize().x - ratSprite.getGlobalBounds().width;
    ratY = window.getSize().y - ratSprite.getGlobalBounds().height;
    ratSprite.setPosition(ratX, ratY);
}

void Rat::Do()
{
    std::cout << "I am Rat!" << std::endl;
    ratX -= 1.0f;
    ratSprite.setPosition(ratX, 400);
}

void Rat::Draw(sf::RenderWindow& window)
{
    // Draw the rat sprite at the bottom right of the window
    // ratSprite.setPosition(window.getSize().x - ratSprite.getGlobalBounds().width, window.getSize().y - ratSprite.getGlobalBounds().height);
    window.draw(ratSprite);
}