#include <iostream>
using namespace std;

void mostrarMenu() {
    cout << "\n--- Battle Arena - Gestion de Torneo ---" << endl;
    cout << "1. Registrar Videojuego" << endl;
    cout << "2. Registrar Jugador" << endl;
    cout << "3. Inscribir Jugador en Videojuego" << endl;
    cout << "4. Mostrar Videojuegos de un Jugador" << endl;
    cout << "5. Calcular Promedio de Dificultad" << endl;
    cout << "6. Salir" << endl;
    cout << "Seleccione una opcion: ";
}

int main() {
    Torneo torneo;
    int opcion;

    do {
        mostrarMenu();
        cin >> opcion;
        cin.ignore(); // Evita problemas con getline

        switch (opcion) {
            case 1:
                torneo.registrarVideojuego();
            break;
            case 2:
                torneo.registrarJugador();
            break;
            case 3:
                torneo.inscribirJugadorEnVideojuego();
            break;
            case 4:
                torneo.mostrarVideojuegosDeJugador();
            break;
            case 5: {

            }
            case 6:
                cout << "Saliendo del sistema..." << endl;
            break;
            default:
                cout << "Opcion invalida. Intente de nuevo." << endl;
        }
    } while (opcion != 6);

    return 0;
}
