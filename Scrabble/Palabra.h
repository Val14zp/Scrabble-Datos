#include <sstream>
#include "Ficha.h"

class Palabra {
private:
	Ficha* inicio;
public:
	Palabra() { inicio = nullptr; }
	~Palabra() { BorrarLista(); }
	void InsertarDerecha(Ficha*);
	void InsertarIzquierda(Ficha*);
	void BorrarLista();
    char getLetraInicio();
};