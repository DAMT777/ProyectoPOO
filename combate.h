#pragma once
//clase interfaz
#ifndef COMBATE_H
#define COMBATE_H

class Combate{
	public:
		virtual void barraDeVida() = 0;
		virtual int ataque(/* Arma* arma */) = 0;
};



#endif 