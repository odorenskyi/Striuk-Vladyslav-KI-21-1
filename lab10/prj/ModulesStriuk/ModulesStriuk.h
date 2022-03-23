#ifndef MODULESSTRIUK_H_INCLUDED
#define MODULESSTRIUK_H_INCLUDED
#include <cstring>

using namespace std;

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

void abilityToEdit();
void fillInputTxtFile(string ukrWord);
void authorInfo();
int vowelsCountInFile();
void findWordInPoem(string ukrWord);

#endif // MODULESSTRIUK_H_INCLUDED
