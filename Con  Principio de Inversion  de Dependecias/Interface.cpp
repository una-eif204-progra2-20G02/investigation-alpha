/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Interface.cpp
 * Author: computer
 * 
 * Created on August 6, 2020, 9:59 AM
 */

#include "Interface.h"//LLamada de la clase Interface

Interface::Interface():Lampara() {//Constructor
}

Interface::~Interface() {//Destructor
}

void Interface::encender(){//Metodo void
std::cout<<"La lampara esta prendida."<<std::endl;//Salida de datos
}

void Interface::apagar(){//Metodo void
    std::cout<<"La lampara esta apagada."<<std::endl;//Salida de datos
}

