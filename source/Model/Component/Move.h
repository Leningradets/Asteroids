#ifndef ASTEROIDS_MOVE_H
#define ASTEROIDS_MOVE_H


#include "Component.h"

class Move : public Component{
public:
    Move(float speed, float torque);
    void Update(float deltaTime) override;
private:
    float force;
    float torque;
};


#endif //ASTEROIDS_MOVE_H
