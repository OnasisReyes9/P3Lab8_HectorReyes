/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Tablero.h
 * Author: Onasis Reyes
 *
 * Created on 04 de diciembre de 2020, 01:32 PM
 */

#ifndef TABLERO_H
#define TABLERO_H

#include <string>
#include "Pieza.h"

using std::string;

class Tablero {
public:
    Tablero();
    Tablero(const Tablero& orig);
    virtual ~Tablero();

    void iniciar_Tablero();
    void instanciar_Tablero();
    void liberar_matriz();

    Pieza*** tablero_ajedrez;
    int size;
};

#endif /* TABLERO_H */

