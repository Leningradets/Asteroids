#ifndef ASTEROIDS_GAME_H
#define ASTEROIDS_GAME_H

#include <Graphics/RenderWindow.hpp>
#include "Controller/Controller.h"
#include "Model/Model.h"
#include "View/View.h"

class Game {
public:
    explicit Game(sf::RenderWindow &window);
    void Initialize();

    virtual ~Game();

    void Run();

private:
    sf::RenderWindow& window;
    Controller* controller;
    Model* model;
    View* view;
};


#endif //ASTEROIDS_GAME_H
