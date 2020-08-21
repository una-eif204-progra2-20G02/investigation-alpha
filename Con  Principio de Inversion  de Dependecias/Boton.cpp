/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Boton.cpp
 * Author: computer
 * 
 * Created on August 6, 2020, 10:03 AM
 */

#include "Boton.h"

Boton::Boton() {//Constrctor
}

Boton::~Boton() {//Destructor
}

void Boton::preionar(bool s){//Metodo void con boleano
    if(s==true){//Decision
        _i.encender();//llamada  de metodo void
    }
    else if(s==false){//Decision
        _i.apagar();//Llamada de metodo void
    }
}
