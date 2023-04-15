#include "mamifero.h"

Mamifero::Mamifero(std::string _nombre, int _cantidad_patas) : Animal(_nombre), cantidad_patas(_cantidad_patas) {}

int Mamifero::getCantidadPatas()
{
    return cantidad_patas;
}