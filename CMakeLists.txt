cmake_minimum_required(VERSION 3.20.0)

set(CMAKE_TOOLCHAIN_FILE "/Volumes/dev/Architect-Github/vcpkg/scripts/buildsystems/vcpkg.cmake")

set(CMAKE_BUILD_TYPE Debug)

project(Modern_CPP LANGUAGES CXX)

add_executable(${PROJECT_NAME} main.cpp)

find_package(fmt CONFIG REQUIRED)
target_link_libraries(${PROJECT_NAME} PRIVATE fmt::fmt)