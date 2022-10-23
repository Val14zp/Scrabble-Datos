#include "Jugadores.h"

Jugadores::Jugadores(int n) {
	tam = n;
	can = 0;
	vec = new Jugador * [n];
	for (int i = 0; i < n; i++)
		vec[i] = NULL;
}

Jugadores::~Jugadores() {
	for (int i = 0; i < can; i++)
		delete vec[i];
	delete[] vec;
}

void  Jugadores::Ingresar(Jugador* jug) {
	if (can < tam)
		vec[can++] = jug;
}

void Jugadores::Mostrar() {
	cout << endl << "-------- Jugadores -----------" << endl;
	for (int i = 0; i < can; i++) {
		vec[i]->Mostrar();
	}
	cout << endl << "------------------------------" << endl;
}