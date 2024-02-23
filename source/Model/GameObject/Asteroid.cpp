#include <Graphics/VertexArray.hpp>
#include "Asteroid.hpp"
#include "../Component/Phisics/Rigidbody.hpp"
#include "../Component/Graphics/DrawableRenderer.hpp"
#include "../Random.hpp"
#include "../../View/Graphics/Screen.hpp"

void Asteroid::Awake() {
    auto* shape = new sf::VertexArray(sf::LineStrip, 15);
    (*shape)[0] = sf::Vector2f(-10, -30);
    (*shape)[1] = sf::Vector2f(0, -40);
    (*shape)[2] = sf::Vector2f(20, -40);
    (*shape)[3] = sf::Vector2f(30, -10);
    (*shape)[4] = sf::Vector2f(40, -20);
    (*shape)[5] = sf::Vector2f(50, 0);
    (*shape)[6] = sf::Vector2f(40, 30);
    (*shape)[7] = sf::Vector2f(30, 20);
    (*shape)[8] = sf::Vector2f(30, 40);
    (*shape)[9] = sf::Vector2f(-10, 50);
    (*shape)[10] = sf::Vector2f(-20, 30);
    (*shape)[11] = sf::Vector2f(-30, 30);
    (*shape)[12] = sf::Vector2f(-40, -10);
    (*shape)[13] = sf::Vector2f(-30, -30);
    (*shape)[14] = sf::Vector2f(-10, -30);
    AddComponent(new DrawableRenderer(shape));
    AddComponent(new Rigidbody(1));
    GameObject::Awake();
}

void Asteroid::Start() {
    transform->position = sf::Vector2f (Random::Range(0.0f, Screen::size.x), Random::Range(0.0f, Screen::size.y));
    auto* rigidbody =  GetComponent<Rigidbody>();
    rigidbody->AddForce(sf::Vector2f(Random::Range(-30.0f,30.0f),Random::Range(-30.0f,30.0f)));
    rigidbody->AddTorque(Random::Range(-3.0f,3.0f));
    GameObject::Start();
}
