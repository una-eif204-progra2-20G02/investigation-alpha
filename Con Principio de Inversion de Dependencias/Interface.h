//
// Created by computer on 8/21/2020.
//

#ifndef CON_PRINCIPIO_DE_INVERSION_DE_DEPENDENCIAS_INTERFACE_H
#define CON_PRINCIPIO_DE_INVERSION_DE_DEPENDENCIAS_INTERFACE_H

#include "Lampara.h"//Llamada clase Lampara
class Interface: public Lampara {//Lamapaa en herencica y declaracion de clase Interface
public://Datos publicos
    Interface();//Constructor
    virtual ~Interface();//Destructor
    void encender();//Metodo void
    void apagar();//Metodo void

};

#endif //CON_PRINCIPIO_DE_INVERSION_DE_DEPENDENCIAS_INTERFACE_H
