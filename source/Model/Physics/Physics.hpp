#ifndef ASTEROIDS_PHYSICS_HPP
#define ASTEROIDS_PHYSICS_HPP


#include <vector>
#include "../Component/Phisics/Rigidbody.hpp"

class Physics {
public:
    void Update(float deltaTimne);
    static void AddRigidbody(Rigidbody *rigidbody);
    static void RemoveRigidbody(Rigidbody *rigidbody);
private:
    static std::vector<Rigidbody*> rigidbodies;
};


#endif //ASTEROIDS_PHYSICS_HPP
