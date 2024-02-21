#ifndef ASTEROIDS_TRANSFORM_H
#define ASTEROIDS_TRANSFORM_H

#include "Vector2D.h"

class Transform {
public:
    Transform();
    Transform(const Vector2D &position, float rotation);
    Transform(float x, float y, float rotation);
    Vector2D GetUp() const;
    Vector2D position;
    float rotation;
};


#endif //ASTEROIDS_TRANSFORM_H
