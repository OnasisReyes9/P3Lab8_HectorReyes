/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Tablero.cpp
 * Author: Onasis Reyes
 * 
 * Created on 04 de diciembre de 2020, 01:32 PM
 */

#include "Tablero.h"
#include "iostream"
#include "Rey.h"

Tablero::Tablero() {
    size = 8;
    //tablero_ajedrez = NULL;
}

Tablero::Tablero(const Tablero& orig) {
}

Tablero::~Tablero() {
}

void Tablero::instanciar_Tablero() {
    tablero_ajedrez = new Pieza**[size];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            tablero_ajedrez[i] = new Pieza*[size];
        }//fin for
    }//fin for
}//fin void

void Tablero::iniciar_Tablero() {
    if (tablero_ajedrez != NULL) {
        liberar_matriz();
    } else {
        instanciar_Tablero();
        //int cont_aux = 48;
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                //cont_aux++;
                tablero_ajedrez[i][j] = NULL;
            }//fin for
        }//fin for
    }//fin else
    //  Pieza* rey_blanco = new Rey*("Rey", "Blanco");
    Pieza* rey_blanco = new Rey();
    //Pieza* rey_negro = new Rey*("Rey", "Negro");
    //tablero_ajedrez[0][4] = rey_blanco;
    //tablero_ajedrez[7][4] = rey_negro;
}//fin void

void Tablero::liberar_matriz() {
    if (tablero_ajedrez != NULL) {
        for (int i = 0; i< this-> size; i++) {
            delete[] tablero_ajedrez[i];
        }
        delete[] tablero_ajedrez;
        tablero_ajedrez = NULL;
    }//fin if
}//fin método