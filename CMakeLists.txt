cmake_minimum_required(VERSION 2.6)
project(composerdatabase)

add_executable(composerdatabase main.cpp)

install(TARGETS composerdatabase RUNTIME DESTINATION bin)
