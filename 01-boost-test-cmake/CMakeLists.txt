cmake_minimum_required(VERSION 2.8.4)
project(boost_test_cmake)

find_package(Boost 1.55 REQUIRED COMPONENTS unit_test_framework)
include_directories(src ${Boost_INCLUDE_DIR})

add_executable(main_exe src/main.cpp)

enable_testing()

# Un premier exécutable de test
add_executable(point_test_exe test/Point_Test.cpp)
target_link_libraries(point_test_exe ${Boost_LIBRARIES})
add_test(PointTest test_exe)

# Et un second
add_executable(line_test_exe test/Line_Test.cpp)
target_link_libraries(line_test_exe ${Boost_LIBRARIES})
add_test(LineTest line_test_exe)
