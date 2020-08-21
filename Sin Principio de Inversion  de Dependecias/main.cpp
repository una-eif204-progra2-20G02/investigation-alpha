/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: computer
 *
 * Created on August 6, 2020, 9:38 AM
 */


#include "Boton.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    std::cout<<"Sin Principio de Inversion de Dependencias."<<std::endl;//Salida de pantalla
    Boton b;//Llamaa a clase Boton
    b.presionar(true);//Puntero a metodo void
    b.presionar(false);//Puntero a metodo void
    return 0;//Regesar 0
}

