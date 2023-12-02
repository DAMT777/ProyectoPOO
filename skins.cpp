#ifndef SKINS_CPP
#define SKINS_CPP

#include "skins.h"


Skins::Skins(IntRect* dimension, Texture *textura):
    dimension(dimension), sprite(new Sprite(*textura)){}


void Skins::setDimension(IntRect* dimension)
{
    this->dimension = dimension;
}

Sprite* Skins::getSprite()
{
    return this->sprite;
}

#endif