/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Peon.h
 * Author: Onasis Reyes
 *
 * Created on 04 de diciembre de 2020, 05:49 PM
 */

#ifndef PEON_H
#define PEON_H

#include <iostream>
#include <string>

#include "Pieza.h"

using std::string;

class Peon {
public:
    Peon();
    Peon(const Peon& orig);
    virtual ~Peon();

    virtual bool validar_movimiento(string, Pieza***);

private:

};

#endif /* PEON_H */

