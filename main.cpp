#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
using namespace std;


int main()
{
    sf::RenderWindow window(sf::VideoMode(1024, 800), "Ventana de prueba");
    
    sf::Texture t1;
    t1.loadFromFile("Skeleton/Sprite_Sheets/Skeleton_Walk.png");
    float escalarX = 5;
    float escalarY = 5;
    sf::IntRect srcRect(0, 0, 22.15, 33);
    sf::Sprite Skeleton(t1, srcRect);
    //Skeleton.setPosition(0, -150);
    Skeleton.setScale(escalarX, escalarY);
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::EventType::Closed) {
                window.close();
            }
        }
        window.draw(Skeleton);
        window.display();
    }

    return 0;
}