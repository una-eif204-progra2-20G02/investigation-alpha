//
// Created by computer on 8/21/2020.
//


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
