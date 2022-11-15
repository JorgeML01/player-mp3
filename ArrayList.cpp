#include "ArrayList.h"
#include <iostream>

#define NULL 0
using namespace std;


ArrayList::ArrayList()
{
	n = 0;
	capacidad = 10;
	array = new Object * [capacidad];
	for (int i = 0; i < capacidad; i++)
		array[i] = NULL;

}

ArrayList::~ArrayList()
{
	//libera el contenido de las casillas
	for (int i = 0; i < capacidad; i++) {
		if (array[i]) {
			delete array[i];
		}
	}
	//libera el arreglo
	delete[] array;
}

void ArrayList::anula()
{
	//Validamos que la lista no este vacia.
	if (!vacia()) {
		for (int i = this->n; i > 0; --i) {
			suprime(i);
		}
	}
}

bool ArrayList::inserta(Object* objeto, int posicion)
{
	//Validando el rango.
	if (posicion >= 1 && posicion <= this->n + 1) {
		//Determinamos si hay corrimientos.
		for (int i = this->n; i >= posicion; i--) {
			this->array[i] = this->array[i - 1];
		}
		this->array[posicion - 1] = objeto;
		this->n++;
		return true;
	}
	return false;
}

Object* ArrayList::siguiente(int posicion)
{
	//Para que no nos retorne posicion 1 al pasarle posicion 0 porque 0 esta indefinido.
	if (posicion > 0) {
		return recupera(posicion + 1);
	}
	else {
		return nullptr;
	}
}

Object* ArrayList::anterior(int posicion)
{
	//Para que no nos retorne n al pasarle n+1 porque n+1 esta indefinido.
	if (posicion <= this->n) {
		return recupera(posicion - 1);
	}
	else {
		return nullptr;
	}
}

void ArrayList::append(Object* objeto)
{
	inserta(objeto, this->n + 1);
}

void ArrayList::imprimir_lista()
{
	cout << "\nLista:";
	for (int i = 0; i < this->n; i++)
		cout << "\n" << i + 1 << ". " << this->array[i]->toString();
	cout << "\n";
}

bool ArrayList::suprime(int posicion)
{
	//Validamos la posicion.
	if (posicion >= 1 && posicion <= this->n) {
		delete this->array[posicion - 1];
		this->array[posicion - 1] = NULL;

		//Verificar si hay que hacer los corrimientos.
		for (int i = posicion - 1; i < this->n; i++) {
			this->array[i] = this->array[i + 1];
		}
		this->n--;
		return true;
	}
	else {
		return false;
	}
}

Object* ArrayList::recupera(int posicion)
{
	if (posicion >= 1 && posicion <= this->n)
		return this->array[posicion - 1];
	return nullptr;
}

int ArrayList::localiza(Object* objeto)
{
	for (int i = 0; i < this->n; i++) {
		if (objeto->equals(this->array[i]))
			//Hacemos la traduccion/conversion.
			return i + 1;
	}
	return -1;
}

Object* ArrayList::primero()
{
	//Validando que no este vacia.
	if (!vacia())
		return this->array[0];
	return nullptr;
}

bool ArrayList::vacia()
{
	return this->n == 0;
}




