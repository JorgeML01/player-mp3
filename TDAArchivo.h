#ifndef TDAARCHIVO_H
#define TDAARCHIVO_H

#include <string>
using namespace std;

class TDAArchivo
{
private:
	//Atributos.
	char* data;
	int size;
	string fileName;
public:
	//Constructor.
	TDAArchivo();

	//Funciones.
	void cerrar();
	void abrir();
	virtual void escribir() = 0;
	virtual void leer() = 0;
};

#endif
