//
// Created by computer on 8/21/2020.
//


#include "Boton.h"

Boton::Boton() {//Constructor
}


Boton::~Boton() {//Destructor
}

void Boton::presionar(bool s){//Metodo void con decision
    if(s==true){//Decicion
        _lampara->enceder();//Salida de dato por llamada de puntero
    }
    else if(s==false){//Decision
        _lampara->apagar();//Salida de dato por llamada de puntero
    }
}