#include <vector>
#include "Palabra.h"

#pragma once

class Palabras
{
private:
    std::vector<Palabra*> arrayPalabras;
public:

    Palabras();
    void insertarPalabra(Palabra*);
    void eliminarPalabra(Palabra*);
    Palabra* getPalabra(int);
    char getPrimeraLetra(int);
};