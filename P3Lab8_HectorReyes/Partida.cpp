/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Partida.cpp
 * Author: Onasis Reyes
 * 
 * Created on 04 de diciembre de 2020, 03:17 PM
 */

#include "Partida.h"

Partida::Partida() {
}

Partida::Partida(const Partida& orig) {
}

Partida::~Partida() {
}

void Partida::almacenar_partida(string filename, string nombre_partida, Pieza pieza_usada, string movimiento) {
    escribir.open(filename, ofstream::out | ofstream::app);
    for (int i = 0; i < bitacora_movimientos.size(); i++) {
        string nonmenclatura =
                nombre_partida + "\n" + pieza_usada->getNombre_pieza() + "\n" + movimiento "\n" + "\n";
        escribir << bitacora_movimientos.at(i) = nonmenclatura;
        cout << "---------------" << endl;
    }//fin for
    //paso 3 cerrar el archivo
    escribir.close();
}//fin método




