/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Boton.cpp
 * Author: computer
 * 
 * Created on August 6, 2020, 9:39 AM
 */

#include "Boton.h"

Boton::Boton() {//Constructor
}


Boton::~Boton() {//Destructor
    delete _lampara;//Liberacion de la memoria
}

void Boton::presionar(bool s){//Metodo void con decision
    if(s==true){//Decicion
        _lampara->enceder();//Salida de dato por llamada de puntero
    }
    else if(s==false){//Decision
        _lampara->apagar();//Salida de dato por llamada de puntero
    }
}