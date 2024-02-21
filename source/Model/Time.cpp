#include "Time.hpp"

float Time::timeScale = 1;
float Time::deltaTime;
float Time::realDeltaTime;
sf::Clock* Time::clock = new sf::Clock();

void Time::Reset() {
    realDeltaTime = clock->restart().asSeconds();
    deltaTime = realDeltaTime * timeScale;
}
