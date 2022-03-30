#include <iostream>
#include <cstring>
#include <conio.h>
#include <iomanip>

#include "ModulesStriuk.h"

using namespace std;

int main()
{
    system("chcp 65001 & cls");
    string inputWordsArray[5] = { "щастя", "воля", "правило", "праця", "життя" };
    int vowelsCount[5] = {2, 2, 3, 2, 2};
    int consonantsCount[5] = {3, 2, 4, 3, 3};

    float sCalcX[5] = { 6.9, 3.65, 10, 0.2, 39 };
    float sCalcY[5] = { 3, -5, 0.3, -0.3, 9 };
    float sCalcZ[5] = { -0.8, 0.8, 0, 4, -4 };
    unsigned int naturalDigit[5] = {0, 23, 42, 100, 699 };
    double expectedResult[5] = { 6.01205, 5.546188, 7.877115, 4.087077, 14.469048 };

    for(int i = 0; i < 5; i++) {
        abilityToEdit("prjOutputFile.txt", "prjInputFile.txt");
        cout << boolalpha
             << "fillInputTxtFile - " << fillInputTxtFile("prjInputFile.txt", inputWordsArray[i])
             << endl;
        cout << boolalpha
             << "authorInfo - " << authorInfo("prjOutputFile.txt")
             << endl;
        cout << boolalpha
             << "vowelsCountInFile - " << (vowelsCountInFile("prjOutputFile.txt", inputWordsArray[i]) == vowelsCount[i])
             << endl;
        cout << boolalpha
             << "findWordInPoem - " << findWordInPoem("prjOutputFile.txt", inputWordsArray[i])
             << endl;
        cout << boolalpha
             << "consonantsCountInFile - " << (consonantsCountInFile("prjInputFile.txt", inputWordsArray[i]) == consonantsCount[i])
             << endl;
        cout << boolalpha
             << "timestampInFile - " << timestampInFile("prjInputFile.txt")
             << endl;
        cout << boolalpha
             << "sCalculationResInFile - "
             << (sCalculationResInFile("prjOutputFile.txt", sCalcX[i], sCalcY[i], sCalcZ[i]) <= expectedResult[i] + 0.005)
             << endl;
        cout << boolalpha
             << "decimalToBinary - " << decimalToBinary("prjOutputFile.txt", naturalDigit[i])
             << endl;

        _getch();
    }
    return 0;
}
