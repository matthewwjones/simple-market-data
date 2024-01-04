#include <iostream>
#include <unistd.h>
#include "RandomGenerator.h"
#include "MarketDataSimulator.h"

MarketDataSimulator::MarketDataSimulator(long sleepTime, double startPrice) {
    this->sleepTime = sleepTime;
    this->startPrice = startPrice;
    this->currentPrice = startPrice;
    this->randomGenerator = RandomGenerator();
}

[[noreturn]] void MarketDataSimulator::run() {
    double nextRandom;
    while (true) {
        nextRandom = randomGenerator.randomDouble();
        if (nextRandom > 0.5) {
            currentPrice = currentPrice * 1.01;
        } else {
            currentPrice = currentPrice * 0.99;
        }
        std::cout << currentPrice << std::endl;
        usleep(sleepTime * 1000);
    }
}