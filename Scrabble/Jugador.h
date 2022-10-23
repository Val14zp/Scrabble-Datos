#pragma once
#include <iostream>
#include <string>
#include "FichasJugador.h"

using namespace std;

class Jugador {

public:
	Jugador(string);
	Jugador(string, FichasJugador*);
	~Jugador();
	void SetNombre(string x);
	string GetNombre() const;
	void SetDisponibles(FichasJugador*);
	FichasJugador* GetDisponibles() const;
	void Mostrar();
	string EliminarPivote(string, char);
	void Intento(string, char);

private:
	string nombre;
	FichasJugador* disponibles;
};