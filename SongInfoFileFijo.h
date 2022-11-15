#ifndef SONGINFOFILEFIJO_H
#define SONGINFOFILEFIJO_H

#include "TDAArchivo.h"
#include "SongInfo.h"
#include "TDAList.h"

class SongInfoFileFijo : public TDAArchivo
{
public:
	//Constructor.
	SongInfoFileFijo();

	//Funciones.
	virtual void escribir();
	virtual void leer();

	//Getters.
	TDAList* getSongInfos();

	//Setters.
	void setSongInfos(TDAList* SongInfos);
private:
	TDAList* SongInfos;
};

#endif