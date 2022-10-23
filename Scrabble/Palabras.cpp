#include "Palabras.h"

Palabras::Palabras() = default;

void Palabras::insertarPalabra(Palabra* palabra) {
    arrayPalabras.push_back(palabra);
}
void Palabras::eliminarPalabra(Palabra* _palabra) {
    //this->arrayPalabras.erase();
}
Palabra* Palabras::getPalabra(int pos) {
    if (this->arrayPalabras.size() > pos)
        return this->arrayPalabras.at(pos);
    return nullptr;
}
char Palabras::getPrimeraLetra(int pos) {
    if (this->arrayPalabras.size() > pos)
        return this->arrayPalabras.at(pos)->getLetraInicio();
    return ' ';
}