cmake_minimum_required(VERSION 3.31)
project(opengl)

set(CMAKE_CXX_STANDARD 20)

include_directories(Include)

file(GLOB_RECURSE SOURCES src/*.cpp)

add_executable(${PROJECT_NAME} ${SOURCES} external/glad.c)

target_include_directories(${PROJECT_NAME} PRIVATE external/Include)
target_link_directories(${PROJECT_NAME} PRIVATE external/Libs)
target_link_libraries(${PROJECT_NAME} PRIVATE glfw3 opengl32)




