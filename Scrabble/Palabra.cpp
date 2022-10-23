#include "Palabra.h"

void Palabra::InsertarDerecha(Ficha* ficha) {

	Ficha* nuevo;
	nuevo = ficha;


	if (inicio == nullptr) {
		inicio = nuevo;
	}
	else {
		Ficha* tmp = inicio;
		while (tmp->getNextDerecha() != nullptr) {
			tmp = tmp->getNextDerecha();
		}
		tmp->setNextDerecha(nuevo);
	}
}

void Palabra::InsertarIzquierda(Ficha* ficha) {
	Ficha* nuevo;
	nuevo = ficha;

	if (inicio == nullptr) {
		inicio = nuevo;
	}
	else {
		Ficha* tmp = inicio;
		while (tmp->getNextAbajo() != nullptr) {
			tmp = tmp->getNextAbajo();
		}
		tmp->setNextAbajo(nuevo);
	}
}

//Borra completamente la lista
void Palabra::BorrarLista() {

	Ficha* tmp;
	while (inicio != nullptr) {
		if (inicio->getNextAbajo() != nullptr) {
			tmp = inicio;
			inicio = inicio->getNextAbajo();
			delete tmp;
		}
		if (inicio->getNextDerecha() != nullptr) {
			tmp = inicio;
			inicio = inicio->getNextDerecha();
			delete tmp;
		}
	}
}

char Palabra::getLetraInicio(){
	if(inicio != nullptr)
		return this->inicio->getLetra();
	return ' ';
}