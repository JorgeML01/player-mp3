#ifndef SONGINFOFILEVARIABLE_H
#define SONGINFOFILEVARIABLE_H

#include "TDAArchivo.h"
#include "SongInfo.h"
#include "TDAList.h"

class SongInfoFileVariable : public TDAArchivo
{
public:
	//Constructor.
	SongInfoFileVariable();

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
