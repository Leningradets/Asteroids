#ifndef ASTEROIDS_COMPONENT_HPP
#define ASTEROIDS_COMPONENT_HPP


#include "../GameObject/GameObject.hpp"

class GameObject;
class Component {
public:
    virtual void Start(){};
    virtual void Update(float deltaTime){};
    void SetGameObject(GameObject* gameObject);
protected:
    GameObject* gameObject;
};


#endif //ASTEROIDS_COMPONENT_HPP
