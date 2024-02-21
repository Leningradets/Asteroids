#ifndef ASTEROIDS_MOVE_HPP
#define ASTEROIDS_MOVE_HPP


#include "Component.hpp"

class Move : public Component{
public:
    Move(float speed, float torque);
    void Update(float deltaTime) override;
private:
    float force;
    float torque;
};


#endif //ASTEROIDS_MOVE_HPP
