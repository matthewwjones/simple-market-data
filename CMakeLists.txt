cmake_minimum_required(VERSION 3.27)
project(simple_market_data)

set(CMAKE_CXX_STANDARD 17)

add_executable(simple_market_data main.cpp
        MarketDataSimulator.cpp RandomGenerator.cpp)
