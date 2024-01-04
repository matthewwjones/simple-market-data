#include "MarketDataSimulator.h"

int main() {
    MarketDataSimulator mdsim = MarketDataSimulator(1000, 100.00);
    mdsim.run();
}