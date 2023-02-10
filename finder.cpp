#include "finder.h"
void finder::ver_datos() {
    cout << "FILA : " << fila << endl;
    cout << "COLUMNA : " << columna << endl;

}

void finder::registrar_datos(int a, int b) {
    fila = a;
    columna = b;
}

void finder::generar_matriz() {

    for (int i = 0; i < fila; i++) {
        for (int j = 0; j < columna; j++) {
            cout << " [" << x[i][j] << "] ";
        }
        cout << "" << endl;
    }

}


void finder::azar() {
    int valor = 0;
    string r = "";

    srand(time(NULL));
    int DESDE = 1, HASTA = 28;

    for (int i = 0; i < fila; i++) {
        for (int j = 0; j < columna; j++) {
            valor = rand() % (HASTA - DESDE + 1) + DESDE;
            if (valor == 1) {
                r = "a";
            }
            else {
                if (valor == 2) {
                    r = "b";
                }
                else {
                    if (valor == 3) {
                        r = "c";
                    }
                    else {
                        if (valor == 4) {
                            r = "d";
                        }
                        else {
                            if (valor == 5) {
                                r = "e";
                            }
                            else {
                                if (valor == 6) {
                                    r = "f";
                                }
                                else {
                                    if (valor == 7) {
                                        r = "g";
                                    }
                                    else {
                                        if (valor == 8) {
                                            r = "h";
                                        }
                                        else {
                                            if (valor == 9) {
                                                r = "i";
                                            }
                                            else {
                                                if (valor == 10) {
                                                    r = "j";
                                                }
                                                else {
                                                    if (valor == 11) {
                                                        r = "k";
                                                    }
                                                    else {
                                                        if (valor == 12) {
                                                            r = "l";
                                                        }
                                                        else {
                                                            if (valor == 13) {
                                                                r = "m";
                                                            }
                                                            else {
                                                                if (valor == 14) {
                                                                    r = "n";
                                                                }
                                                                else {
                                                                    if (valor == 15) {
                                                                        r = "o";
                                                                    }
                                                                    else {
                                                                        if (valor == 16) {
                                                                            r = "p";
                                                                        }
                                                                        else {
                                                                            if (valor == 17) {
                                                                                r = "q";
                                                                            }
                                                                            else {
                                                                                if (valor == 18) {
                                                                                    r = "r";
                                                                                }
                                                                                else {
                                                                                    if (valor == 19) {
                                                                                        r = "s";
                                                                                    }
                                                                                    else {
                                                                                        if (valor == 20) {
                                                                                            r = "t";
                                                                                        }
                                                                                        else {
                                                                                            if (valor == 21) {
                                                                                                r = "u";
                                                                                            }
                                                                                            else {
                                                                                                if (valor == 22) {
                                                                                                    r = "v";
                                                                                                }
                                                                                                else {
                                                                                                    if (valor == 23) {
                                                                                                        r = "w";
                                                                                                    }
                                                                                                    else {
                                                                                                        if (valor == 24) {
                                                                                                            r = "x";
                                                                                                        }
                                                                                                        else {
                                                                                                            if (valor == 25) {
                                                                                                                r = "y";
                                                                                                            }
                                                                                                            else {
                                                                                                                r = "z";
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            x[i][j] = r;
        }
    }
}



void finder::buscar_palabra(string palabra) {
    int a = 0;
    for (int i = 0; i < fila; i++) {
        for (int j = 0; j < columna; j++) {
            //if(strstr(x[i][j],palabra)){
         ///////////////////////
            for (int k = 0; k < palabra.length(); k++) {
                if (palabra.substr(k, k) == x[i][j]) {
                    a = 1;
                }
            }
            /////////////////////
        }
    }
    if (a == 1) {
        cout << "! LA PALABRA (" << palabra << ") SI SE ENCUENTRA EN LA MATRIZ !" << endl;
    }
    else {
        cout << "! LA PALABRA (" << palabra << ") NO SE ENCUENTRA EN LA MATRIZ !" << endl;
    }
    a = 0;
}