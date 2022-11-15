#include "Playlist.h"

Playlist::Playlist(string nombre)
{
    this->Nombre = Nombre;
}

string Playlist::getNombre()
{
    return this->Nombre;
}

TDAList* Playlist::getSongInfos()
{
    return this->SongInfos;
}

void Playlist::setNombre(string Nombre)
{
    this->Nombre = Nombre;
}

void Playlist::setSongInfos(TDAList* SongInfos)
{
    this->SongInfos = SongInfos;
}
