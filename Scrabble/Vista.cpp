#include "Vista.h"

int Vista::Menu() {
	int opcion;
	cout << "--------------SCRABBLE--------------" << endl;
	cout << "------------------------------------" << endl;
	cout << "-----------  Bienvenido  -----------" << endl << endl;
	cout << "------------------------------------" << endl;
	cout << "    1-		Jugar                    " << endl;
	cout << "    2-		Salir                    " << endl;
	cout << "------------------------------------" << endl;
	cout << "     Digite una opcion..: ";
	cin >> opcion;
	return opcion;
}

int Vista::NumJugadores() {
	system("cls");
	int num;
	cout << "--------- Cuantos jugadores ---------" << endl;
	cout << "-------------------------------------" << endl;
	cout << "Min = 2                       Max = 4" << endl << endl;
	cout << "  Ingrese el numero de juagdores..";
	cin >> num;
	cin.ignore();
	if (num >= 2 || num <= 4) {
		return num;
	}
	else {
		cout << "Jugadores:  Min = 2    Max = 4 " << endl << endl;
	}
}

Jugador* Vista::CrearJugador() {
	string nombre;
	Jugador* jug;
	FichasJugador* fichas = new FichasJugador();
	fichas->LlenarVector();
	cout << endl << "--------- Datos del jugador ---------" << endl;
	cout << "-------------------------------------" << endl;
	cout << "  Ingrese el nombre..";
	getline(cin, nombre);
	cin.ignore();
	jug = new Jugador(nombre, fichas);
	return jug;
}

void Vista::ValidarVector(bool resultado) {
	if (resultado == true) {
		cout << "Palabra valida" << endl;
	}
	else {
		cout << "Lo sentimos, la palabra no se puede validar" << endl;
	}
}

void Vista::ValidarTexto(bool resultado) {
	if (resultado == true) {
		cout << "Palabra valida" << endl;
	}
	else {
		cout << "Lo sentimos, la palabra no existe en este juego" << endl;
	}
}

void Vista::Ganador() {
	cout << "-------------------------------------" << endl;
	cout << "-------------  Ganador  -------------" << endl;
	cout << "-------------------------------------" << endl;
}

void Vista::Final() {
	cout << "-------------------------------------" << endl;
	cout << "----------  FIN DEL JUEGO  ----------" << endl;
	cout << "-------------------------------------" << endl;
}