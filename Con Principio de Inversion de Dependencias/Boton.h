//
// Created by computer on 8/21/2020.
//

#ifndef CON_PRINCIPIO_DE_INVERSION_DE_DEPENDENCIAS_BOTON_H
#define CON_PRINCIPIO_DE_INVERSION_DE_DEPENDENCIAS_BOTON_H

#include "Interface.h"//Llamada de Clase Interface
class Boton {//Declaracion de Clase Boton
public://Datos publicos
    Boton();//Constructor
    virtual ~Boton();//Destrucntor
    void preionar(bool);//Metodo void ccon decicion
private:
    Interface _i;//Puntero a la Clase Interface
};

#endif //CON_PRINCIPIO_DE_INVERSION_DE_DEPENDENCIAS_BOTON_H
