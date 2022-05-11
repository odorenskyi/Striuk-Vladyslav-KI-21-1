#include "ModulesStriuk.h"

using namespace std;

ClassLab12_Striuk::ClassLab12_Striuk()
{
    pipeHeight = 1.0;
    pipeRadius = 1.0;
}

void ClassLab12_Striuk::setPipeHeight(string height, float&f)
{
    char junk;
    height = regex_replace(height, regex(","), ".");
    stringstream ss(height);
    if (ss >> f && !(ss >> junk))
        pipeHeight = stof(height);
}

void ClassLab12_Striuk::setPipeRadius(string radius, float&f)
{
    char junk;
    radius = regex_replace(radius, regex(","), ".");
    stringstream ss(radius);
    if (ss >> f && !(ss >> junk))
        pipeRadius = stof(radius);
}
