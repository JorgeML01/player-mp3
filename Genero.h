#ifndef GENERO_H
#define GENERO_H

#include "Object.h"

class Genero : public Object
{
public:
	//Constructor.
	Genero(string Nombre);

	//Funciones.
	virtual bool equals(Object* objeto);
	virtual string toString();

	//Getters.
	string getNombre();

	//Setters.
	void setNombre(string Nombre);
private:
	//Atributos.
	string Nombre;
};

#endif
