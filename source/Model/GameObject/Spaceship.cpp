#include <iostream>
#include "Spaceship.hpp"
#include "../Component/Graphics/DrawableRenderer.hpp"
#include "../Component/Move.hpp"
#include "../Component/Phisics/Rigidbody.hpp"

void Spaceship::Awake() {
    auto* shape = new sf::VertexArray(sf::LineStrip, 5);
    (*shape)[0] = sf::Vector2f(0, -30);
    (*shape)[1] = sf::Vector2f(20, 20);
    (*shape)[2] = sf::Vector2f(0, 10);
    (*shape)[3] = sf::Vector2f(-20, 20);
    (*shape)[4] = sf::Vector2f(0, -30);
    this->AddComponent(new DrawableRenderer(shape));
    this->AddComponent(new Move(100,3));
    this->AddComponent(new Rigidbody(1, 0.05));
    GameObject::Awake();
}
