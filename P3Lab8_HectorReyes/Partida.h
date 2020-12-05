/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Partida.h
 * Author: Onasis Reyes
 *
 * Created on 04 de diciembre de 2020, 03:17 PM
 */

#ifndef PARTIDA_H
#define PARTIDA_H

#include <fstream>
using std::ifstream;
using std::ofstream;

#include <vector>
using std::vector;

#include <iostream>
using std::endl;
using std::cout;

#include "Pieza.h"

#include "string"
using std::string;

class Partida {
public:
    Partida();
    Partida(const Partida& orig);
    virtual ~Partida();
    
    void almacenar_partida(string, string, Pieza, string);
    
private:
    ofstream escribir;
    ifstream leer;
    vector<string> bitacora_movimientos;
};

#endif /* PARTIDA_H */

