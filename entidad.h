#pragma once
#ifndef ENTIDAD_H
#define ENTIDAD_H
#include "colisiones..h"
#include "skins.h"

//clase abstracta Entidad

class Entidad: public Colisiones, public Skins{
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