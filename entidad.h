#pragma once
#ifndef ENTIDAD_H
#define ENTIDAD_H
#include "colisiones..h"
#include "skins.h"
#include "animaciones.h"

//clase abstracta Entidad

class Entidad: public Animaciones, public Colisiones{
private: 
	int vida; 
	int velocidad; 
	Skins* skin;
public: 
	Entidad();
	Entidad(int vida, int velocidad); 
	int getVelocidad(); 
	int getVida();
	void setVelocidad(float velocidad);
	void setVida(int nuevaVida); 
	Skins* getSkin();

};
#endif 