#include "protagonista.h"

Protagonista::Protagonista(int vida, int velocidad, string nombre, string genero, int dinero):Dociles(vida, velocidad, nombre)
{
	this->genero = genero;
}
