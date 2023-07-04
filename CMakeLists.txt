cmake_minimum_required(VERSION 3.20)
project(ortOS)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(ortOS src/main.cpp src/core/core.cpp src/ui/ui.cpp ./src/programs/BigNumberProgram.cpp ./src/programs/HelloWorldProgram.cpp  ./src/programs/MiniProgramController.cpp ./src/programs/MiniProgramController.hpp ./src/programs/MiniProgram.hpp) 
