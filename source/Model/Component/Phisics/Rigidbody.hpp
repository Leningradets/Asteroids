#ifndef ASTEROIDS_RIGIDBODY_HPP
#define ASTEROIDS_RIGIDBODY_HPP


#include "../../Transform.hpp"
#include "../Component.hpp"
#include "ForceType.hpp"
#include <System/Vector2.hpp>

class Rigidbody : public Component{
public:
    Rigidbody(float mass);
    Rigidbody(float mass, float drag);
    ~Rigidbody();
    void PhysicsUpdate(float deltaTime);
    void AddForce(sf::Vector2f force, ForceType type = ForceType::Impulse);
    void AddTorque(float torque, ForceType type = ForceType::Impulse);
private:
    float mass = 1;
    float drag = 0;
    sf::Vector2f velocity = sf::Vector2f();
    float angularVelocity = 0;
};

#endif //ASTEROIDS_RIGIDBODY_HPP
