#pragma once

#include <vector>
#include <sstream>

class Ficha
{
private:
	char letra;
	Ficha* nextDerecha;
	Ficha* nextAbajo;
	int x;
	int y;

public:
	Ficha(char l = ' ', Ficha* nd = nullptr, Ficha* na = nullptr, int p1 = 0, int p2 = 0) : letra{ l }, nextDerecha{ nd }, nextAbajo{ na }, x{ p1 }, y{ p2 } {}
	char getLetra();
	Ficha* getNextDerecha();
	Ficha* getNextAbajo();
	int getX();
	int getY();
	void setLetra(char);
	void setNextDerecha(Ficha*);
	void setNextAbajo(Ficha*);
	void setX(int);
	void setY(int);
	void GenerarAleatorio();
	std::string Mostrar();
};

