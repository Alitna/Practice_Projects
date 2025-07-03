cmake_minimum_required(VERSION 4.0.2)

add_executable(ComputerSimulatorProject main.cpp 
                ${MY_INCLUDE_DIR}/disk.h disk.cpp
                ${MY_INCLUDE_DIR}/cpu.h cpu.cpp
                ${MY_INCLUDE_DIR}/ram.h ram.cpp
                ${MY_INCLUDE_DIR}/gpu.h gpu.cpp
                ${MY_INCLUDE_DIR}/kbd.h kbd.cpp)

target_include_directories(ComputerSimulatorProject PUBLIC ${MY_INCLUDE_DIR})