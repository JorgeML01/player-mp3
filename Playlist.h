#ifndef PLAYLIST_H
#define PLAYLIST_H

#include "SongInfo.h"
#include "ArrayList.h"

class Playlist
{
public:
	//Constructor.
	Playlist(string Nombre);

	//Getters.
	string getNombre();
	TDAList* getSongInfos();

	//Setters.
	void setNombre(string Nombre);
	void setSongInfos(TDAList* SongInfos);
private:
	//Atributos.
	string Nombre;
	TDAList* SongInfos;
};

#endif