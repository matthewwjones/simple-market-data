#include <iostream>
#include <cmath>
#include "RandomGenerator.h"

RandomGenerator::RandomGenerator() {
    srand(static_cast<int>(time(nullptr)));
}

double RandomGenerator::randomDouble() {
    return rand() / static_cast<double>(RAND_MAX);
}