#ifndef GENEROFILEVARIABLE_H
#define GENEROFILEVARIABLE_H

#include "TDAArchivo.h"
#include "Genero.h"
#include "TDAList.h"

class GeneroFileVariable : public TDAArchivo
{
public:
	//Constructor.
	GeneroFileVariable();

	//Funciones.
	virtual void escribir();
	virtual void leer();

	//Getters.
	TDAList* getGeneros();

	//Setters.
	void setGeneros(TDAList* Generos);

private:
	TDAList* Generos;
};

#endif