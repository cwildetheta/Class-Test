cmake_minimum_required(VERSION 3.22.3)

project(ObjectPractice VERSION 1.0.0)

include_directories(include)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_LIST_DIR}")

add_executable(${PROJECT_NAME} src/car.cpp src/main.cpp)