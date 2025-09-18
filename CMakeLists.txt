cmake_minimum_required(VERSION 3.10)

project(GameCharacters LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

set(SOURCES
    src/main.cpp
    src/battleArena.cpp
    src/gameCharacter.cpp
    src/physicalFighter.cpp
    src/magicalCaster.cpp
    src/warrior.cpp
    src/berserker.cpp
    src/wizard.cpp
    src/necromancer.cpp
    src/paladin.cpp
)

add_executable(game ${SOURCES})
