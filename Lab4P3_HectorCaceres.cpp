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

		cout << "1). PRACTICA (1) : GENERAR CONTRASEŅA ENCRIPTADA" << endl;
		cout << "2). PRACTICA (2) : WORD SEARCH" << endl;
		cout << "3). SALIR" << endl;
		cout << "\n" << endl;

		cout << "OPCION --> ";
		cin >> op;

		cout << "\n\n" << endl;

		switch (op) {

		case 1:
			cout << "VER DATOS" << endl;
			cout << "------------------" << endl;
			cout << "\n" << endl;

			x.ver_datos();
			cout << "\n\n" << endl;

			cout << "REGISTRAR DATOS" << endl;
			cout << "--------------------" << endl;
			cout << "\n" << endl;

			//cout<<"NOMBRE : ";
			//cin>>a;
			//cout<<"APELLIDO : ";
			//cin>>b;
			//cout<<"TELEFONO : ";
			//cin>>c;
			//cout<<"CLAVE : ";
			//cin>>d;

			a = "daniel";
			b = "zuniga";
			c = "94367120";
			d = "secreto";

			x.registrar_datos(a, b, c, d);

			if (a.length() >= 4 & a.length() <= 10 & b.length() >= 4 & b.length() <= 10 & c.length() >= 4 & c.length() <= 10 & d.length() >= 4 & d.length() <= 10) {
				cout << "\n\n" << endl;

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


