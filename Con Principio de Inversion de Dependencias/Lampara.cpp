//
// Created by computer on 8/21/2020.
//

#include "Lampara.h"

Lampara::Lampara():IInteruptor() {//Constructor
}



Lampara::~Lampara() {//Destructor
}

void Lampara::encender(){//Metodo void
    std::cout<<"La lampara esta prendida."<<std::endl;//Salida de datos
}

void Lampara::apagar() {//Metodo void
    std::cout<<"La lampara esta apagada."<<std::endl;//Salida de datos
}