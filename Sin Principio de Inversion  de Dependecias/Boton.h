/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Boton.h
 * Author: computer
 *
 * Created on August 6, 2020, 9:39 AM
 */

#ifndef BOTON_H
#define BOTON_H
#include "Lampara.h"//Llamada de clase Lampara
class Boton {//Declaracion de clase Boton
public://Datos Publicos
    Boton();//Constructor
    virtual ~Boton();//Destructor
    void presionar(bool);//Void con decicision
private:
    Lampara * _lampara;//Puntero a la clase Lampara
};

#endif /* BOTON_H */

