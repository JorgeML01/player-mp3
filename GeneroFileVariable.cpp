#include "GeneroFileVariable.h"

GeneroFileVariable::GeneroFileVariable()
{
}

void GeneroFileVariable::escribir()
{
}

void GeneroFileVariable::leer()
{
}

TDAList* GeneroFileVariable::getGeneros()
{
	return this->Generos;
}

void GeneroFileVariable::setGeneros(TDAList* Generos)
{
	this->Generos = Generos;
}
