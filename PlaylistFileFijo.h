#ifndef PLAYLISTFIJO_H
#define PLAYLISTFIJO_H

#include "TDAArchivo.h"
#include "Playlist.h"

class PlaylistFileFijo : public TDAArchivo
{
public:
	//Constructor.
	PlaylistFileFijo();

	//Funciones.
	virtual void escribir();
	virtual void leer();
};

#endif