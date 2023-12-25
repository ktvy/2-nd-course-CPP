#include "Bird.hpp"

Bird::Bird()
{
    if (!birdTexture.loadFromFile("Bird.png")) {
        std::cerr << "Failed to load bird.png" << std::endl;
    }
    birdSprite.setTexture(birdTexture);
    birdX = 0.0f;
}

void Bird::Do()
{
    std::cout << "I am bird!" << std::endl;
    // Птица летит вправо
    birdX += 1.0f;
    birdSprite.setPosition(birdX, 0);
}

void Bird::Draw(sf::RenderWindow& window)
{
    // Отрисовываем спрайт птицы
    window.draw(birdSprite);
}