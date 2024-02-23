#ifndef ASTEROIDS_INPUT_HPP
#define ASTEROIDS_INPUT_HPP
#include <SFML/Graphics.hpp>

class Input {
public:
    static void Update(sf::RenderWindow& window);
    static float VerticalAxis;
    static float HorizontalAxis;
};


#endif //ASTEROIDS_INPUT_HPP
