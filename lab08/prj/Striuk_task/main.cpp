#include <iostream>
#include <clocale>
#include <iomanip>
#include <conio.h>

#include "ModulesStriuk/modulesstriuk.h"

using namespace std;

int x, y, z;
char a, b;

void inputVariables(int X, int Y, int Z, char A, char B)
{
    cout << "Введіть X: "; cin >> X; x = X;
    cout << "Введіть Y: "; cin >> Y; y = Y;
    cout << "Введіть Z: "; cin >> Z; z = Z;
    cout << "Введіть 'a': "; cin >> A; a = A;
    cout << "Введіть 'b': "; cin >> B; b = B;
}

void authorCopyright()
{
    cout << "© Стрюк Владислав Євгенійович" << endl << endl;
}

void logicalExpression(int X, int Y)
{
    bool expression =  X + 10 >= Y;
    cout << noboolalpha << "Результат a + 10 >= b: " << expression << endl << endl;
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
    authorCopyright();

    inputVariables(x, y, z, a, b);
    logicalExpression(x, y);
    decimalHexNumbersOutput(x, y, z);

    cout << endl << "Результат виразу: " << s_calculation(x, y, z);
    _getch();

    return 0;
}
