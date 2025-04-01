#include "Videojuego.h"

Videojuego::Videojuego(string cod, string nom, string gen, int dif)
    : codigo(cod), nombre(nom), genero(gen), nivelDificultad(dif) {}

void Videojuego::mostrar() const {
    cout << "Codigo: " << codigo << ", Nombre: " << nombre
         << ", Genero: " << genero << ", Dificultad: " << nivelDificultad << endl;
}
