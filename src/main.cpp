// https://www.sfml-dev.org/tutorials/2.5/start-linux.php - initial tutorial
// https://www.youtube.com/watch?v=XqJRm9uxKjo - How to setup video
#include <iostream>
#include <SFML/Graphics.hpp>
#include <string>
#include "constant.h"
#include "observer.h"
#include "observable.h"
#include "tether.h"
#include "satellite.h"

using namespace std;
// using namespace EliteShadow;

int main()
{
    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!", sf::Style::Close | sf::Style::Resize);
    sf::CircleShape shape(100.f);
    // sf::RectangleShape shape(sf::Vector2f(100.0f, 100.0f));
    { // test code
        string name = Constant::name;
        // Satellite *pSatellite = new Satellite();
        // pSatellite->getState();
        // delete pSatellite;
        
        // Satellite satellite;
        // satellite.getState();
        
        cout << name << endl;
    }
    
        
    shape.setFillColor(sf::Color::Green);
    
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            switch(event.type) {
                case sf::Event::Closed:
                    window.close();
                    cout << Constant::name;
                break;
                case sf::Event::Resized:
                    //printf("width = %i, height = %i + ", event.size.width, event.size.height);
                break;
                case sf::Event::TextEntered:
                    if(event.text.unicode < 128) {
                        //printf("%c", event.text.unicode);
                        //std::cout << event.text.unicode;
                    }
                break;
                case sf::Event::Count:
                    //printf("Count = %i", event.Count);
                break;
                default: // comment out to force compiler to list unhandled events...
                break;
            }
        }
        
        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}
