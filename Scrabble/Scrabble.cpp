// Scrabble.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.

#include "PalabrasComprobar.h"

#include <iostream>
#include <time.h>
#include "Ficha.h"
#include "FichasJugador.h"
#include "Jugador.h"
#include "Jugadores.h"
#include "Vista.h"

int main() {

	srand(time(NULL));

	int opcion;
	Jugador* jug;

	do {
		opcion = Vista::Menu();
		switch (opcion) {
		case 1: {
			int numjug = Vista::NumJugadores();
			Jugadores* jugadores = new Jugadores(numjug);
			for (unsigned int i = 0; i < numjug; i++) {
				jug = Vista::CrearJugador();
				jugadores->Ingresar(jug);
			}
			jugadores->Mostrar();

		}
			  break;

		case 2: {
			Vista::Final();
		}
		};
	} while (opcion != 2);

	system("pause");

	/*
	Jugador j;
	Jugador j1;

	cout << endl << "Jugadores" << endl << endl;

	cout << "Jugador 1" << endl;
	j.SetNombre("player one");
	j.Mostrar();

	cout << endl << endl << "Jugador 2" << endl;
	j1.SetNombre("player two");
	j1.Mostrar();

	cout << endl << "_________________________________________________________" << endl;
	cout << endl << "Intentos" << endl << endl;

	cout << endl << "Validar en p1 loza" << endl;
	j.Intento("loza", 'z');

	cout << endl << "Validar en p1 caer" << endl;
	j.Intento("caer", 'c');

	cout << endl << "Validar en p2 melasa" << endl;
	j1.Intento("melasa", 'a');

	cout << endl << "_________________________________________________________" << endl;
	cout << endl << "Despues de jugar" << endl << endl;

	cout << endl;
	j.Mostrar();

	cout << endl << endl;
	j1.Mostrar();
	cout << endl << endl;

	j.~Jugador();
	j1.~Jugador();*/

	return 0;
}