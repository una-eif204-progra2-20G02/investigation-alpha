//
// Created by computer on 8/21/2020.
//


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

