cmake_minimum_required(VERSION 3.17)
project(VideoPokerTraining)

set(CMAKE_CXX_STANDARD 17)

add_executable(VideoPokerTraining main.cpp graphics.cpp graphics.hpp enumeration.hpp card.cpp card.hpp)