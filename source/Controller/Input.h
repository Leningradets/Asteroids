#ifndef ASTEROIDS_INPUT_H
#define ASTEROIDS_INPUT_H
#include <SFML/Graphics.hpp>

class Input {
public:
    static void Update(sf::RenderWindow& window);
    static int VerticalAxis;
    static int HorizontalAxis;
};


#endif //ASTEROIDS_INPUT_H
