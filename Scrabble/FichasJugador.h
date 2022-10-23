#pragma once
#include <iostream>
#include <sstream>
#include "Ficha.h"

using namespace std;

constexpr int cant_fichas = 6;

class FichasJugador {

public:
	FichasJugador();
	~FichasJugador();
	void LlenarVector();
	void EliminarPieza(int);
	bool ValidarLetra(char);
	bool ValidarPalabra(string);
	bool ActualizarFichas(string);
	void Mostrar();

private:
	Ficha* inicio;
	int tam;
	int cant;
};