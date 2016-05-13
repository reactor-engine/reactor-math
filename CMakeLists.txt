cmake_minimum_required(VERSION 3.0)
project(reactor_math)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -O3 -flto")

set(SOURCE_FILES
        lib/src/reactor/math/Arithmetic.cpp)

set(TEST_SOURCE_FILES
        test/unit/reactor/math/ArithmeticTest.cpp
        test/unit/reactor/math/main.cpp)

include_directories(
        ext/catch
        ../reactor-api-math/api/include
        ../reactor-api-type/api/include)

#add_executable(reactor_math ${SOURCE_FILES})
add_executable(reactor_math_test ${SOURCE_FILES} ${TEST_SOURCE_FILES})