#ifndef ASTEROIDS_CONTROLLER_H
#define ASTEROIDS_CONTROLLER_H


#include <Graphics/RenderWindow.hpp>
#include "Input.h"

class Controller {
public:
    explicit Controller(sf::RenderWindow &window);
    void Update();
private:
    sf::RenderWindow& window;
};


#endif //ASTEROIDS_CONTROLLER_H
