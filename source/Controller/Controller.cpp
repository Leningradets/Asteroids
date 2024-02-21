#include <iostream>
#include "Controller.h"

Controller::Controller(sf::RenderWindow &window) : window(window){
    std::cout << "Controller Created" << std::endl;
}

void Controller::Update() {
    Input::Update(window);
}
