//
// Created by computer on 8/21/2020.
//

#ifndef SIN_PRINCIPIO_DE_INVERSION_DE_DEPENDENCIAS_BOTON_H
#define SIN_PRINCIPIO_DE_INVERSION_DE_DEPENDENCIAS_BOTON_H

#include "Lampara.h"//Llamada de clase Lampara
class Boton {//Declaracion de clase Boton
public://Datos Publicos
    Boton();//Constructor
    virtual ~Boton();//Destructor
    void presionar(bool);//Void con decicision
private:
    Lampara * _lampara;//Puntero a la clase Lampara
};

#endif //SIN_PRINCIPIO_DE_INVERSION_DE_DEPENDENCIAS_BOTON_H
