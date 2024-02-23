#include <iostream>
#include "View.hpp"
#include "Graphics/Screen.hpp"
#include "../Model/Time.hpp"

View::View(sf::RenderWindow &window) : window(window) {
    Screen::size = window.getSize();
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

