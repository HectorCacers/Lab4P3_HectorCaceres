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





