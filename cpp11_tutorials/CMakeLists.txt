cmake_minimum_required(VERSION 3.0.2)
project(cpp11_tutorials)

## Compile as C++11, supported in ROS Kinetic and newer
# add_compile_options(-std=c++11)

## Find catkin macros and libraries
## if COMPONENTS list like find_package(catkin REQUIRED COMPONENTS xyz)
## is used, also find other catkin packages
find_package(catkin REQUIRED COMPONENTS
  roscpp
)

include_directories(
# include
  ${catkin_INCLUDE_DIRS}
)

add_executable(delete_tutorial src/delete_tutorial.cpp)
add_executable(bind_tutorial src/bind_tutorial.cpp)
add_executable(auto_tutorial src/auto_tutorial.cpp)
add_executable(variadic_template_tutorial src/variadic_template_tutorial.cpp)
add_executable(shared_pointer_tutorial src/shared_pointer_tutorial.cpp)
add_executable(shared_pointer_and_custom_deletor_tutorial src/shared_pointer_and_custom_deletor_tutorial.cpp)
add_executable(tuple_tutorial src/tuple_tutorial.cpp)
add_executable(make_tuple_tutorial src/make_tuple_tutorial.cpp)
add_executable(lambda_tutorial src/lambda_tutorial.cpp)
add_executable(capture_local_variable_tutorial src/capture_local_variable_tutorial.cpp)
add_executable(capture_member_variable_tutorial src/capture_member_variable_tutorial.cpp)
add_executable(funtion_pointers_tutorial src/function_pointers_tutorial.cpp)
add_executable(funtion_object_functors_tutorial src/function_object_functors_tutorial.cpp)
add_executable(unordered_map_usage_tutorial src/unordered_map_usage_tutorial.cpp)
add_executable(intialize_and_searching_unordered_map_tutorial src/intialize_and_searching_unordered_map_tutorial.cpp)
add_executable(inserting_and_erasing_tutorial src/inserting_and_erasing_unordered_map.cpp)
add_executable(multithreading_tutorial src/multithreading_tutorial.cpp)

