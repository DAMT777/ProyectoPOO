#include <SFML/Graphics.hpp>
#include <iostream>
int main()
{
    sf::RenderWindow window(sf::VideoMode(1024, 800), "Ventana de prueba");
    sf::Font magical;
    if (!magical.loadFromFile("magical.otf"))
    {
        return EXIT_FAILURE;
    }
    sf::Text title("Hola, tengo que hacer un juego", magical, 30);
    title.setFillColor(sf::Color::White);
    title.setPosition(50, 50);
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear();
        window.draw(title);
        window.display();
    }

    return 0;
}