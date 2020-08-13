//
// Created by computer on 8/13/2020.
//


#include "Boton.h"

Boton::Boton() {
}

Boton::~Boton() {
}

void Boton::presionar(bool s){
    if(s==true){
        _lampara->enceder();
    }
    else if(s==false){
        _lampara->apagar();
    }
}