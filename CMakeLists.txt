cmake_minimum_required(VERSION 3.17)
project(VideoPokerTraining)

set(CMAKE_CXX_STANDARD 17)

set(wxWidgets_ROOT_DIR /usr/include/wx-3.1-unofficial3)
set(wxWidgets_CONFIGURATION mswu)
find_package(wxWidgets COMPONENTS core base REQUIRED)
include(${wxWidgets_USE_FILE})

add_executable(VideoPokerTraining src/main.cpp src/graphics.cpp include/graphics.hpp
        include/enumeration.hpp src/card.cpp include/card.hpp src/deck.cpp include/deck.hpp
        src/game.cpp include/game.hpp src/MainWindow.cpp include/MainWindow.hpp)

target_link_libraries(VideoPokerTraining ${wxWidgets_LIBRARIES})