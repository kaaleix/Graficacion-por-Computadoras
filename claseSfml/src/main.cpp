#include <SFML/Graphics.hpp>
#include <iostream>
#include <chrono>
#include <thread>
#include <vector>
#include "Vector2.h"

int main()
{
    
    sf::RenderWindow window(sf::VideoMode({1000, 1000}), "My window");

    std::vector<sf::RectangleShape*> lines;

    std::vector<sf::RectangleShape*> linea;

    /*
    Vector2 p0{200.f,300.f};
    Vector2 p1{350.f,400.f};
    Vector2 p2{50.f,400.f};
    Vector2 p4{200.f,100.f};
    */
   for (int i =0; i<200; i++)
   {
    sf::RectangleShape* punto = new sf::RectangleShape({1.f,1.f});
    punto->setPosition({(float)(i+1),20.f});
    linea.push_back(punto);
   }

   sf::RectangleShape rec{{1.f,1.f}};

   rec.setPosition({20.f,20.f});

   rec.setFillColor(sf::Color::Red);

    sf::RectangleShape rec2{{1.f,1.f}};

   rec2.setPosition({70.f,20.f});

   //sf::CircleShape circ{50.f};

   //circ.setPosition({20.f,20.f});

    // run the program as long as the window is open
    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        while (const std::optional event = window.pollEvent())
        {
            // "close requested" event: we close the window
            if (event->is<sf::Event::Closed>())
                window.close();
        }

        // clear the window with black color
        window.clear(sf::Color::Black);

        // draw everything here...
        //window.draw(circ);
        for (sf::RectangleShape* punto : linea)
        {
            window.draw(*punto);
        }
       // window.draw(rec);
       // window.draw(rec2);

        //rec.setPosition({90.f,90.f});

        // end the current frame
        window.display();
    }
}