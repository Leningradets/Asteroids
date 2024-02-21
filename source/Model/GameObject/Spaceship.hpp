#ifndef ASTEROIDS_SPACESHIP_HPP
#define ASTEROIDS_SPACESHIP_HPP


#include "GameObject.hpp"

class Spaceship : public GameObject{
public:
    Spaceship() : Spaceship(Vector2D(), 0){};
    Spaceship(Vector2D position, float rotation) : GameObject(position, rotation){};
    void Awake() override;
};


#endif //ASTEROIDS_SPACESHIP_HPP
