// Lab4P3_HectorCaceres.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

////////////////
#include "codificador.h"
////////////////////
int main(int argc, char** argv) {
	int op = 0;
	/////////////////////
	codificador x;
	/////////////////////

	while (op != 3) {
		cout << "\n\n" << endl;

		cout << "    MENU" << endl;
		cout << "------------------\n\n" << endl;

		cout << "1). PRACTICA (1) : GENERAR CONTRASEÑA ENCRIPTADA" << endl;
		cout << "2). PRACTICA (2) : WORD SEARCH" << endl;
		cout << "3). SALIR" << endl;
		cout << "\n" << endl;

		cout << "OPCION --> ";
		cin >> op;

		cout << "\n\n" << endl;

		switch (op) {

		case 1:
			break;
		case 2:
			break;
		case 3:
			cout << "SALIENDO...." << endl;
			break;
		default:
			cout << "! FUERA DEL RANGO !" << endl;
			break;
		}

		cout << "\n\n" << endl;
	}



	return 0;



}


