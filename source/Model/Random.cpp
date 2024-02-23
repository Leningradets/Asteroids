//
// Created by vladi on 23.02.2024.
//

#include "Random.hpp"

int Random::Range(int min, int max) {
    std::uniform_int_distribution<int> dist(min, max);
    return dist(GetGenerator());
}

float Random::Range(float min, float max) {
    std::uniform_real_distribution<float> dist(min, max);
    return dist(GetGenerator());
}

std::mt19937 &Random::GetGenerator() {
    static std::random_device rd;
    static std::mt19937 gen(rd());
    return gen;
}
