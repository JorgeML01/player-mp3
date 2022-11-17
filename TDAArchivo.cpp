#include "TDAArchivo.h"

//Constructor.
TDAArchivo::TDAArchivo(string fileName)
{
	this->fileName = fileName;
}

TDAArchivo::TDAArchivo() {

}

//Funciones.
void TDAArchivo::cerrar()
{
	this->my_file.close();
}

void TDAArchivo::abrir()
{
	this->my_file.open(this->fileName, fstream::in | fstream::out);
}
