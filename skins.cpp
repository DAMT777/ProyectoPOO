#include "skins.h"

Skins::Skins()
{
}

Skins::Skins(vector<string> &skinFiles, vector <IntRect> &dimensiones)
{
    this->skinFiles = skinFiles;
    textura.loadFromFile(skinFiles[0]);
}

string Skins::getSkinFiles(int pos)
{
    return skinFiles[pos];
}

void Skins::setSkinFiles(vector<string>& skinFiles)
{
    this->skinFiles = skinFiles;
}
