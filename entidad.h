#pragma once
#ifndef ENTIDAD_H
#define ENTIDAD_H
#include "colisiones..h"
class Entidad: public Colisiones {
private: 
	int vida; 
	int velocidad; 
public: 
	Entidad();
	Entidad(int vida, int velocidad); 
	int getVelocidad(); 
	int getVida();
	void setVelocidad(float nuevaVelocidad);
	void setVida(int nuevaVida); 
};
#endif 
//clase abstracta Entidad