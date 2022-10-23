#pragma once

#include "Serializadora.h"


class PalabrasComprobar final: public Serializadora<PalabrasComprobar>
{

private:
	std::vector<std::string> palabras; 

public:

	PalabrasComprobar();
	virtual ~PalabrasComprobar();
	void Deserializar();
	std::vector<std::string>  GetPalabras();
	bool ExistePalabra(std::string);

};

