/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Pieza.h
 * Author: Onasis Reyes
 *
 * Created on 04 de diciembre de 2020, 01:50 PM
 */

#ifndef PIEZA_H
#define PIEZA_H

#include <string>

using std::string;

class Pieza {
public:
    Pieza();
    Pieza(const Pieza& orig);
    virtual ~Pieza();

    virtual bool validar_movimiento(string, Pieza***) = 0;

    Pieza(string nombre_pieza, string tipo) :
    nombre_pieza(nombre_pieza), tipo(tipo) {
    }

    string getNombre_pieza() const {
        return nombre_pieza;
    }

    void setNombre_pieza(string nombre_pieza) {
        this->nombre_pieza = nombre_pieza;
    }

    string getTipo() const {
        return tipo;
    }

    void setTipo(string tipo) {
        this->tipo = tipo;
    }

private:
    string nombre_pieza, tipo;
};

#endif /* PIEZA_H */

