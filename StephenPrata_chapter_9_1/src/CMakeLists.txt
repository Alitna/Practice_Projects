cmake_minimum_required(VERSION 4.0.2)

add_executable(S.P.chapter_9_1 main.cpp ${MY_INCLUDE_DIR}/golf.h golf.cpp)
target_include_directories(S.P.chapter_9_1 PUBLIC ${MY_INCLUDE_DIR})