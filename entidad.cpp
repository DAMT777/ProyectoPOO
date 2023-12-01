#ifndef ENTIDADES_CPP
#define ENTIDADES_CPP
#include "entidad.h"
#include<iostream>
Entidad::Entidad(){}
Entidad::Entidad(int vida, int velocidad) {} 
int Entidad::getVelocidad() {
	return this->velocidad; 
}
int Entidad::getVida() {
	return this->vida; 
}
void Entidad::setVelocidad(float velocidad) {
	this->velocidad = velocidad; 
}
void Entidad::setVida(int vida) {
	this->vida = vida; 
}
Skins* Entidad::getSkin()
{
	return this->skin;
}
#endif 
