#ifndef ADDITIONFUNCTIONS_H_INCLUDED
#define ADDITIONFUNCTIONS_H_INCLUDED

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

bool fileInDirectory()
{
    string cpp = __FILE__;
    size_t found = cpp.find("\\lab12\\prj");

    if (found == string::npos) {
        ofstream resFile("../../TestSuite/TestResults.txt");
        resFile << "Встановлені вимоги порядку виконання лабораторної роботи порушено!" << endl;
        for (int i = 0; i < 100; i++) {
            cout << "\a";
        }
        resFile.close();
        return false;
    }
    return true;
}

bool filesIsOpen(ofstream &wfile, ifstream &rfile)
{
    if (!rfile.is_open() || !wfile.is_open() || !rfile || !wfile) {
        ofstream resFile("../../TestSuite/TestResults.txt");
        resFile << "Встановлені вимоги порядку виконання лабораторної роботи порушено!" << endl;
        resFile.close();
        return false;
    }
    return true;
}

#endif // ADDITIONFUNCTIONS_H_INCLUDED
