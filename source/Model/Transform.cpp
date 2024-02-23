#include <cmath>
#include "Transform.hpp"

Transform::Transform() : position(0,0), rotation(0){}

Transform::Transform(const sf::Vector2f &position, float rotation) : position(position), rotation(rotation) {}

Transform::Transform(float x, float y, float rotation) : position(x,y), rotation(rotation){}

sf::Vector2f Transform::GetUp() const {
    return {-std::sin(rotation), std::cos(rotation)};
}
