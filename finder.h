#pragma once
#include "iostream"
using namespace std;

#include <stdlib.h>
#include <time.h>

#include <cstring> 

class finder {
public:
    int fila = 0;
    int columna = 0;
    string x[100][100];

public:
    void ver_datos();
    void registrar_datos(int a, int b);
    void generar_matriz();
    void azar();
    void buscar_palabra(string palabra);

};






