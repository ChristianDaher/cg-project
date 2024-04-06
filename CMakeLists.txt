cmake_minimum_required(VERSION 3.10)
project(2d_game) # Change name of project

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(OpenGL_GL_PREFERENCE GLVND)

find_package(OpenGL REQUIRED)
find_package(glfw3 REQUIRED)

set(SOURCES
    src/main.cpp
    src/game/game.cpp
    src/sprite_renderer/sprite_renderer.cpp
    src/input/input.cpp
    src/texture/texture.cpp
    src/shader/shader.cpp
    src/resource_manager/resource_manager.cpp
    lib/glad/glad.c
)


include_directories(${CMAKE_SOURCE_DIR}/src)
include_directories(${CMAKE_SOURCE_DIR}/lib)

add_executable(${PROJECT_NAME} ${SOURCES})

target_link_libraries(${PROJECT_NAME} PRIVATE OpenGL::GL glfw)
