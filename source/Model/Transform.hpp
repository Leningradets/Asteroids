#ifndef ASTEROIDS_TRANSFORM_HPP
#define ASTEROIDS_TRANSFORM_HPP

#include "Vector2D.hpp"

class Transform {
public:
    Transform();
    Transform(const Vector2D &position, float rotation);
    Transform(float x, float y, float rotation);
    Vector2D GetUp() const;
    Vector2D position;
    float rotation;
};


#endif //ASTEROIDS_TRANSFORM_HPP
