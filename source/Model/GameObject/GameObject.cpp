#include <algorithm>
#include "GameObject.hpp"
#include "../../View/Graphics/Screen.hpp"

std::vector<GameObject*> GameObject::gameObjects;

void GameObject::StartGameObjects() {
    for (auto& gameObject: gameObjects) {
        gameObject->Start();
    }
}

void GameObject::UpdateGameObjects(float deltaTime) {
    for (auto& gameObject: gameObjects) {
        gameObject->Update(deltaTime);
    }
}

void GameObject::Awake() {
    for (auto& component : components) {
        component->Awake();
    }
}

void GameObject::Start() {
    for (auto& component : components) {
        component->Start();
    }
}

void GameObject::Update(float deltaTime) {
    if(transform->position.x < 0){
        transform->position.x = Screen::size.x + transform->position.x;
    }
    if(transform->position.x > Screen::size.x){
        transform->position.x = transform->position.x - Screen::size.x;
    }
    if(transform->position.y < 0){
        transform->position.y = Screen::size.y + transform->position.y;
    }
    if(transform->position.y > Screen::size.y){
        transform->position.y = transform->position.y - Screen::size.y;
    }

    for (auto& component : components) {
        component->Update(deltaTime);
    }
}

GameObject::GameObject() : GameObject(sf::Vector2f(), 0){}

GameObject::GameObject(sf::Vector2f position, float rotation) {
    transform = new Transform(position, rotation);
    gameObjects.push_back(this);
}

GameObject::GameObject(float x, float y, float rotation) : GameObject(sf::Vector2f(x,y),  0){}


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