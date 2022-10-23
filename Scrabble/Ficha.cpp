#include "Ficha.h"

char Ficha::getLetra() { return letra; }
Ficha* Ficha::getNextDerecha() { return nextDerecha; }
Ficha* Ficha::getNextAbajo() { return nextAbajo; }
int Ficha::getX() { return x; }
int Ficha::getY() { return y; }

void Ficha::setLetra(char letra) { this->letra = letra; }
void Ficha::setNextDerecha(Ficha* nextDerecha) { this->nextDerecha = nextDerecha; }
void Ficha::setNextAbajo(Ficha* nextAbajo) { this->nextAbajo = nextAbajo; }
void Ficha::setX(int x) { this->x = x; }
void Ficha::setY(int y) { this->y = y; }

void Ficha::GenerarAleatorio() {
	std::vector<char> opciones = { 'a','b','e','c','d','e','f','g','i','j','u','l','a','m','n','o','p','i','r','s','o','t','u','v' };
	int x = rand() % 20;
	setLetra(opciones[x]);
}

std::string Ficha::Mostrar() {
	std::stringstream s;
	s << getLetra();
	return s.str();
}

