cmake_minimum_required(VERSION 3.23)
project(Recursive_Circles)

set(CMAKE_CXX_STANDARD 14)

add_executable(Recursive_Circles main.cpp)

#INSTEAD OF sfml_test USE THE PROJECT NAME EVERYWHERE
set(SFML_STATIC_LIBRARIES TRUE)
set(SFML_DIR C:/Users/Iris/Downloads/SFML-2.5.1-windows-gcc-7.3.0-mingw-64-bit/SFML-2.5.1/lib/cmake/SFML)
find_package(SFML COMPONENTS system window graphics audio network REQUIRED)

include_directories(C:/Users/Iris/Downloads/SFML-2.5.1-windows-gcc-7.3.0-mingw-64-bit/SFML-2.5.1/include)
target_link_libraries(Recursive_Circles sfml-system sfml-window sfml-graphics sfml-audio)
