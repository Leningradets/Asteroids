#include <algorithm>
#include "GameObject.hpp"

std::vector<GameObject*> GameObject::gameObjects;

void GameObject::UpdateGameObjects(float deltaTime) {
    for (auto& gameObject: gameObjects) {
        gameObject->Update(deltaTime);
    }
}

void GameObject::Awake() {
    for (auto& component : components) {
        component->Start();
    }
}

void GameObject::Update(float deltaTime) {
    for (auto& component : components) {
        component->Update(deltaTime);
    }
}

GameObject::GameObject() : GameObject(Vector2D(), 0){}

GameObject::GameObject(Vector2D position, float rotation) {
    transform = new Transform(position, rotation);
    gameObjects.push_back(this);
}

GameObject::GameObject(float x, float y, float rotation) : GameObject(Vector2D(x,y),  0){}


GameObject::~GameObject() {
    for (auto& component : components) {
        delete(component);
    }
    delete transform;
}

void GameObject::AddComponent(Component* component) {
    component->SetGameObject(this);
    components.push_back(component);
}

void GameObject::RemoveComponent(Component* component) {
    auto it = std::find(components.begin(), components.end(), component);
    if (it != components.end()) {
        delete component;
        components.erase(it);
    }
}

void GameObject::DleteGameObjects() {
    for (auto *gameObject: gameObjects) {
        delete gameObject;
    }
}
