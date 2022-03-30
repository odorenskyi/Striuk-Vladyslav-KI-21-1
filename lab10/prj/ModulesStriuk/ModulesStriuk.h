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


void abilityToEdit(string outputFileName, string inputFileName);
bool fillInputTxtFile(string inputFileName, string ukrWord);
bool authorInfo(string outputFileName);
int vowelsCountInFile(string outputFileName, string ukrWord);
bool findWordInPoem(string outputFileName, string ukrWord);
int consonantsCountInFile(string inputFileName, string ukrWord);
bool timestampInFile(string inputFileName);
double sCalculationResInFile(string outputFileName, float x, float y, float z);
void decimalToBinary(string outputFileName, int number);


#endif // MODULESSTRIUK_H_INCLUDED
