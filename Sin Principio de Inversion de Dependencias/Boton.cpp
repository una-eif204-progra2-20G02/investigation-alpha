//
// Created by computer on 8/21/2020.
//


#include "Boton.h"

Boton::Boton() {//Constructor
}


Boton::~Boton() {//Destructor
    delete _lampara; //Liberacion de memmoria
}

void Boton::presionar(bool s){//Metodo void con decision
    Lampara* lamp = new Lampara();
    if(s==true){//Decicion
        lamp->enceder();//Salida de dato por llamada de puntero
    }
    else if(s==false){//Decision
        lamp->apagar();//Salida de dato por llamada de puntero
    }
}