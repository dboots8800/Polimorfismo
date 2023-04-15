#ifndef AVE
#define AVE

#include "animal.h"
#include "string"

class Ave : public Animal
{
private:
    int cantidad_alas;
    Ave(std::string _nombre, int _cantidad_alas) : Animal(_nombre), cantidad_alas(_cantidad_alas) {}
};

#endif