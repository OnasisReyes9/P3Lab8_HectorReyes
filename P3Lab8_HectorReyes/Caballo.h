/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Caballo.h
 * Author: Onasis Reyes
 *
 * Created on 04 de diciembre de 2020, 04:36 PM
 */

#ifndef CABALLO_H
#define CABALLO_H

#include "Pieza.h"


class Caballo:public Pieza {
public:
    Caballo();
    Caballo(const Caballo& orig);
    virtual ~Caballo();
    
     virtual bool validar_movimiento(string, Pieza***);
    
private:

};

#endif /* CABALLO_H */

