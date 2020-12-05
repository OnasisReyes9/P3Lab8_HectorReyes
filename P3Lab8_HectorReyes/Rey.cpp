/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Rey.cpp
 * Author: Onasis Reyes
 * 
 * Created on 04 de diciembre de 2020, 01:52 PM
 */

#include "Rey.h"
#include "Tablero.h"

Rey::Rey() {
}

Rey::Rey(const Rey& orig) {
}

Rey::~Rey() {
}

virtual bool Pieza::validar_movimiento(string coordenada, Pieza*** tablero) {
    int fil_nueva = 0, col_nueva = 0;
    int fil_inicial = 0, col_inicial = 0;
    bool mov_valido = false;
    if (fil_nueva >= 0 && fil_nueva <= 7 && col_nueva >= 0 && col_nueva <= 7 //valido que esté dentro del rango las posiciones
            && fil_inicial >= 0 && fil_inicial <= 7 && col_inicial >= 0 && col_inicial <= 7) {
        if (tablero[fil_inicial][col_inicial] != NULL) {//valido que exista algo en esa pos
            
        }//fin if
    }//fin if
    return mov_valido;
}//fin metodo