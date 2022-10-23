#include "FichasJugador.h"

FichasJugador::FichasJugador() : inicio{ new Ficha[cant_fichas] }, cant{ 0 }, tam{ cant_fichas } {
	Ficha* tmp = inicio;
	for (unsigned int i = 0; i < tam; i++) {
		*tmp++ = ' ';
	}
	tmp = nullptr;
}

FichasJugador::~FichasJugador() {
	delete[] inicio;
	inicio = nullptr;
}

void FichasJugador::LlenarVector() {
	for (unsigned int i = 0; i < tam; i++) {
		Ficha* f = new Ficha();
		f->GenerarAleatorio();
		inicio[i] = *f;
		cant++;
	}
}

void FichasJugador::EliminarPieza(int pos) {
	for (unsigned int i = pos; i < cant; i++) {
		inicio[i] = inicio[i + 1];
	}
	cant--;
}

bool FichasJugador::ValidarLetra(char letra) {
	bool valor = false;
	for (unsigned int i = 0; i < cant; i++) {
		if (inicio[i].getLetra() == letra) {
			valor = true;
		}
	}
	return valor;
}

bool FichasJugador::ValidarPalabra(string palabra) {
	for (unsigned int i = 0; i < palabra.size(); i++) {
		char letra = palabra[i];
		if (ValidarLetra(letra) == false) {
			return false;
		}
	}
	return true;
}

bool FichasJugador::ActualizarFichas(string palabra) {
	if (ValidarPalabra(palabra) == true) {
		for (unsigned int i = 0; i < palabra.size(); i++) {
			for (unsigned int j = 0; j < cant; j++) {
				if (inicio[j].getLetra() == palabra.at(i)) {
					EliminarPieza(j);
				}
			}
		}
	}
	else {
		return false;
	}
}


void FichasJugador::Mostrar() {
	for (unsigned int i = 0; i < cant; i++) {
		cout << inicio[i].Mostrar() << " ";
	}
}