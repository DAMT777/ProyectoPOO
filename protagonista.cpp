#include "protagonista.h"
#include <cmath>
#include <fstream>
Protagonista::Protagonista(int vida, int velocidad, string nombre, string genero, int dinero):
	Dociles(vida, velocidad, nombre), genero(genero), dinero(dinero){}

int Protagonista::getDinero()
{
	return this->dinero;
}

void Protagonista::setDinero(int dinero)
{
	this->dinero = dinero;
}

string Protagonista::getGenero()
{
	return this->genero;
}

void Protagonista::setGenero(string genero)
{
	this->genero = genero;
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
	string archivo;
	if (this->getGenero() == "M") {
		archivo = "rutas_male.txt";
	}
	else {
		archivo = "rutas_female.txt";
	}
	//cambiar el sprite segun la tecla que se presione
	ifstream archivoRutas(archivo);
	vector <string> rutas;
	//no esta lista la funcionalidad aún
	if (key->isKeyPressed(Keyboard::A)){

		getSkin()->getSprite()->move(-5, 0);

	}
	
}


