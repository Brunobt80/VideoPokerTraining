cmake_minimum_required(VERSION 3.17)
project(VideoPokerTraining)

set(CMAKE_CXX_STANDARD 17)

add_executable(VideoPokerTraining src/main.cpp src/graphics.cpp include/graphics.hpp include/enumeration.hpp src/card.cpp include/card.hpp src/deck.cpp include/deck.hpp)