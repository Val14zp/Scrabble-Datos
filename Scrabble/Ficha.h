#pragma once
class Ficha
{
private:
	char letra;
	Ficha* nextDerecha;
	Ficha* nextAbajo;

public:
	Ficha(char l = ' ', Ficha* nd = nullptr, Ficha* na = nullptr) : letra{ l }, nextDerecha{ nd }, nextAbajo{ na }{}
	char getLetra();
	Ficha* getNextDerecha();
	Ficha* getNextAbajo();

	void setLetra(char);
	void setNextDerecha(Ficha*);
	void setNextAbajo(Ficha*);

};

