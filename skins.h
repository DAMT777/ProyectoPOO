#pragma once
//clase abstracta
#ifndef SKINS_H
#define SKINS_H
#include <iostream>
#include <SFML/Graphics.hpp>
#include <vector>
using namespace std;
using namespace sf;
class Skins {
	private:
		vector <string> skinFiles;
		vector <IntRect> dimensiones;
		Texture textura;

	public:
		Skins();
		Skins(vector <string> &skinFiles, vector <IntRect> &dimensiones,Texture &textura);
		string getSkinFiles(int pos);
		void setSkinFiles(vector <string> &skinFiles);
		virtual Sprite getSkin() = 0;
};


#endif 
