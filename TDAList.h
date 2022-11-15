#ifndef TDALIST_H
#define TDALIST_H

#include "Object.h"

class TDAList
{
public:
	/**
	 * Elimina todos los elementos (Object) que contenga la lista
	 * en ese momento.
	 * @return
	 */
	virtual void anula() = 0;
	/**
	 * Inserta un objeto objeto en la posici�n posicion de la lista
	 * haciendo corrimientos en caso de ser necesario.
	 * @param objeto de tipo Object* que se insertar� en la lista.
	 * @param posici�n de tipo entero donde se insertar� el objeto.
	 * @return true en caso de que se haya podido insertar el elemento
	 * a la lista.
	 */
	virtual bool inserta(Object* objeto, int posicion) = 0;
	/**
	 * Obtiene el objeto siguiente a la posici�n que nosotros
	 * le pasemos por par�metro.
	 * @param posicion de tipo entero del elemento
	 * previo al que se buscar�.
	 * @return el objeto siguiente a la posici�n enviada.
	 */
	virtual Object* siguiente(int posicion) = 0;
	/**
	 * Obtiene el objeto anterior de la posicion que nosotros
	 * le pasemos por parametro.
	 * @param posicion de tipo entero.
	 * @return el objeto anterior de la posici�n enviada.
	 */
	virtual Object* anterior(int posicion) = 0;
	/**
	 * Inserta un elemento al final de la lista.
	 * @param objeto de tipo Object* que se agregar�
	 * al final de la lista.
	 */
	virtual void append(Object* objeto) = 0;
	/**
	 * Imprime todos los elementos que la lista contenga
	 * en ese momento.
	 * @return
	 */
	virtual void imprimir_lista() = 0;
	/**
	 * Elimina el elemento en la posicion posicion de la lista
	 * haciendo corrimientos en caso de ser necesario.
	 * @param posicion de tipo entero que ser� la posici�n a eliminar.
	 * @return true en caso de que se haya podido suprimir el objeto.
	 */
	virtual bool suprime(int posicion) = 0;
	/**
	 * Obtiene el objeto de la posicion solicitada
	 * por el usuario.
	 * @param posicion de tipo entero del lugar donde
	 * se encuentre el elemento que se desea recuperar.
	 * @return el objeto de la posici�n solicitada.
	 */
	virtual Object* recupera(int posicion) = 0;
	/**
	 * Busca un objeto entre todos los objetos que se encuentren
	 * en la lista y retorna la posici�n del objeto pasado
	 * por par�metro en caso de encontrarlo.
	 * @param objeto de tipo Object* que sera el que se buscara
	 * con la funcion.
	 * @return entero que sera la posici�n del objeto en la lista.
	 */
	virtual int localiza(Object* objeto) = 0;
	/**
	 * Nos da la posici�n del primer elemento de la lista
	 * en caso de que esta tenga.
	 * @return un objeto que sera el de la primera posici�n.
	 */
	virtual Object* primero() = 0;
	/**
	 * Verifica si la lista esta vacia o no.
	 * @return true en caso de que la lista esta vacia.
	 */
	virtual bool vacia() = 0;

protected:
};

#endif