#ifndef MAMIFERO_H
#define MAMIFERO_H

#include "animal.h"
#include "string"

class Mamifero : public Animal
{
private:
    int cantidad_patas;

public:
    Mamifero(std::string _nombre, int _cantidad_patas);

    int getCantidadPatas();
};

#endif