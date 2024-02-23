#include <iostream>
#include <sstream>
#include "Game.hpp"
#include "Model/GameObject/Spaceship.hpp"
#include "Model/Time.hpp"
#include "Model/GameObject/Asteroid.hpp"

Game::Game(sf::RenderWindow &window) : window(window) {
    std::cout << "Game created" << std::endl;
    Initialize();
}

void Game::Initialize() {
    controller = new Controller(window);
    model = new Model();
    view = new View(window);
    auto* spaceship = new Spaceship(sf::Vector2f(400,300),0);
    for (int i = 0; i < 7; ++i) {
        new Asteroid();
    }
    std::cout << "Game Initialized" << std::endl;
}

void Game::Run() {
    std::cout << "Run Game!" << std::endl;

    model->Start();
    Time::Start();
    while (window.isOpen())
    {
        Time::Reset();
        float deltaTime = Time::deltaTime;
        controller->Update();
        model->Update(deltaTime);
        view->Update();
    }

    std::cout << "Game Closed!" << std::endl;
}

Game::~Game() {
    delete controller;
    delete model;
    delete view;
    std::cout << "Game deleted" << std::endl;
}

