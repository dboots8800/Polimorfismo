#ifndef ANIMAL_H
#define ANIMAL_H

#include "string"

class Animal
{
private:
    std::string nombre;

public:
    Animal(std::string _nombre) : nombre(_nombre) {}
};

#endif