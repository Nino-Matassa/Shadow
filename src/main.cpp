// https://www.sfml-dev.org/tutorials/2.5/start-linux.php - initial tutorial
// https://www.youtube.com/watch?v=XqJRm9uxKjo - How to setup video
#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>

#include "constant.h"
#include "client.h"
using namespace std;
using namespace shadow;


int main() {
    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!",sf::Style::Close | sf::Style::Resize);
    sf::CircleShape shape(100.f);
    {  // test code
    Client *pSunObject = new Client(Constant::sun);
    Client *pPlanetObject = new Client(Constant::planet);
    Client *pMoonObject = new Client(Constant::moon);
    Client *pAsteroidObject = new Client(Constant::asteroid);
    Client *pShipObject = new Client(Constant::ship);

    Mass *pSun = pSunObject->getMass();
    Mass *pPlanet = pPlanetObject->getMass();
    Mass *pMoon = pMoonObject->getMass();
    Mass *pAsteroid = pAsteroidObject->getMass();
    Mass *pShip = pShipObject->getMass();
    
    pSun->add(*pPlanet);
    pPlanet->add(*pMoon);
    pMoon->add(*pAsteroid);
    pAsteroid->add(*pShip);
    
    pSun->notify();
    // pPlanet->notify();
    }

    shape.setFillColor(sf::Color::Green);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            switch (event.type) {
                case sf::Event::Closed:
                    window.close();
                    cout << Constant::name << endl;
                    break;
                case sf::Event::Resized:
                    // printf("width = %i, height = %i + ", event.size.width,
                    // event.size.height);
                    break;
                case sf::Event::TextEntered:
                    if (event.text.unicode < 128) {
                        // printf("%c", event.text.unicode);
                        // std::cout << event.text.unicode;
                    }
                    break;
                case sf::Event::Count:
                    // printf("Count = %i", event.Count);
                    break;
                default:  // comment out to force compiler to list unhandled
                          // events...
                    break;
            }
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}
