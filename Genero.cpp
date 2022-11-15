#include "Genero.h"

Genero::Genero(string Nombre)
{
    this->Nombre = Nombre;
}

bool Genero::equals(Object* objeto)
{
    return false;
}

string Genero::toString()
{
    return string();
}

string Genero::getNombre()
{
    return this->Nombre;
}

void Genero::setNombre(string Nombre)
{
    this->Nombre = Nombre;
}
