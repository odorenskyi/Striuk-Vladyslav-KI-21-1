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
    return "© —трюк ¬ладислав ™вген≥йович";
}

void inputVariables(int X, int Y, int Z, char A, char B)
{
    cout << "¬вед≥ть число X: ";    cin >> X;   x = X;
    cout << "¬вед≥ть число Y: ";    cin >> Y;   y = Y;
    cout << "¬вед≥ть число Z: ";    cin >> Z;   z = Z;
    cout << "¬вед≥ть символ є1: ";  cin >> A;   a = A;
    cout << "¬вед≥ть символ є2: ";  cin >> B;   b = B;
    cout << endl;
}

bool logicalExpression(int A, int B)
{
    return A + 10 >= B;
}

void decimalHexNumbersOutput(int X, int Y, int Z)
{
    cout << "'x' в дес€тков≥й: " << dec << X << endl
         << "'y' в дес€тков≥й: " << dec << Y << endl
         << "'z' в дес€тков≥й: " << dec << Z << endl << endl;

    cout << "'x' в ш≥стнац€тков≥й: " << hex << X << endl
         << "'y' в ш≥стнац€тков≥й: " << hex << Y << endl
         << "'z' в ш≥стнац€тков≥й: " << hex << Z << endl;
}

int main()
{
    system("chcp 1251 & cls");
    cout << authorCopyright() << endl << endl;
    inputVariables(x, y, z, a, b);
    cout << boolalpha
         << "–езультат " << a << " + 10 >= " << b << " : " << logicalExpression(a, b) << endl << endl;
    decimalHexNumbersOutput(x, y, z);
    cout << endl << "–езультат виразу: " << s_calculation(x, y, z);
    _getch(); return 0;
}
