cmake_minimum_required(VERSION 3.30)
project(BattleArena)

set(CMAKE_CXX_STANDARD 20)

add_executable(BattleArena
        src/main.cpp
        src/Videojuego.cpp
        src/Jugador.cpp
        src/Torneo.cpp
)

