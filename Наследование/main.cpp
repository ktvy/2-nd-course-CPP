#include "Bird.hpp"
#include "Rat.hpp"
#include "Tree.hpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Objects");

    std::vector<Object*> objects;
    Tree* tree = new Tree();
    Rat* rat = new Rat(window);
    Bird* bird = new Bird();
    objects.push_back(tree);
    objects.push_back(rat);
    objects.push_back(bird);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();

        for (int i = 0; i < objects.size(); i++)
        {
            objects[i]->Do();
            objects[i]->Draw(window);
        }

        window.display();
    }

    for (int i = 0; i < objects.size(); i++)
    {
        delete objects[i];
    }

    return 0;
}