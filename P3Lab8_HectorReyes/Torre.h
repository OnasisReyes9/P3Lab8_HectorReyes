/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Torre.h
 * Author: Onasis Reyes
 *
 * Created on 04 de diciembre de 2020, 04:32 PM
 */

#ifndef TORRE_H
#define TORRE_H

#include "Pieza.h"


class Torre:public Pieza {
public:
    Torre();
    Torre(const Torre& orig);
    virtual ~Torre();

    virtual bool validar_movimiento(string, Pieza***);

private:

};

#endif /* TORRE_H */

