#ifndef SKINS_CPP
#define SKINS_CPP

#include "skins.h"


Skins::Skins(vector<string> &skinFiles, vector <IntRect*> &dimensiones, Sprite* sprite)
{
    this->skinFiles = skinFiles;
    this->dimensiones = dimensiones;
    this->sprite = sprite;
}

string Skins::getSkinFiles(int pos)
{
    return this->skinFiles[pos];
}

void Skins::setSkinFiles(vector<string>& skinFiles)
{
    this->skinFiles = skinFiles;
}

Sprite* Skins::getSprite()
{
    return this->sprite;
}

#endif