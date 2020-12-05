/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Onasis Reyes
 *
 * Created on 04 de diciembre de 2020, 01:21 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>

#include "Pieza.h"
#include "Tablero.h"


using namespace std;

using std::endl;
using std::cin;
using std::cout;


void jugar_partida(string, Pieza*);

/*
 * 
 */
int main(int argc, char** argv) {
    bool continuar = true;
    int opcion = 0;
    while (continuar) {
        cout << "---Menú--- \n"
                "0. Salir \n"
                "1. Jugar Partida \n"
                "2. Recrear Partida\n"
                "-> Escoja su opción: ";
        cin >> opcion;
        cout << endl;
        switch (opcion) {
            case 1:
            {
                string nombre_partida = "", nombre_pieza = "";
                int opcion_pieza = 0;
                cout << "Ingrese nombre de la partida: ";
                cin >> nombre_partida;
                cout << "---Piezas---" << endl
                        << "0. Reina" << endl
                        << "1. Torre" << endl
                        << "2. Alfil" << endl
                        << "3. Peon" << endl
                        << "4. Caballo" << endl
                        << "-> Seleccione la pieza con la que va jugar: ";
                cin >> opcion_pieza;
                switch(opcion_pieza){
                    case 0:{
                        nombre_pieza = "Reina";
                        break;
                    }
                    case 1:{
                        nombre_pieza = "Torre";
                        break;
                    }
                    case 2:{
                        nombre_pieza = "Alfil";
                        break;
                    }
                    case 3:{
                        nombre_pieza = "Peon";
                        break;
                    }
                    case 4:{
                        nombre_pieza = "Caballo";
                        break;
                    }
                }//fin switch de elegir pieza
                break;
            }
            case 2:
            {
                break;
            }
            case 0:
            {
                cout << "Fin de la ejecución.";
                continuar = false;
                break;
            }
            default:
            {
                cout << "Opción Inexistente.";
            }
        }//fin switch
        cout << endl;
    }//fin while
    return 0;
}//fin main

void jugar_partida(string nombre_partida, Pieza* pieza){
    bool mate = false;
    Tablero* ajedrez = new Tablero();
    while(!mate){
        string coordenada_blancas = "";
        string coordenada_negras = "";
        cout << "Ingrese coordenada jugador blanco: ";
        cin >> coordenada_blancas;
        
        
    }
}