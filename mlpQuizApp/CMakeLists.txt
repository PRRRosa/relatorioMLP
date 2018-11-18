cmake_minimum_required(VERSION 3.10)
project(mlpQuizApp)
set(CMAKE_CXX_COMPILER "/usr/bin/clang++")
set(CMAKE_CXX_STANDARD 17)
SET(GCC_COVERAGE_COMPILE_FLAGS "-Xpreprocessor -fopenmp -lpthread")
SET(GCC_COVERAGE_LINK_FLAGS    "-Xpreprocessor -fopenmp -lpthread")

add_executable(mlpQuizApp main.cpp Database.cpp Player.cpp Question.cpp Database.h Player.h SignUpManager.cpp SignUpManager.h Person.cpp Person.h)

