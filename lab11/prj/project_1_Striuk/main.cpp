#include <iostream>

#include "ModulesStriuk.h"
#include "ModulesBaramba.h"
#include "ModulesOzhekhovskyi.h"

using namespace std;

int fileCheckAndRead(fstream &dataFile)
{
    dataFile.seekg(0);
    if (dataFile.is_open() == false) {
        cout << "Could not open the data file! Exit program..." << endl;
        return 1;
    }
    if (dataFile.peek() == EOF) {
        cout << "File is empty! Initializing default enrollment" << endl;
        return 2;
    }
    else { return 3; }
}

void readFromFileToPointers(fstream &dataFile, regEnrollment *rootNode)
{
    dataFile.seekg(0);
    regEnrollment *bufNode = rootNode;
    readFromFile(dataFile, bufNode);
    dataFile.seekg(0);

    cout << "====================================" << endl
         << "|     <<< Reading complete >>>     |" << endl
         << "====================================" << endl << endl;
}

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
    system("chcp 1251 & cls");

    fstream dataFile("RegisterDataBase.dat", ios::binary | ios::in | ios::out);
    fstream txtFile("TextFile.txt", ios::out);

    regEnrollment *rootNode;

    if      (fileCheckAndRead(dataFile) == 1) { return 0; }
    else if (fileCheckAndRead(dataFile) == 2) { rootNode = initializeDefaultRoot(dataFile); }
    else if (fileCheckAndRead(dataFile) == 3) { rootNode = new regEnrollment; }

    readFromFileToPointers(dataFile, rootNode);

    actionMenu(dataFile, txtFile, rootNode);

    return 0;
}
