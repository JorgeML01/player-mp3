#ifndef GENEROFILEFIJO_H
#define GENEROFILEFIJO_H

#include "TDAArchivo.h"
#include "Genero.h"
#include "TDAList.h"

class GeneroFileFijo : public TDAArchivo
{
public:
	//Constructor.
	GeneroFileFijo();

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
