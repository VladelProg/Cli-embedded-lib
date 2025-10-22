cmake_minimum_required(VERSION 3.10)

project(cli_library LANGUAGES C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Создаём статическую библиотеку
file(GLOB CLI_SOURCES "src/*.c")
add_library(cli STATIC ${CLI_SOURCES} inc/cli.h)

# Пример сборки тестового приложения
add_executable(cli_example example/main.c)
target_link_libraries(cli_example cli)
