cmake_minimum_required(VERSION 3.12)
project(mlpQuizApp)

set(CMAKE_CXX_STANDARD 17)

add_executable(mlpQuizApp main.cpp Pergunta.cpp Database.cpp Jogador.cpp)