cmake_minimum_required(VERSION 4.0.2)

add_executable(SimulatorOperations main.cpp ${MY_INCLUDE_DIR}/simulatorOperations.h simulatorOperations.cpp)
target_include_directories(SimulatorOperations PUBLIC ${MY_INCLUDE_DIR})