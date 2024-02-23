#ifndef ASTEROIDS_RANDOM_HPP
#define ASTEROIDS_RANDOM_HPP

#include <random>

class Random {
public:
    static int Range(int min, int max);
    static float Range(float min, float max);
private:
    static std::mt19937& GetGenerator();
};


#endif //ASTEROIDS_RANDOM_HPP
