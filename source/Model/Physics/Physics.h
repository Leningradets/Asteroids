#ifndef ASTEROIDS_PHYSICS_H
#define ASTEROIDS_PHYSICS_H


#include <vector>
#include "../Component/Phisics/Rigidbody.h"

class Physics {
public:
    void Update(float deltaTimne);
    static void AddRigidbody(Rigidbody *rigidbody);
    static void RemoveRigidbody(Rigidbody *rigidbody);
private:
    static std::vector<Rigidbody*> rigidbodies;
};


#endif //ASTEROIDS_PHYSICS_H
