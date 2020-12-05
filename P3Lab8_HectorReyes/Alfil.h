/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Alfil.h
 * Author: Onasis Reyes
 *
 * Created on 04 de diciembre de 2020, 04:58 PM
 */

#ifndef ALFIL_H
#define ALFIL_H

#include "Pieza.h"

class Alfil:public Pieza{
public:
    Alfil();
    Alfil(const Alfil& orig);
    virtual ~Alfil();
    
    virtual bool validar_movimiento(string, Pieza***);
    
private:

};

#endif /* ALFIL_H */

