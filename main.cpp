#include "protagonista.h"



//string getFile(string nombreFile);

int main()
{
    sf::RenderWindow window(sf::VideoMode(512, 256), "Ventana de prueba");
    //hacer la entrada del texto para el nombre
    Protagonista player(100, 5, "suat", 0);
   
    /*
    vector <string> files;
    files.push_back("Sprites/PROTAGREY/Outline/120x80_PNGSheets/_Idle.png");
    files.push_back("");
    float escalarX = 2;
    float escalarY = 2;
    sf::IntRect srcRect(0, 0, 120.0f, 80.0f);
    vector <IntRect*> dimension;
    dimension.push_back(&srcRect);
    sf::Texture t;
    t.loadFromFile(files[0]);
    sf:Sprite caballero;
    
    caballero.setTexture(t);
    caballero.setTextureRect(*dimension[0]);
    sf::Clock;
    
    caballero.setScale(escalarX, escalarY);*/

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::EventType::Closed) {
                window.close();
            }
            if (sf::Keyboard::isKeyPressed(Keyboard::D)){
                
                //sf::IntRect derecho(120, 0, 120.0, 80.0);
                //caballero.setTextureRect(derecho);
                //caballero.move(5,0);
            }
            if (sf::Keyboard::isKeyPressed(Keyboard::A)) {

               /* sf::IntRect derecho(120, 0, 120.0, 80.0);
                caballero.setTextureRect(derecho);
                caballero.move(-5, 0);*/
            }

        }
            window.clear(Color::White);
           // window.draw(player.getSkin()->getSprite());
            window.display();
    }

    return 0;
}


