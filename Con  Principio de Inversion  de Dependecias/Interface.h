/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Interface.h
 * Author: computer
 *
 * Created on August 6, 2020, 9:59 AM
 */

#ifndef INTERFACE_H
#define INTERFACE_H
#include "Lampara.h"//Llamada clase Lampara
class Interface: public Lampara {//Lamapaa en herencica y declaracion de clase Interface
public://Datos publicos
    Interface();//Constructor
    virtual ~Interface();//Destructor
    void encender();//Metodo void
    void apagar();//Metodo void

};

#endif /* INTERFACE_H */

