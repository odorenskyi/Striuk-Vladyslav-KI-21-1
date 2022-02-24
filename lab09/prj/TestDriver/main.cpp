#include <iostream>
#include "ModulesStriuk.h"

using namespace std;

int main()
{
    system("chcp 65001 & cls");

/*********************************************************************/

    money m;
    int workingHours_1[5] {8, 8, 6, 1, 8};
    int workingHours_2[5] {0, 0, 0, 0, 0};
    int workingHours_3[5] {9, -9, 9, 9, 11};

    m = salaryAndTaxesOutput(workingHours_1);
    if (m.salary*100 == 124000 && m.fizosoba*100 == 18600 &&
        m.pensiya*100 == 2480 && m.bezrob*100 == 744 &&
        m.pratsa*100 == 1240 && m.completeSalary*100 == 100936) {
        cout << "Passed" << endl;
    }
    else { cout << "Failed" << endl;}

    m = salaryAndTaxesOutput(workingHours_2);
    if (m.salary*100 == 0 && m.fizosoba*100 == 0 &&
        m.pensiya*100 == 0 && m.bezrob*100 == 0 &&
        m.pratsa*100 == 0 && m.completeSalary*100 == 0) {
        cout << "Passed" << endl;
    }
    else { cout << "Failed" << endl;}

    m = salaryAndTaxesOutput(workingHours_3);
    if (m.salary*100 == 272000 && m.fizosoba*100 == 40800 &&
        m.pensiya*100 == 5440 && m.bezrob*100 == 1632 &&
        m.pratsa*100 == 2720 && m.completeSalary*100 == 221408) {
        cout << "Passed" << endl;
    }
    else { cout << "Failed" << endl;}

/*********************************************************************/

    int socksSize[3] = {25, 27, 29};

    cout << endl << endl << endl << endl;
    for (int i = 0; i < 3; i ++) {
        socks s = socksSizeStandart(socksSize[i]);
        if (s.ukrSize == socksSize[i] && s.usSize == (socksSize[i] / 2) - 2 &&
            s.esSize1 == socksSize[i] + 14 && s.esSize2 == socksSize[i] + 15) {
        cout << "Passed" << endl;
        }
        else { cout << "Failed" << endl; }
        cout << endl;
    }

/*********************************************************************/

    int numberEx[3] = {12, 678, 3938683};
    int bitEx[3] = {2, 31, 13};

    for (int i = 0; i < 3; i++) {
        if (numberByteManipulation(numberEx[i]) == bitEx[i]) {
            cout << "Passed" << endl;
        }
        else { cout << "Failed" << endl; }
    }
    getchar();
    return 0;
}
