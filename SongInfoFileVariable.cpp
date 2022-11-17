#include "SongInfoFileVariable.h"

SongInfoFileVariable::SongInfoFileVariable(string fileName) : TDAArchivo(fileName)
{
}

void SongInfoFileVariable::escribir()
{
}

void SongInfoFileVariable::leer()
{
}

TDAList* SongInfoFileVariable::getSongInfos()
{
    return this->SongInfos;
}

void SongInfoFileVariable::setSongInfos(TDAList* SongInfos)
{
    this->SongInfos = SongInfos;
}
