#ifndef ASTEROIDS_TRANSFORM_HPP
#define ASTEROIDS_TRANSFORM_HPP

#include <System/Vector2.hpp>

class Transform {
public:
    Transform();
    Transform(const sf::Vector2f &position, float rotation);
    Transform(float x, float y, float rotation);
    sf::Vector2f GetUp() const;
    sf::Vector2f position;
    float rotation;
};


#endif //ASTEROIDS_TRANSFORM_HPP
