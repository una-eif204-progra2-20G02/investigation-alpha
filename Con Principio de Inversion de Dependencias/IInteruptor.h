//
// Created by computer on 8/21/2020.
//

#ifndef CON_PRINCIPIO_DE_INVERSION_DE_DEPENDENCIAS_IINTERUPTOR_H
#define CON_PRINCIPIO_DE_INVERSION_DE_DEPENDENCIAS_IINTERUPTOR_H
class IInteruptor{//Lamapaa en herencica y declaracion de clase Interface IInteruptor
public://Datos publicos
    IInteruptor();//Constructor
    virtual ~IInteruptor();//Destructor
    virtual void encender()=0;//Metodo void puro virtual
    virtual void apagar()=0;//Metodo void puro virtual

};

#endif //CON_PRINCIPIO_DE_INVERSION_DE_DEPENDENCIAS_IINTERUPTOR_H
