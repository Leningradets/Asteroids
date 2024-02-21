#include "View/View.h"
#include "Controller/Controller.h"
#include "Model/Model.h"
#include "Game.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(800,600),"Asteroids");

    Game game(window);
    game.Run();

    return 0;
}