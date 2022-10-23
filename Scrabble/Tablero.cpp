#include "Tablero.h"
#include "Tablero.h"

Tablero::Tablero() {

	for (int i = 0; i < 14; i++) {
		for (int j = 0; j < 10; j++) {
			matriz[i][j] = nullptr;
		}
	}

}

bool Tablero::EstaVacio() {

	for (int i = 0; i < 14; i++) {
		for (int j = 0; j < 10; j++) {
			if (matriz[i][j] != nullptr) {
				return false;
			}
		}
	}
	return true;

}

Tablero:: ~Tablero() {
	for (int i = 0; i < 14; i++) {
		for (int j = 0; j < 9; j++) {
			if (matriz[i][j] != nullptr) {
				delete matriz[i][j];
			}
		}
	}

	delete[] matriz;
}

void Tablero::IngresarFicha(int fila, int columna, Ficha* ficha) {
	matriz[fila][columna] = ficha;
}


Ficha* Tablero::ObtenerFicha(short int i, short int j) {
	return matriz[i][j];
}