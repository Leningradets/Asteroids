#include "View/View.hpp"
#include "Controller/Controller.hpp"
#include "Model/Model.hpp"
#include "Game.hpp"

int main()
{
    sf::RenderWindow window{sf::VideoMode(800,600),"Asteroids"};

    Game game(window);
    game.Run();

    return 0;
}