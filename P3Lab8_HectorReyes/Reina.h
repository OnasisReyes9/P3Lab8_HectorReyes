/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Reina.h
 * Author: Onasis Reyes
 *
 * Created on 04 de diciembre de 2020, 03:57 PM
 */

#ifndef REINA_H
#define REINA_H

#include "Pieza.h"

class Reina : public Pieza {
public:
    Reina();
    Reina(const Reina& orig);
    virtual ~Reina();

    virtual bool validar_movimiento(string, Pieza***);

private:

};

#endif /* REINA_H */

