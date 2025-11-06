cmake_minimum_required(VERSION 3.16)
project(MyProject VERSION 1.0.0 LANGUAGES CXX)

add_executable(MyProgram)

target_sources(MyProgram
  PRIVATE
    src/main.cpp
    src/Vehicle.cpp
    src/Scooter.cpp
    src/Motorcycle.cpp
    src/Car.cpp
    src/Bus.cpp
    src/Factory.cpp
)