#include "protagonista.h"
#include <cmath>
#include <fstream>
Protagonista::Protagonista(int vida, int velocidad, string nombre, int dinero):
	Dociles(vida, velocidad, nombre), dinero(dinero){}

int Protagonista::getDinero()
{
	return this->dinero;
}

void Protagonista::setDinero(int dinero)
{
	this->dinero = dinero;
}





string Protagonista::actualizarInventario(bool validez, Objetos* objeto)
{
	//por implementar
	if (validez) {
		inventario.push_back(objeto);
	}
	else {
		
	}
}

Skins* Protagonista::showInventario()
{
	//por implementar
	return nullptr;
}



void Protagonista::movimientos(Keyboard* key)
{

	string archivo = "rutas_prota.txt";
	
	//cambiar el sprite segun la tecla que se presione
	
	//no esta lista la funcionalidad aún
	if (key->isKeyPressed(Keyboard::A)){

		getSkin()->getSprite()->move(-5, 0);

	}
	
}


