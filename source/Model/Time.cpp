#include "Time.hpp"

float Time::timeScale = 1;
float Time::deltaTime;
float Time::realDeltaTime;
float Time::value;

sf::Clock* Time::frameClock = new sf::Clock();
sf::Clock* Time::gameClock = new sf::Clock();



void Time::Start() {
    frameClock->restart().asSeconds();
    gameClock->restart();
}

void Time::Reset() {
    realDeltaTime = frameClock->restart().asSeconds();
    deltaTime = realDeltaTime * timeScale;
    value += deltaTime;
}

float Time::GetTime() {
    return gameClock->getElapsedTime().asSeconds();
}
