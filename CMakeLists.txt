cmake_minimum_required(VERSION 3.20)
project(blockbust)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Curses REQUIRED)

add_executable(blockbust
    src/main.cpp
    src/Renderer.cpp
    src/Board.cpp
    src/Game.cpp
    src/Piece.cpp
)

target_include_directories(blockbust PRIVATE headers ${CURSES_INCLUDE_DIR})
target_link_libraries(blockbust PRIVATE ${CURSES_LIBRARIES})