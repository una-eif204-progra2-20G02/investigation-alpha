//
// Created by computer on 8/13/2020.
//

#ifndef BASIC_00_EXAMPLE_BOTON_H
#define BASIC_00_EXAMPLE_BOTON_H

#include "Lampara.h"
class Boton {
public:
    Boton();
    virtual ~Boton();
    void presionar(bool);
private:
    Lampara * _lampara;
};


#endif //BASIC_00_EXAMPLE_BOTON_H
