#ifndef ASTEROIDS_SPACESHIP_H
#define ASTEROIDS_SPACESHIP_H


#include "GameObject.h"

class Spaceship : public GameObject{
public:
    Spaceship() : Spaceship(Vector2D(), 0){};
    Spaceship(Vector2D position, float rotation) : GameObject(position, rotation){};
    void Awake() override;
};


#endif //ASTEROIDS_SPACESHIP_H
