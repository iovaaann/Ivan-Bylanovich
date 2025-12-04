cmake_minimum_required(VERSION 3.20)
project(ABP_Bilanovich LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

add_executable(menu main.cpp)

add_subdirectory(Lab_1)
add_subdirectory(Lab_2_1)
add_subdirectory(Lab_2_2)
add_subdirectory(Lab_3)
add_subdirectory(Lab_4)
add_subdirectory(Lab_5)
add_subdirectory(Lab_6)
add_subdirectory(Lab_7)

# and so on