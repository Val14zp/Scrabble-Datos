#pragma once
#include "Jugador.h"

class Jugadores {
private:
	Jugador** vec;
	int can;
	int tam;
public:
	Jugadores(int);
	virtual ~Jugadores();
	void  Ingresar(Jugador* jug);
	void Mostrar();
};

