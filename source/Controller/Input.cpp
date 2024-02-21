#include "Input.hpp"

int Input::VerticalAxis;
int Input::HorizontalAxis;

void Input::Update(sf::RenderWindow& window) {
    sf::Event event;

    while (window.pollEvent(event)) {
        if (event.type == sf::Event::Closed)
            window.close();
    }

    VerticalAxis = 0;
    HorizontalAxis = 0;

    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Scancode::W)){
        VerticalAxis -= 1;
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Scancode::S)){
        VerticalAxis += 1;
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Scancode::A)){
        HorizontalAxis -= 1;
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Scancode::D)){
        HorizontalAxis += 1;
    }
}
