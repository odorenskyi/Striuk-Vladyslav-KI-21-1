#include <iostream>
#include <windows.h>
#include <conio.h>

#include "ModulesStriuk.h"
//#include "ModulesBaramba.h"
//#include "ModulesOzhekhovskyi.h"

using namespace std;

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

    while (true) {

        cout << "================= ACTION MENU =================" << endl
             << "1. Show register data in console" << endl
             << "2. Write register data in text file" << endl
             << "3. Add new register enrollment" << endl
             << "4. Delete register enrollment by state number" << endl
             << "5. Find enroll by state number" << endl
             << "6. Exit program" << endl
             << "===============================================" << endl << endl;

        switch(_getch()) {
            case '1': /*show register in console*/ break;
            case '2': /*show register in txt*/ break;
            case '3': /*add node*/ break;
            case '4': /*delete node*/ break;
            case '5': searchInDatabase(bufNode); break;
            case '6': /*upload to file*/ return 0; break;
            default: break;
        }
    }
    /*upload to file*/
    return 0;
}
