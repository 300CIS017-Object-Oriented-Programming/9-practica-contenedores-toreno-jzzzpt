// Jugador.h
#ifndef JUGADOR_H
#define JUGADOR_H

#include "Videojuego.h"
#include <vector>

class Jugador {
private:
    string nickname;
    int nivelRanking;
    vector<Videojuego*> videojuegosInscritos;

public:
    Jugador(string nick, int ranking);
    void mostrar() const;
    void inscribirEnVideojuego(Videojuego* videojuego);
    void mostrarVideojuegosInscritos() const;
    double calcularPromedioDificultad() const;
};

#endif // JUGADOR_H
