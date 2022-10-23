#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <exception>

template <typename T>
class Serializadora
{

protected:
	Serializadora() {};

public:
	Serializadora(Serializadora const&) = delete; 
	Serializadora& operator = (Serializadora const&) = delete;

	static T& obtenerInstancia() {
		static T Serializadora;
		return Serializadora;
	}

};

