#ifndef ASTEROIDS_ASTEROID_HPP
#define ASTEROIDS_ASTEROID_HPP

#include "GameObject.hpp"

class Asteroid : public GameObject{
public:
    Asteroid() : Asteroid(sf::Vector2f(), 0){}
    Asteroid(sf::Vector2f position, float rotation): GameObject(position, rotation){Awake();}
    void Awake() override;
    void Start() override;
};


#endif //ASTEROIDS_ASTEROID_HPP
