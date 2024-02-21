#ifndef ASTEROIDS_MODEL_H
#define ASTEROIDS_MODEL_H

#include "Physics/Physics.h"

class Model{
public:
    Model();
    void Update(float deltaTime);
    virtual ~Model();
private:
    Physics* physics;
};


#endif //ASTEROIDS_MODEL_H
