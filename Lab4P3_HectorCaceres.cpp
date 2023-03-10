// Lab4P3_HectorCaceres.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "iostream"
using namespace std;

////////////////
#include "codificador.h"
////////////////////

////////////////
#include "finder.h"
////////////////////

int main(int argc, char** argv) {
	int op = 0;
	/////////////////////
	codificador x;
	string a = "", b = "", c = "", d = "";
	/////////////////////

	/////////////////////
	finder y;
	int fi = 0, co = 0;
	string palabra = "";
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

			cout<<"NOMBRE : ";
			cin>>a;
			cout<<"APELLIDO : ";
			cin>>b;
			cout<<"TELEFONO : ";
			cin>>c;
			cout<<"CLAVE : ";
			cin>>d;

			//a="daniel";
			//b="zuniga";
			//c="94367120";
			//d="secreto";

			/*a = "walter";
			b = "carranza";
			c = "98967807";
			d = "pinguino";*/

			x.registrar_datos(a, b, c, d);

			if (a.length() >= 4 & a.length() <= 10 & b.length() >= 4 & b.length() <= 10 & c.length() >= 4 & c.length() <= 10 & d.length() >= 4 & d.length() <= 10) {
				cout << "\n\n" << endl;

				cout << "VER DATOS" << endl;
				cout << "------------------" << endl;
				cout << "\n" << endl;

				x.ver_datos();

				cout << "\n\n" << endl;

				cout << "CONTRASEŅA GENERADA : ";
				x.generar_contrasena();


			}
			else {
				cout << "\n\n" << endl;
				cout << "! ERROR DE DATOS ! NO CUMPLEN LOS REQUISITOS DE LONGITUD " << endl;
			}



			break;
		case 2:

			cout << "VER DATOS" << endl;
			cout << "------------------" << endl;
			cout << "\n" << endl;

			y.ver_datos();
			cout << "\n\n" << endl;

			cout << "REGISTRAR DATOS" << endl;
			cout << "--------------------" << endl;
			cout << "\n" << endl;

			cout << "FILA : ";
			cin >> fi;
			cout << "COLUMNA : ";
			cin >> co;

			cout << "\n\n" << endl;

			y.registrar_datos(fi, co);

			if (fi >= 4 & co >= 4) {
				y.ver_datos();

				cout << "\n\n" << endl;
				y.azar();
				y.generar_matriz();

				cout << "\n\n" << endl;

				cout << "PALABRA POR BUSCAR EN LA MATRIZ : ";
				cin >> palabra;

				cout << "\n" << endl;

				y.buscar_palabra(palabra);


			}
			else {
				cout << "! ERROR DE DATOS ! NO CUMPLEN LOS REQUISITOS DE LONGITUD " << endl;
			}



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

