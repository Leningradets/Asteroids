#ifndef ASTEROIDS_CONTROLLER_HPP
#define ASTEROIDS_CONTROLLER_HPP


#include <Graphics/RenderWindow.hpp>
#include "Input.hpp"

class Controller {
public:
    explicit Controller(sf::RenderWindow &window);
    void Update();
private:
    sf::RenderWindow& window;
};


#endif //ASTEROIDS_CONTROLLER_HPP
