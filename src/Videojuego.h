#ifndef VIDEOJUEGO_H
#define VIDEOJUEGO_H

#include <iostream>
#include <string>
using namespace std;

class Videojuego {
private:
    string codigo;
    string nombre;
    string genero;
    int nivelDificultad;

public:
    Videojuego(string cod, string nom, string gen, int dif);
    void mostrar() const;
    string getCodigo() const { return codigo; }
    int getNivelDificultad() const { return nivelDificultad; }
};

#endif //VIDEOJUEGO_H
