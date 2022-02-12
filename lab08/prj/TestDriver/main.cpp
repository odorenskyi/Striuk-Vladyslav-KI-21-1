#include <iostream>
#include <iomanip>
#include <conio.h>
#include <clocale>

#include "ModulesStriuk.h"

using namespace std;

int main()
{
    system("chcp 65001 & cls");

    float valueX[5] = { 6.9, 3.65, 10, 0.2, 39 };
    float valueY[5] = { 3, -5, 0.3, -0.3, 9 };
    float valueZ[5] = { -0.8, 0.8, 0, 4, -4 };

    double expectedResult[5] = { 6.01205, 5.546188, 7.877115, 4.087077, 14.469048 };
    double doneResult = 0;
    double delta = 0.00005;
    bool testResult = false;

    for (int i = 0; i < 5; i++) {
        doneResult = s_calculation(valueX[i], valueY[i], valueZ[i]);
        if (abs(expectedResult[i]) >= abs(doneResult))  { testResult = abs(expectedResult[i]) - abs(doneResult) <= delta; }
        else                                            { testResult = abs(doneResult) - abs(expectedResult[i]) <= delta; }

        cout << "Тестові значення №" << i + 1 << " : "
             << "X = " << valueX[i]
             << "    Y = " << valueY[i]
             << "    Z = " << valueZ[i]
             << endl;
        cout << "Очікуваний результат: " << expectedResult[i] << endl;
        cout << "Отриманий результат: " << doneResult << endl;
        cout << boolalpha << "Тестовий результат: " << testResult << endl << endl;
    }
    _getch();
    return 0;
}
