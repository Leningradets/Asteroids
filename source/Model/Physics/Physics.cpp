#include <algorithm>
#include "Physics.hpp"

std::vector<Rigidbody*> Physics::rigidbodies;

void Physics::Update(float deltaTime) {
    for (auto* rigidbody: rigidbodies) {
        rigidbody->PhysicsUpdate(deltaTime);
    }
}

void Physics::AddRigidbody(Rigidbody* rigidbody) {
    rigidbodies.push_back(rigidbody);
}

void Physics::RemoveRigidbody(Rigidbody *rigidbody) {
    auto it = std::find(rigidbodies.begin(), rigidbodies.end(), rigidbody);
    if (it != rigidbodies.end()) {
        rigidbodies.erase(it);
    }
}
