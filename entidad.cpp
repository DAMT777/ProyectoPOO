#ifndef ENTIDADES_CPP
#define ENTIDADES_CPP
#include "entidad.h"
#include<iostream>
Entidad::Entidad(){}
Entidad::Entidad(int vida, int velocidad) {} 
int Entidad::getVelocidad() {
	return velocidad; 
}
int Entidad::getVida() {
	return vida; 
}
void Entidad::setVelocidad(float nuevaVelocidad) {
	velocidad = nuevaVelocidad; 
}
void Entidad::setVida(int nuevaVida) {
	vida = nuevaVida; 
}
#endif 
