#ifndef PLAYLISTFILEVARIABLE_H
#define PLAYLISTFILEVARIABLE_H

#include "TDAArchivo.h"
#include "Playlist.h"

class PlaylistFileVariable : public TDAArchivo
{
public:
	//Constructor.
	PlaylistFileVariable(string fileName);

	//Funciones.
	virtual void escribir();
	virtual void leer();

};

#endif
