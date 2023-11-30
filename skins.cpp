#include "skins.h"

Skins::Skins()
{
}

Skins::Skins(vector<string> &skinFiles, vector <IntRect> &dimensiones,Texture &textura)
{
    this->skinFiles = skinFiles;
    textura = textura;
}

string Skins::getSkinFiles(int pos)
{
    return skinFiles[pos];
}

void Skins::setSkinFiles(vector<string>& skinFiles)
{
    this->skinFiles = skinFiles;
}
