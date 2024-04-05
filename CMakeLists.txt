cmake_minimum_required(VERSION 3.10)
project(2d_game) # Change name of project

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

find_package(OpenGL REQUIRED)
find_package(glfw3 REQUIRED)

include_directories(${CMAKE_SOURCE_DIR}/src)

set(SOURCES
    src/main.cpp
    src/game.cpp
    src/renderer.cpp
    src/input.cpp
    src/glad.c
)

add_executable(${PROJECT_NAME} ${SOURCES})

target_link_libraries(${PROJECT_NAME} PRIVATE OpenGL::GL glfw)
