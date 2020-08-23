//
// Created by computer on 8/21/2020.
//

#ifndef CON_PRINCIPIO_DE_INVERSION_DE_DEPENDENCIAS_LAMPARA_H
#define CON_PRINCIPIO_DE_INVERSION_DE_DEPENDENCIAS_LAMPARA_H
#include "IInteruptor.h"
#include <iostream>//Biblioteca iostream

class Lampara: public IInteruptor{//Declaracion clase Lampara y herencia de clase Interface IInteruptor
public://Datos publicos
    Lampara();//Constructor
    virtual ~Lampara();//Destructor
    virtual void encender()override;//Metodo void heredado de clase Interface IInteruptor
    virtual void apagar() override ;//Metodo void heredado de clase Interface IInteruptor
};
#endif //CON_PRINCIPIO_DE_INVERSION_DE_DEPENDENCIAS_LAMPARA_H
