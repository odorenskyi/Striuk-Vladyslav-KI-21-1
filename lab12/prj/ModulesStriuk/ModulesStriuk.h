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

#endif // MODULESSTRIUK_H_INCLUDED
