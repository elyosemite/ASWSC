cmake_minimum_required(VERSION 3.30)

project(ASWSC VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(lib)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} PUBLIC Foo)

target_include_directories(${PROJECT_NAME} PUBLIC
                      "${PROJECT_SOURCE_DIR}/include")