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
		vector <IntRect*> dimensiones;
		Sprite *sprite;
	public:
		Skins(vector <string> &skinFiles, vector <IntRect*> &dimensiones, Sprite*sprite);
		string getSkinFiles(int pos);
		void setSkinFiles(vector <string> &skinFiles);
		Sprite* getSprite();
};


#endif 
