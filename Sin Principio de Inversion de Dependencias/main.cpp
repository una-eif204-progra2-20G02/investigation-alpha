
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
