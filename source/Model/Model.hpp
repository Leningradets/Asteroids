#ifndef ASTEROIDS_MODEL_HPP
#define ASTEROIDS_MODEL_HPP

#include "Physics/Physics.hpp"

class Model{
public:
    Model();
    void Update(float deltaTime);
    virtual ~Model();

    void Start();

private:
    Physics* physics;
};


#endif //ASTEROIDS_MODEL_HPP
