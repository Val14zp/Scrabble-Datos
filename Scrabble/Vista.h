#pragma once
#include "Jugador.h"
#include <iostream>

using namespace std;

constexpr int tam_nombre = 20;

class Vista {

public:
	static int Menu();
	static int NumJugadores();
	static Jugador* CrearJugador();
	static void ValidarVector(bool);
	static void ValidarTexto(bool);  //revisa que la palabra exista en el txt
	static void Ganador();
	static void Final();
};