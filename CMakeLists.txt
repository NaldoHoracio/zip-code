# Set the minimum version of CMake required
cmake_minimum_required(VERSION 3.22.1)

# Set the project name
project(zip-code LANGUAGES CXX C)

# Diretórios de include
include_directories(include)

# Arquivos fonte
file(GLOB SOURCES "src/*.c")

# Adicionando o executável
add_executable(${PROJECT_NAME} ${SOURCES})




