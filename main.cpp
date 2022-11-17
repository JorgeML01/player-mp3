#include <iostream>
#include "Genero.h"
#include "GeneroFileFijo.h"

int main(int argc, char** argv) {

	Genero* genero1 = new Genero("testGenero");
	delete genero1;

	GeneroFileFijo* generoFileFijo1 = new GeneroFileFijo("testGeneroFileFijo");
	delete generoFileFijo1;

	return 0;
}