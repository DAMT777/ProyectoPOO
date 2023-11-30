#pragma once
#ifndef BONUS_H
#define BONUS_H
#include "Encantamientos.h"
class Bonus : public Encantamientos {
	private:
		string descripcion;
	public:
		Bonus(){}
		Bonus(string descripcion){
			this->descripcion = descripcion;
		}
		void setDescripcion(string descripcion);
		string getDescripcion();
		//virtual void textura(sf::textura);
};



#endif

