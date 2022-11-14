#ifndef OBJECT_H
#define OBJECT_H

#include <string>
using namespace std;

class Object
{
public:
	/**
	 * Compara el objeto pasado por parámetro
	 * con este objeto.
	 * @param objeto que será comparado con este objeto.
	 * @return true en caso de que sean iguales.
	 */
	virtual bool equals(Object* objeto) = 0;
	/**
	 * Genera un string según el objeto y es retornado.
	 * @return string generado con lo que se le adicione.
	 */
	virtual string toString() = 0;

};

#endif