#include <iostream>
#include <windows.h>
#include "ModulesStriuk.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    regEnrollment *regElement = new regEnrollment;
    regEnrollment *regRoot = autoUploadFromFile(regElement);
    vector <regEnrollment*> fullRegister = getFullRegister();

    cout << fullRegister[1]->firstName << endl;
    cout << fullRegister[0]->lastName << endl;
    cout << fullRegister[0]->patronymic << endl;
    cout << fullRegister[0]->carBrand << endl;
    cout << fullRegister[0]->gradYear << endl;
    cout << fullRegister[0]->dateDay << endl;
    cout << fullRegister[0]->dateMonth << endl;
    cout << fullRegister[0]->dateYear << endl;
    cout << fullRegister[0]->govNumber << endl;
    cout << fullRegister[0]->additions << endl;
    cout << fullRegister[0]->ptr << endl;
    return 0;
}
