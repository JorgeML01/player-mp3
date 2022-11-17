#ifndef TDAARCHIVO_H
#define TDAARCHIVO_H

#include <fstream>
#include <string>
using namespace std;

class TDAArchivo
{
public:
	//Constructor.
	TDAArchivo(string fileName);
	TDAArchivo();
	//Funciones.
	void cerrar();
	void abrir();
	virtual void escribir() = 0;
	virtual void leer() = 0;
private:
	//Atributos.
	char* data;
	//Tamano de los datos.
	int size;
	//Nombre del archivo.
	string fileName;
	//Objeto para abrir el archivo.
	fstream my_file;
};

#endif
