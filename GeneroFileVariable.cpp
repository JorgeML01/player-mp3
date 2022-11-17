#include "GeneroFileVariable.h"

GeneroFileVariable::GeneroFileVariable(string fileName) : TDAArchivo(fileName)
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
