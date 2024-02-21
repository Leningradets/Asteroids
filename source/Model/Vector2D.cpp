#include <cmath>
#include "Vector2D.hpp"

Vector2D::Vector2D() : x(0.0f), y(0.0f) {}

Vector2D::Vector2D(float x, float y) : x(x), y(y) {}

Vector2D Vector2D::operator+(const Vector2D& other) const {
    return Vector2D(x + other.x, y + other.y);
}

Vector2D Vector2D::operator-(const Vector2D& other) const {
    return Vector2D(x - other.x, y - other.y);
}

Vector2D Vector2D::operator*(const Vector2D& other) const {
    return Vector2D(x * other.x, y * other.y);
}

Vector2D Vector2D::operator/(const Vector2D& other) const {
    return Vector2D(x / other.x, y / other.y);
}

Vector2D Vector2D::operator*(float scalar) const {
    return Vector2D(x * scalar, y * scalar);
}

Vector2D Vector2D::operator/(float scalar) const {
    return Vector2D(x / scalar, y / scalar);
}

Vector2D& Vector2D::operator+=(const Vector2D& other) {
    x += other.x;
    y += other.y;
    return *this;
}

Vector2D& Vector2D::operator-=(const Vector2D& other) {
    x -= other.x;
    y -= other.y;
    return *this;
}

Vector2D& Vector2D::operator*=(const Vector2D& other) {
    x *= other.x;
    y *= other.y;
    return *this;
}

Vector2D& Vector2D::operator/=(const Vector2D& other) {
    x /= other.x;
    y /= other.y;
    return *this;
}

Vector2D& Vector2D::operator*=(float scalar) {
    x *= scalar;
    y *= scalar;
    return *this;
}

Vector2D& Vector2D::operator/=(float scalar) {
    x /= scalar;
    y /= scalar;
    return *this;
}

float Vector2D::length() const {
    return std::sqrt(x * x + y * y);
}

float Vector2D::dot(const Vector2D& other) const {
    return x * other.x + y * other.y;
}

Vector2D Vector2D::normalize() const {
    float len = length();
    if (len != 0.0f)
        return *this / len;
    else
        return Vector2D(0.0f, 0.0f);
}