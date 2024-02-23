#ifndef ASTEROIDS_SPACESHIP_HPP
#define ASTEROIDS_SPACESHIP_HPP


#include "GameObject.hpp"

class Spaceship : public GameObject{
public:
    Spaceship() : Spaceship(sf::Vector2f(), 0){};
    Spaceship(sf::Vector2f position, float rotation) : GameObject(position, rotation){Awake();};
    void Awake() override;
};


#endif //ASTEROIDS_SPACESHIP_HPP
