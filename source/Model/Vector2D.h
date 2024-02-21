#ifndef ASTEROIDS_VECTOR2D_H
#define ASTEROIDS_VECTOR2D_H
struct Vector2D {
    float x, y;

    Vector2D();
    Vector2D(float _x, float _y);

    Vector2D operator+(const Vector2D& other) const;
    Vector2D operator-(const Vector2D& other) const;
    Vector2D operator*(const Vector2D& other) const;
    Vector2D operator/(const Vector2D& other) const;
    Vector2D operator*(float scalar) const;
    Vector2D operator/(float scalar) const;

    Vector2D& operator+=(const Vector2D& other);
    Vector2D& operator-=(const Vector2D& other);
    Vector2D& operator*=(const Vector2D& other);
    Vector2D& operator/=(const Vector2D& other);
    Vector2D& operator*=(float scalar);
    Vector2D& operator/=(float scalar);

    [[nodiscard]] float length() const;
    [[nodiscard]] float dot(const Vector2D& other) const;
    [[nodiscard]] Vector2D normalize() const;
};
#endif //ASTEROIDS_VECTOR2D_H
