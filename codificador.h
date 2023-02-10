#pragma once
#include "iostream"
using namespace std;


class codificador {
public:
	string nombre;
	string apellido;
	string telefono;
	string clave;

public:
	void ver_datos();
	void registrar_datos(string a, string b, string c, string d);
	void generar_contrasena();

};



void codificador::ver_datos() {
	cout << "NOMBRE : " << nombre << endl;
	cout << "APELLIDO : " << apellido << endl;
	cout << "TELEFONO : " << telefono << endl;
	cout << "CLAVE : " << clave << endl;

}

void codificador::registrar_datos(string a, string b, string c, string d) {
	nombre = a;
	apellido = b;
	telefono = c;
	clave = d;
}

void codificador::generar_contrasena() {

	cout << nombre.substr(0, 2);
	cout << "(" << clave.substr(0, 1) << ")";//
	cout << apellido.substr(0, 2);
	cout << "(" << clave.substr(1, 1) << ")";//
	cout << telefono.substr(0, 2);
	cout << "(" << clave.substr(2, 1) << ")";/////
	cout << nombre.substr(2, 2);
	cout << "(" << clave.substr(3, 1) << ")";////
	cout << apellido.substr(2, 2);
	cout << "(" << clave.substr(4, 1) << ")";
	cout << telefono.substr(2, 2);
	cout << "(" << clave.substr(5, 1) << ")";
	cout << nombre.substr(4, 4);
	cout << "(" << clave.substr(6, 1) << ")";
	cout << apellido.substr(4, 2);

	///////////////////////////////////


	if (clave.length() < 8) {
		cout << telefono.substr(4, 4);
	}
	else {
		cout << "(" << clave.substr(7, 1) << ")";
		cout << telefono.substr(4, 2);
		cout << apellido.substr(6, 2);
		cout << telefono.substr(6, 2);
	}








}

