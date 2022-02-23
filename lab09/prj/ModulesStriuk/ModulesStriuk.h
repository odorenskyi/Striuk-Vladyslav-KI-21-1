#ifndef MODULESSTRIUK_H_INCLUDED
#define MODULESSTRIUK_H_INCLUDED

enum ukrSize {
    S = 23,
    M = 25,
    L = 27,
    XL = 29,
    XXL = 31
};

struct money {
    float salary;
    float fizosoba;
    float pensiya;
    float bezrob;
    float pratsa;
    float completeSalary;
};

double s_calculation(float x, float y, float z);
money salaryAndTaxesOutput(int workingHours[5]);
void socksSizeStandart(unsigned char ukrSoksSize);
void numberByteManipulation(unsigned int number);

#endif // MODULESSTRIUK_H_INCLUDED
