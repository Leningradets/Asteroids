#ifndef ASTEROIDS_RIGIDBODY_H
#define ASTEROIDS_RIGIDBODY_H


#include "../../Transform.h"
#include "../Component.h"
#include "ForceType.h"

class Rigidbody : public Component{
public:
    Rigidbody(float mass);
    ~Rigidbody();
    void PhysicsUpdate(float deltaTime);
    void AddForce(Vector2D force, ForceType type = ForceType::Impulse);
    void AddTorque(float torque, ForceType type = ForceType::Impulse);
private:
    float mass;
    Vector2D velocity;
    float angularVelocity;
};

#endif //ASTEROIDS_RIGIDBODY_H
