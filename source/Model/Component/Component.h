#ifndef ASTEROIDS_COMPONENT_H
#define ASTEROIDS_COMPONENT_H


#include "../GameObject/GameObject.h"

class GameObject;
class Component {
public:
    virtual void Start(){};
    virtual void Update(float deltaTime){};
    void SetGameObject(GameObject* gameObject);
protected:
    GameObject* gameObject;
};


#endif //ASTEROIDS_COMPONENT_H
