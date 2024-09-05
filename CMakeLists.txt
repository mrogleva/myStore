cmake_minimum_required(VERSION 3.16)

project(
  myStore
  VERSION 0.1
  LANGUAGES CXX)

add_library(user store/src/user.cpp store/src/customer.cpp store/src/supplier.cpp)
add_library(pattern patterns/factory/userfactory.cpp)

add_executable(main store/main.cpp)

target_include_directories(main PUBLIC store/inc)

target_link_libraries(pattern PUBLIC user)
target_link_libraries(main PUBLIC user pattern)