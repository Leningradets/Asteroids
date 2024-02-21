#include <iostream>
#include "Game.h"
#include "Model/GameObject/Spaceship.h"
#include "Model/Time.h"

Game::Game(sf::RenderWindow &window) : window(window) {
    std::cout << "Game created" << std::endl;
    Initialize();
}

void Game::Initialize() {
    controller = new Controller(window);
    model = new Model();
    view = new View(window);
    Spaceship* spaceship = new Spaceship();
    spaceship->Awake();
    std::cout << "Game Initialized" << std::endl;
}

void Game::Run() {
    std::cout << "Run Game!" << std::endl;

    Time::Reset();
    while (window.isOpen())
    {
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

