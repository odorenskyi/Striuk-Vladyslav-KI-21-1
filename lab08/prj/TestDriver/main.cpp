#include <iostream>
#include <sstream>
#include <iomanip>
#include <conio.h>
#include <clocale>
#include "ModulesStriuk/modulesstriuk.h"

using namespace std;

int main()
{
    system("chcp 65001 & cls");
    float valueX[5] = { 6.9, 3.65, 10, 0.2, 39 };
    float valueY[5] = { 3, -5, 0.3, -0.3, 9 };
    float valueZ[5] = { -0.8, 0.8, 0, 4, -4 };

    float expectedResult[5] = { 6.01206, 5.54619, 7.87712, 4.08708, 14.4691 };

    for (int i = 0; i < 5; i++) {
        cout << "Тестові значення №" << i + 1 << " : "
             << "X = " << valueX[i]
             << "    Y = " << valueY[i]
             << "    Z = " << valueZ[i]
             << endl;
        cout << "Очікуваний результат: " << expectedResult[i] << endl;
        cout << "Отриманий результат: " << s_calculation(valueX[i], valueY[i], valueZ[i]) << endl;
        cout << endl << endl;
    }

    return 0;
}
