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
    sf::Text title("Hola, tengo que hacer un juego, HIJUEPUTA! (no hay tiempo)", magical, 30);
    title.setFillColor(sf::Color::White);
    title.setPosition(50, 50);
    sf::Sprite Skeleton;
    sf::Texture t1;
    t1.loadFromFile("Skeleton\Sprite_Sheets\Skeleton_Walk.png");
    Skeleton.setTexture(t1);
    Skeleton.setPosition(0, -150);
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear();
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
            Skeleton.setPosition(Skeleton.getPosition().x+5, Skeleton.getPosition().y);
        }
        window.draw(Skeleton);
        window.display();
    }

    return 0;
}