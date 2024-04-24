cmake_minimum_required(VERSION 3.0.0)
project(wordle-cpp VERSION 0.1.0 LANGUAGES C CXX)

set (CMAKE_CXX_STANDARD 11)

find_package(Curses REQUIRED)
include_directories(${CURSES_INCLUDE_DIR})

include(CTest)
enable_testing()

add_executable(wordle-cpp main.cpp renderer.cpp gameState.cpp)

target_link_libraries(wordle-cpp ${CURSES_LIBRARIES})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
