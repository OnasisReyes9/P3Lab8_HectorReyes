/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Peon.cpp
 * Author: Onasis Reyes
 * 
 * Created on 04 de diciembre de 2020, 05:49 PM
 */

#include "Peon.h"
#include "Pieza.h"

Peon::Peon() {
}

Peon::Peon(const Peon& orig) {
}

Peon::~Peon() {
}

virtual bool validar_movimiento(string coordenada, Pieza*** tablero) {
    int fil_nueva = 0, col_nueva = 0;
    int fil_inicial = 0, col_inicial = 0;
    bool mov_valido = false;
    if (fil_nueva >= 0 && fil_nueva <= 7 && col_nueva >= 0 && col_nueva <= 7 //valido que esté dentro del rango las posiciones
            && fil_inicial >= 0 && fil_inicial <= 7 && col_inicial >= 0 && col_inicial <= 7) {
        if (tablero[fil_inicial][col_inicial] != NULL) {
            if (tablero[fil_inicial][col_inicial] -> getTipo() == "blanca") {
                if (fil_nueva - 2 == fil_inicial) {//valido para cuando no se ha movido el peon
                    mov_valido = true;
                } else if (fil_nueva - 1 == fil_inicial) {
                    mov_valido = true;
                }//fin else if
            } else {
                if (fil_nueva + 2 == fil_inicial) {//valido para cuando no se ha movido el peon
                    mov_valido = true;
                } else if (fil_nueva + 1 == fil_inicial) {
                    mov_valido = true;
                }//fin else if
            }//fin else
        }//fin if
    }//fin if
    return mov_valido;
}//fin metodo

