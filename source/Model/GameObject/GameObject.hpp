#ifndef ASTEROIDS_GAMEOBJECT_HPP
#define ASTEROIDS_GAMEOBJECT_HPP

#include <vector>
#include "../Transform.hpp"
#include "../Component/Component.hpp"

class Component;
class GameObject {
public:
    GameObject();
    GameObject(Vector2D position, float rotation);
    GameObject(float x, float y, float rotation);
    virtual ~GameObject();
    static void UpdateGameObjects(float deltaTime);

    template<typename T>
    T* GetComponent() {
        for (Component* component : components) {
            T* typedComponent = dynamic_cast<T*>(component);
            if (typedComponent != nullptr) {
                return typedComponent;
            }
        }
        return nullptr; }

    void AddComponent(Component* component);
    void RemoveComponent(Component* component);
    virtual void Awake();
    virtual void Update(float deltaTime);
    static void DleteGameObjects();
    Transform* transform;
protected:
    static std::vector<GameObject*> gameObjects;
    std::vector<Component*> components;
};

#endif //ASTEROIDS_GAMEOBJECT_HPP
