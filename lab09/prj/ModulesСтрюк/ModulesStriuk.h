#ifndef MODULESSTRIUK_H_INCLUDED
#define MODULESSTRIUK_H_INCLUDED
#include <cmath>

enum ukrSize {
    S = 23,
    M = 25,
    L = 27,
    XL = 29,
    XXL = 31
};

double s_calculation(float x, float y, float z);
void salaryAndTaxesOutput(unsigned char workingHours[5]);
void socksSizeStandart(unsigned char ukrSoksSize);
void numberByteManipulation(unsigned int number);

#endif // MODULESSTRIUK_H_INCLUDED
