#pragma once
#ifndef COLISIONES_H
#define COLISIONES_H
class Colisiones {
	public:
		virtual float posicion_relativa(int x, int y) = 0;
		virtual bool validar() = 0;
	};
#endif
