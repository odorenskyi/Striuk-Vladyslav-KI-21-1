#ifndef MODULESSTRIUK_H_INCLUDED
#define MODULESSTRIUK_H_INCLUDED

#include <string>
#include <cstring>
#include <sstream>
#include <regex>

#define PI 3.14159265359

using namespace std;

class ClassLab12_Striuk
{
public:
    ClassLab12_Striuk();

    float getPipeHeight() { return pipeHeight; }
    float getPipeRadius() { return pipeRadius; }
    float getPipeSquare() { return pipeSquare(pipeHeight, pipeRadius); }

    void setPipeHeight(string height, float&f);
    void setPipeRadius(string radius, float&f);

private:
    float pipeHeight;
    float pipeRadius;
    float pipeSquare(float height, float radius) { return 2 * PI * radius * height; };
};

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
#endif // MODULESSTRIUK_H_INCLUDED
