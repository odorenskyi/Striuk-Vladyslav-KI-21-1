#include "ModulesStriuk.h"

using namespace std;

ClassLab12_Striuk::ClassLab12_Striuk()
{
    pipeHeight = 0.01;
    pipeRadius = 0.01;
}

void ClassLab12_Striuk::setPipeHeight(string height, float&f)
{
    pipeHeight = 0.01;
    char junk;
    height = regex_replace(height, regex(","), ".");
    stringstream ss(height);
    if (ss >> f && !(ss >> junk)) {
        if (stof(height) >= 0.01 && stof(height) <= 420) {
            pipeHeight = stof(height);
        }
    }
}

void ClassLab12_Striuk::setPipeRadius(string radius, float&f)
{
    pipeRadius = 0.01;
    char junk;
    radius = regex_replace(radius, regex(","), ".");
    stringstream ss(radius);
    if (ss >> f && !(ss >> junk)) {
        if (stof(radius) >= 0.01 && stof(radius) <= 44) {
            pipeRadius = stof(radius);
        }
    }
}
