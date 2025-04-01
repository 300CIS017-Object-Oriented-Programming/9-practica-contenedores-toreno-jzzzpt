#include "Jugador.h"
#include <iostream>
using namespace std;

Jugador::Jugador(string nick, int ranking) : nickname(nick), nivelRanking(ranking) {}

void Jugador::mostrar() const {
    cout << "Nickname: " << nickname << ", Nivel Ranking: " << nivelRanking << endl;
}

void Jugador::inscribirEnVideojuego(Videojuego* videojuego) {
    for (Videojuego* v : videojuegosInscritos) {
        if (v->getCodigo() == videojuego->getCodigo()) {
            cout << "El jugador ya está inscrito en este videojuego." << endl;
            return;
        }
    }
    videojuegosInscritos.push_back(videojuego);
    cout << "Inscripcion exitosa!" << endl;
}

void Jugador::mostrarVideojuegosInscritos() const {
    cout << "Videojuegos de " << nickname << ":" << endl;
    for (Videojuego* v : videojuegosInscritos) {
        v->mostrar();
    }
}

double Jugador::calcularPromedioDificultad() const {
    if (videojuegosInscritos.empty()) return 0.0;
    int suma = 0;
    for (Videojuego* v : videojuegosInscritos) {
        suma += v->getNivelDificultad();
    }
    return static_cast<double>(suma) / videojuegosInscritos.size();
}

