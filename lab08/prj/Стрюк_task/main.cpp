#include <iostream>
#include <clocale>
#include <iomanip>
#include <conio.h>
#include <cstring>

#include "ModulesStriuk.h"

using namespace std;

int x = 0, y = 0, z = 0;
char a = '0', b = '0';

string authorCopyright()
{
    return "© Стрюк Владислав Євгенійович";
}

void inputVariables(int X, int Y, int Z, char A, char B)
{
    cout << "Введіть число X: ";    cin >> X;   x = X;
    cout << "Введіть число Y: ";    cin >> Y;   y = Y;
    cout << "Введіть число Z: ";    cin >> Z;   z = Z;
    cout << "Введіть символ №1: ";  cin >> A;   a = A;
    cout << "Введіть символ №2: ";  cin >> B;   b = B;
    cout << endl;
}

bool logicalExpression(int A, int B)
{
    return A + 10 >= B;
}

void decimalHexNumbersOutput(int X, int Y, int Z)
{
    cout << "'x' в десятковій: " << dec << X << endl
         << "'y' в десятковій: " << dec << Y << endl
         << "'z' в десятковій: " << dec << Z << endl << endl;

    cout << "'x' в шістнацятковій: " << hex << X << endl
         << "'y' в шістнацятковій: " << hex << Y << endl
         << "'z' в шістнацятковій: " << hex << Z << endl;
}

int main()
{
    system("chcp 65001 & cls");
    cout << authorCopyright() << endl << endl;
    inputVariables(x, y, z, a, b);
    cout << boolalpha
         << "Результат " << a << " + 10 >= " << b << " : " << logicalExpression(a, b) << endl << endl;
    decimalHexNumbersOutput(x, y, z);
    cout << endl << "Результат виразу: " << s_calculation(x, y, z);
    _getch(); return 0;
}
