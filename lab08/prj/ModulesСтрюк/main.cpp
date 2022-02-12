#include "ModulesStriuk.h"

double s_calculation(float x, float y, float z)
{
    const double PI = 3.14159;
    return log(x - y) + sqrt((PI * pow(x, 2)) / x + (z / (2 * pow(y, 2))));
}
