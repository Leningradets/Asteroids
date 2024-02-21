#include <iostream>
#include "Spaceship.h"
#include "../Component/Graphics/DrawableRenderer.h"
#include "../Component/Move.h"
#include "../Component/Phisics/Rigidbody.h"

void Spaceship::Awake() {
    auto* shape = new sf::VertexArray(sf::LineStrip, 5);
    (*shape)[0] = sf::Vector2f(0, -30);
    (*shape)[1] = sf::Vector2f(20, 20);
    (*shape)[2] = sf::Vector2f(0, 10);
    (*shape)[3] = sf::Vector2f(-20, 20);
    (*shape)[4] = sf::Vector2f(0, -30);
    this->AddComponent(new DrawableRenderer(shape));
    this->AddComponent(new Move(10,0.1));
    this->AddComponent(new Rigidbody(10000));
    transform->position = Vector2D(400,300);
    GameObject::Awake();
}
