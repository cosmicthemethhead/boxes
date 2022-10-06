cmake_minimum_required(VERSION 3.23)
project("boxes")

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

file(GLOB_RECURSE "c" "src/*.c")
add_executable("${PROJECT_NAME}" "${c}")

target_include_directories("${PROJECT_NAME}" PRIVATE "src")
