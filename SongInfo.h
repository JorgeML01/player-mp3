#ifndef SONGINFO_H
#define SONGINFO_H

#include "Object.h"
#include "Genero.h"

class SongInfo : public Object
{
public:
	//Constructor.
	SongInfo(string Nombre, string Disco, string Artista, string RutaMp3);

	//Funciones.
	virtual bool equals(Object* objeto);
	virtual string toString();

	//Getters.
	string getNombre();
	string getDisco();
	string getArtista();
	string getRutaMp3();
	
	//Setters.
	void setNombre(string Nombre);
	void setDisco(string Disco);
	void setArtista(string Artista);
	void setRutaMp3(string RutaMp3);

private:
	//Atributos.
	string Nombre;
	string Disco;
	string Artista;
	string RutaMp3;
};

#endif