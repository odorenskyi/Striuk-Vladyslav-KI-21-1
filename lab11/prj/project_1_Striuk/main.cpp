#include <iostream>
#include <windows.h>

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
    }

    regEnrollment *rootNode = new regEnrollment;
    regEnrollment *bufNode = rootNode;

    return 0;
}
