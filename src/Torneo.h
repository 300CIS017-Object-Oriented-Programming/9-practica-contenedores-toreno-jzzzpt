#ifndef TORNEO_H
#define TORNEO_H

#include "Jugador.h"
#include <map>

class Torneo {
private:
    map<string, Videojuego*> videojuegosDisponibles;
    map<string, Jugador*> jugadoresRegistrados;

public:
    void registrarVideojuego();
    void registrarJugador();
    void inscribirJugadorEnVideojuego();
    void mostrarVideojuegosDeJugador() const;
    ~Torneo();
};

#endif //TORNEO_H
