cmake_minimum_required(VERSION 3.23)
project(RenderCraft)

set(CMAKE_CXX_STANDARD 17)

file(GLOB RENDERCRAFT_SRC src/render/* src/utility/*)
file(GLOB XMATH_CORE XMath/core/*)
file(GLOB XMATH_EXT XMath/ext/*)
add_executable(RenderCraft ${RENDERCRAFT_SRC} ${XMATH_CORE} ${XMATH_EXT} src/render/Transform.cpp src/render/Transform.h)
