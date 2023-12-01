#pragma once
#include "dociles.h"

#ifndef PROTAGONISTA_H
#define PROTAGONISTA_H

class Protagonista : public Dociles {
	private:
		string genero;
		int dinero;

	public:
		Protagonista(int vida, int velocidad, string nombre, string genero, int dinero);

};

#endif