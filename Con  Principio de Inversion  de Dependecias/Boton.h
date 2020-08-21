/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Boton.h
 * Author: computer
 *
 * Created on August 6, 2020, 10:03 AM
 */

#ifndef BOTON_H
#define BOTON_H
#include "Interface.h"//Llamada de Clase Interface
class Boton {//Declaracion de Clase Boton
public://Datos publicos
    Boton();//Constructor
    virtual ~Boton();//Destrucntor
    void preionar(bool);//Metodo void ccon decicion
private:
    Interface _i;//Puntero a la Clase Interface
};

#endif /* BOTON_H */

