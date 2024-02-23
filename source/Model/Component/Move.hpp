#ifndef ASTEROIDS_MOVE_HPP
#define ASTEROIDS_MOVE_HPP


#include "Component.hpp"
#include "Phisics/Rigidbody.hpp"

class Move : public Component{
public:
    Move(float speed, float torque);
    void Start() override;
    void Update(float deltaTime) override;
private:
    Rigidbody* rigidbody;
    float force;
    float torque;
};


#endif //ASTEROIDS_MOVE_HPP
