#ifndef ASTEROIDS_TIME_HPP
#define ASTEROIDS_TIME_HPP


#include <System/Clock.hpp>

class Time {
public:
    static float timeScale;
    static float deltaTime;
    static float realDeltaTime;
    static void Start();
    static void Reset();
    static float GetTime();
    static float value;
private:
    static sf::Clock* frameClock;
    static sf::Clock* gameClock;
};


#endif //ASTEROIDS_TIME_HPP
