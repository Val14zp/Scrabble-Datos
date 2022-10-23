#include "PalabrasComprobar.h"

PalabrasComprobar::PalabrasComprobar() { 
	Deserializar();
}

void PalabrasComprobar::Deserializar() {
	std::string palabra;
	std::string nombreArchivo = "bocetoPalabrasArchivo.txt";

	std::ifstream myReadFile(nombreArchivo);

	if(!myReadFile.is_open()) {
		throw std::invalid_argument("Could not open the file [" + nombreArchivo + "]");
	}

	while (getline(myReadFile, palabra)) {
		palabras.push_back(palabra);
	}
	myReadFile.close();
}

PalabrasComprobar::~PalabrasComprobar() {}

std::vector<std::string> PalabrasComprobar::GetPalabras() {
	return palabras; 
}

bool PalabrasComprobar::ExistePalabra(std::string palabra){
	bool existe = false; 
	for (int i = 0; i < palabras.size(); i++) {
		if(palabras[i] == palabra)
			existe = true; 
	}
	return existe; 
}


