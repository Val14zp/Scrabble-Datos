#pragma once
#include "Ficha.h"

class Tablero {

private:
	Ficha* matriz[15][15];

public:
	Tablero();
	~Tablero();
	void IngresarFicha(int fila, int columna, Ficha* ficha);
	bool EstaVacio();
	Ficha* ObtenerFicha(short int i, short int j);

};
