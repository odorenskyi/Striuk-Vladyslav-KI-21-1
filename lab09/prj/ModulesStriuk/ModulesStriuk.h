#ifndef MODULESSTRIUK_H_INCLUDED
#define MODULESSTRIUK_H_INCLUDED

struct money {
    float salary;
    float fizosoba;
    float pensiya;
    float bezrob;
    float pratsa;
    float completeSalary;
};

struct socks {
    int ukrSize;
    float usSize;
    int esSize1;
    int esSize2;
};

double s_calculation(float x, float y, float z);
money salaryAndTaxesOutput(int workingHours[5]);
socks socksSizeStandart(unsigned char ukrSoksSize);
int numberByteManipulation(int number);

#endif // MODULESSTRIUK_H_INCLUDED
