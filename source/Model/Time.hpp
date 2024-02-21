#ifndef ASTEROIDS_TIME_HPP
#define ASTEROIDS_TIME_HPP


#include <System/Clock.hpp>

class Time {
public:
    static float timeScale;
    static float deltaTime;
    static float realDeltaTime;
    static void Reset();
private:
    static sf::Clock* clock;
};


#endif //ASTEROIDS_TIME_HPP
