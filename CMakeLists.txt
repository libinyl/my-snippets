cmake_minimum_required(VERSION 2.8.12)
project(os_tests)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -O0")


add_subdirectory(include)
add_subdirectory(arpa)
add_subdirectory(sys)
add_subdirectory(libevent)
add_subdirectory(socket)

