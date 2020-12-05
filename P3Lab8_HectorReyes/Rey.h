/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Rey.h
 * Author: Onasis Reyes
 *
 * Created on 04 de diciembre de 2020, 01:52 PM
 */

#ifndef REY_H
#define REY_H

#include "Pieza.h"

class Rey : public Pieza {
public:
    Rey();
    Rey(const Rey& orig);
    
    virtual bool validar_movimiento(string, Pieza***);

    virtual ~Rey();
private:

};

#endif /* REY_H */

