#ifndef mdsim_MarketDataSimulator_h
#define mdsim_MarketDataSimulator_h

#include "RandomGenerator.h"

class MarketDataSimulator {

public:
    MarketDataSimulator(long sleepTime, double startPrice);

    [[noreturn]] void run();

    long sleepTime;
    double startPrice;
    double currentPrice;
    RandomGenerator randomGenerator;
};

#endif