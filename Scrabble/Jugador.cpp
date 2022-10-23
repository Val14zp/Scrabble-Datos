#include "Jugador.h"

Jugador::Jugador(string nom) {
	nombre = nom;
	disponibles = new FichasJugador();
}

Jugador::Jugador(string nom, FichasJugador* vec) {
	nombre = nom;
	disponibles = vec;
}

Jugador::~Jugador() {
	disponibles->~FichasJugador();
}

void Jugador::SetNombre(string x) {
	nombre = x;
}

string Jugador::GetNombre() const {
	return nombre;
}

void Jugador::SetDisponibles(FichasJugador* vec) {
	disponibles = vec;
}

FichasJugador* Jugador::GetDisponibles() const {
	return disponibles;
}

void Jugador::Mostrar() {
	cout << "Nombre de jugador: " << GetNombre() << endl;
	cout << "Piezas disponibles: ";
	disponibles->Mostrar();
	cout << endl << endl;
}

string Jugador::EliminarPivote(string palabra, char pivote) {
	int pivPos = palabra.find(pivote);
	string nueva = palabra.erase(pivPos, 1);
	return nueva;
}

void Jugador::Intento(string palabra, char pivote) {
	string verificar = EliminarPivote(palabra, pivote);
	disponibles->ActualizarFichas(verificar);
}