#include <iostream>
#include "View.hpp"

View::View(sf::RenderWindow &window) : window(window) {
    std::cout << "View Created" << std::endl;
}

void View::Update() {
    UpdateGraphics();
    UpdateAudio();
}

void View::UpdateGraphics() {
    window.clear();
    Graphics::Update(window);
    window.display();
}

void View::UpdateAudio() {

}

View::~View() {

}

