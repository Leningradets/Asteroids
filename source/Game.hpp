#ifndef ASTEROIDS_GAME_HPP
#define ASTEROIDS_GAME_HPP

#include <Graphics/RenderWindow.hpp>
#include "Controller/Controller.hpp"
#include "Model/Model.hpp"
#include "View/View.hpp"

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


#endif //ASTEROIDS_GAME_HPP
