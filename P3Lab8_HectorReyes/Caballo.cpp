/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Caballo.cpp
 * Author: Onasis Reyes
 * 
 * Created on 04 de diciembre de 2020, 04:36 PM
 */

#include "Caballo.h"

Caballo::Caballo() {
}

Caballo::Caballo(const Caballo& orig) {
}

Caballo::~Caballo() {
}

virtual bool validar_movimiento(string coordenada, Pieza*** tablero) {
    int fil_nueva = 0, col_nueva = 0;
    int fil_inicial = 0, col_inicial = 0;
    bool mov_valido = false;
    if (fil_nueva >= 0 && fil_nueva <= 7 && col_nueva >= 0 && col_nueva <= 7 //valido que esté dentro del rango las posiciones
            && fil_inicial >= 0 && fil_inicial <= 7 && col_inicial >= 0 && col_inicial <= 7) {
        if (tablero[fil_inicial][col_inicial] != NULL) {//valido que en la posicion inicial haya algo
            if (((fil_inicial == fil_nueva + 2 || fil_inicial == fil_nueva - 2)
                    && (col_inicial - 1 == col_nueva || col_inicial + 1 == col_nueva))//valido para mover arriba o abajo
                    || ((fil_inicial == fil_nueva + 1 || fil_inicial == fil_nueva - 1)
                    && (col_inicial - 2 == col_nueva || col_inicial + 2 == col_nueva))) {//valido para mover a la derecha o izquierda
                if (((Pieza) tablero[fil_nueva][col_nueva])->getTipo()
                        != ((Pieza) tablero[fil_inicial][col_inicial])->getTipo()
                        || tablero[fil_nueva][col_nueva] == NULL) {//valido que el movimiento se haga sobre un espacio vacio o para comer una pieza enemiga 
                    mov_valido = true;
                }//fin if
            }//fin if
        }//fin if
    }//fin if
    return mov_valido;
}//fin metodo

