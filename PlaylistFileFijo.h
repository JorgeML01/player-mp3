#ifndef PLAYLISTFIJO_H
#define PLAYLISTFIJO_H

#include "TDAArchivo.h"
#include "Playlist.h"

class PlaylistFileFijo : public TDAArchivo
{
public:
	//Constructor.
	PlaylistFileFijo(string fileName);

	//Funciones.
	virtual void escribir();
	virtual void leer();
};

#endif