cmake_minimum_required(VERSION 3.12)
project(mlpQuizApp)

set(CMAKE_CXX_STANDARD 17)

add_executable(mlpQuizApp main.cpp Database.cpp Player.cpp Question.cpp Database.h Player.h Person.cpp Person.h)