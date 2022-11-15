#include "SongInfo.h"



SongInfo::SongInfo(string Nombre, string Disco, string Artista, string RutaMp3)
{
    this->Nombre = Nombre;
    this->Disco = Disco;
    this->Artista = Artista;
    this->RutaMp3 = RutaMp3;
}

bool SongInfo::equals(Object* objeto)
{
    return false;
}

string SongInfo::toString()
{
    return string();
}

string SongInfo::getNombre()
{
    return this->Nombre;
}

string SongInfo::getDisco()
{
    return this->Disco;
}

string SongInfo::getArtista()
{
    return this->Artista;
}

string SongInfo::getRutaMp3()
{
    return this->RutaMp3;
}

void SongInfo::setNombre(string Nombre)
{
    this->Nombre = Nombre;
}

void SongInfo::setDisco(string Disco)
{
    this->Disco = Disco;
}

void SongInfo::setArtista(string Artista)
{
    this->Artista = Artista;
}

void SongInfo::setRutaMp3(string RutaMp3)
{
    this->RutaMp3 = RutaMp3;
}
