#include "ModulesStriuk/modulesstriuk.h"

const double PI = 3.14159265;

float s_calculation(int x, int y, int z)
{
    return log(x - y) + sqrt((PI * pow(x, 2)) / x + (z / (2 * pow(y, 2))));
}
