#include <cmath>
#include "Transform.hpp"

Transform::Transform() : position(0,0), rotation(0){}

Transform::Transform(const Vector2D &position, float rotation) : position(position), rotation(rotation) {}

Transform::Transform(float x, float y, float rotation) : position(x,y), rotation(rotation){}

Vector2D Transform::GetUp() const {
    return {-std::sin(rotation), std::cos(rotation)};
}
