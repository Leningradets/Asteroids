#include <iostream>
#include "Controller.hpp"

Controller::Controller(sf::RenderWindow &window) : window(window){
    std::cout << "Controller Created" << std::endl;
}

void Controller::Update() {
    Input::Update(window);
}
