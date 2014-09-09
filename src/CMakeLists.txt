cmake_minimum_required(VERSION 2.8)
set(GTEST_ROOT $ENV{HOME}/usr/src/gtest-1.7.0)
include_directories(
	${GTEST_ROOT}/include
	${PROJECT_SOURCE_DIR}/include
	)
add_compile_options(-std=c++11 -Wall -Wextra -Weffc++ -Wcast-qual -Wfloat-equal)
add_executable(money_test money_test.cpp)
target_link_libraries(money_test
	${GTEST_ROOT}/build/libgtest.a
	${GTEST_ROOT}/build/libgtest_main.a
	)
