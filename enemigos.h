#pragma once
#ifndef ENEMIGOS_H
#define ENEMIGOS_H
#include "entidad.h"
#include <iostream>
using namespace std; 
class Enemigos : public Entidad{
public: 
	Enemigos(); 
	Enemigos(int vida, int velocidad); 
	virtual int getTipo() = 0; 
}; 
#endif 
//clase abstracta enemigos 