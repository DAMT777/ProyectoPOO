#pragma once
#ifndef DOCILES_H
#define DOCILES_H
#include "entidad.h"
class Dociles : public Entidad {
	private:
		string nombre;
	public:
		Dociles(int, int);
		string getNombre();
		void setNombre(string);
};


#endif