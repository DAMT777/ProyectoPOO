#pragma once
#ifndef DOCILES_CPP
#define DOCILES_CPP
#include "dociles.h"

Dociles::Dociles(int vida, int velocidad): Entidad(vida, velocidad){}

string Dociles::getNombre()
{
	return this->nombre;
}
void Dociles::setNombre(string nombre) {
	this->nombre = nombre;
}


#endif