#ifndef ADDITIONFUNCTIONS_H_INCLUDED
#define ADDITIONFUNCTIONS_H_INCLUDED

#include <iostream>
#include <fstream>

using namespace std;

bool fileInDirectory()
{
    string cpp = __FILE__;
    size_t found = cpp.find("\\lab12\\prj");

    if (found == string::npos) {
        for (int i = 0; i < 100; i++) {
            cout << "\a";
            return false;
        }
    }
    return true;
}

#endif // ADDITIONFUNCTIONS_H_INCLUDED
