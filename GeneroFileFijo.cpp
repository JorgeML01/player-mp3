#include "GeneroFileFijo.h"

GeneroFileFijo::GeneroFileFijo(string fileName) : TDAArchivo(fileName)
{
}

void GeneroFileFijo::escribir()
{
}

void GeneroFileFijo::leer()
{
}

TDAList* GeneroFileFijo::getGeneros()
{
	return this->Generos;
}

void GeneroFileFijo::setGeneros(TDAList* Generos)
{
	this->Generos = Generos;
}
