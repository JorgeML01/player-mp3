#ifndef ARRAYLIST_H
#define ARRAYLIST_H

#include "TDAList.h"

class ArrayList : public TDAList
{
public:
	//Constructor y destructor.
	ArrayList();
	~ArrayList();

	//--O(n)
	virtual void anula();
	//--O(n)
	virtual bool inserta(Object*, int);
	//--O(1)
	virtual Object* siguiente(int);
	//--O(1)
	virtual Object* anterior(int);
	//--O(1)
	virtual void append(Object*);
	//--O(n)
	virtual void imprimir_lista();
	//--O(n)
	virtual bool suprime(int);
	//--O(1)
	virtual Object* recupera(int);
	//--O(n)
	virtual int localiza(Object*);
	//--O(1)
	virtual Object* primero();
	//--O(1)
	virtual bool vacia();

protected:
	//Array donde se almacenar�n los elementos de la lista.
	Object** array;
	//Capacidad m�xima de objetos a almacenar en la lista.
	int capacidad;
	//Cantidad actual de objetos en la lista.
	int n;
};

#endif