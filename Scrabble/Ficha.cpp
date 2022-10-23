#include "Ficha.h"


char Ficha::getLetra() { return letra; }
Ficha* Ficha::getNextDerecha() { return nextDerecha; }
Ficha* Ficha::getNextAbajo() { return nextAbajo; }

void Ficha::setLetra(char letra) { this->letra = letra; }
void Ficha::setNextDerecha(Ficha* nextDerecha) { this->nextDerecha = nextDerecha; }
void Ficha::setNextAbajo(Ficha* nextAbajo) { this->nextAbajo = nextAbajo; }