#include "Jugador.h"

void Jugador::insertarPalabra(Palabra* palabra) { this->palabras.insertarPalabra(palabra); }

Palabras Jugador::getPalabras() { return this->palabras; }

void Jugador::insertarFicha(Ficha* ficha) { this->fichas.emplace_back(ficha); }

Ficha* Jugador::getFichaPos(int pos) { return this->fichas.at(pos); }

void Jugador::calcularScore() {
	int cantidadFichas = this->fichas.size();
	for (int i = 0; i < cantidadFichas; i++)
		this->score += fichas.at(i)->getLetra();
}

int Jugador::getScore() { return this->score; }
