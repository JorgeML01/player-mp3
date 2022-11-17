#include "SongInfoFileFijo.h"

SongInfoFileFijo::SongInfoFileFijo(string fileName) : TDAArchivo(fileName)
{
}

void SongInfoFileFijo::escribir()
{
}

void SongInfoFileFijo::leer()
{
}

TDAList* SongInfoFileFijo::getSongInfos()
{
    return this->SongInfos;
}

void SongInfoFileFijo::setSongInfos(TDAList* SongInfos)
{
    this->SongInfos = SongInfos;
}
