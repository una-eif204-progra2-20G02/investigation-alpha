
#include <iostream>
#include "Boton.h"
using namespace std;
int main(int argc, char** argv) {
    std::cout<<"Con Principio de Inversion de Depencias. "<<std::endl;//Salida en pantalla
    Boton _b;//Llamda a la clase Boton
    _b.preionar(true);//Llamada metodo void con decision
    _b.preionar(false);//Llamada metodo void con decision
    return 0;//Regreasa 0
}


