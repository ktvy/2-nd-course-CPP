#include "Tree.hpp"

Tree::Tree()
{
    if (!treeTexture.loadFromFile("Tree.png")) {
        std::cerr << "Failed to load tree.png" << std::endl;
    }
    treeSprite.setTexture(treeTexture);
}

void Tree::Do()
{
    std::cout << "I am tree!" << std::endl;
}

void Tree::Draw(sf::RenderWindow& window)
{
    // Draw the tree sprite at the top right of the window
    treeSprite.setPosition(350, 330);
    window.draw(treeSprite);
}