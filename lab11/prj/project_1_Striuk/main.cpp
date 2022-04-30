#include <iostream>
#include <windows.h>
#include <conio.h>

#include "ModulesStriuk.h"
#include "ModulesBaramba.h"
#include "ModulesOzhekhovskyi.h"

using namespace std;

void actionMenu(fstream &dataFile, fstream &txtFile, regEnrollment *root)
{
    while (true) {
        char action;
        cout << endl << endl
             << "=================== ACTION MENU ===================" << endl
             << "| 1. Show register data in console                |" << endl
             << "| 2. Write register data in text file             |" << endl
             << "| 3. Add new register enrollment                  |" << endl
             << "| 4. Delete register enrollment by state number   |" << endl
             << "| 5. Find enroll by state number                  |" << endl
             << "| 6. Exit program                                 |" << endl
             << "===================================================" << endl
             << "> ";
        cin >> action;
        cout.flush();
        switch(action) {
            case '1': dataOutput(txtFile, root, 1); break;
            case '2': dataOutput(txtFile, root, 2); break;
            case '3': addElement(root); break;
            case '4': deleteElement(root); break;
            case '5': searchInDatabase(root); break;
            case '6': writeToRegistData(dataFile, root); return; break;
            default: break;
        }
    }
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    fstream dataFile("RegisterDataBase.dat", ios::binary | ios::in | ios::out);
    fstream txtFile("TextFile.txt", ios::out);
    dataFile.seekg(0);
    txtFile.seekg(0);

    if (dataFile.is_open() == false || dataFile.tellg() == 0) {
        cout << "Could not open the data file! Exit program..." << endl;
        return 0;
    }

    regEnrollment *rootNode = new regEnrollment;
    regEnrollment *bufNode = rootNode;
    readFromFile(dataFile, bufNode);
    cout << "<<< Reading complete >>>" << endl << endl;

    actionMenu(dataFile, txtFile, rootNode);
    return 0;
}
