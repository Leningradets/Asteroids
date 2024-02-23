#include "Rigidbody.hpp"
#include "../../Time.hpp"
#include "../../Physics/Physics.hpp"



Rigidbody::Rigidbody(float mass) : Rigidbody(mass, 0){}

Rigidbody::Rigidbody(float mass, float drag) : Component(), mass(mass), drag(drag){
    Physics::AddRigidbody(this);
}


void Rigidbody::PhysicsUpdate(float deltaTime) {
    if(gameObject){
        gameObject->transform->position += velocity * deltaTime;
        gameObject->transform->rotation += angularVelocity * deltaTime;
    }
    velocity *= 1 - (drag * deltaTime);
    angularVelocity *= 1 - (drag * deltaTime);
}

void Rigidbody::AddForce(sf::Vector2f force, ForceType type) {
    sf::Vector2f appliedForce;

    switch (type) {
        case ForceType::Force:
            appliedForce = (force / mass) * Time::deltaTime;
            break;
        case ForceType::Acceleration:
            appliedForce = force * Time::deltaTime;
            break;
        case ForceType::Impulse:
            appliedForce = force / mass;
            break;
        case ForceType::VelocityChange:
            appliedForce = force;
            break;
    }

    velocity += appliedForce;
}

void Rigidbody::AddTorque(float torque, ForceType type) {
    float appliedTorque;

    switch (type) {
        case ForceType::Force:
            appliedTorque = (torque / mass) * Time::deltaTime;
            break;
        case ForceType::Acceleration:
            appliedTorque = torque * Time::deltaTime;
            break;
        case ForceType::Impulse:
            appliedTorque = torque / mass;
            break;
        case ForceType::VelocityChange:
            appliedTorque = torque;
            break;
    }

    angularVelocity += appliedTorque;
}

Rigidbody::~Rigidbody() {
    Physics::RemoveRigidbody(this);
}

