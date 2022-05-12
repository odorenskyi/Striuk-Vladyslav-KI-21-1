#ifndef ADDITIONFUNCTIONS_H_INCLUDED
#define ADDITIONFUNCTIONS_H_INCLUDED

#include "ModulesStriuk.h"

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

bool fileInDirectory()
{
    string cpp = __FILE__;
    size_t found = cpp.find("\\lab12\\prj");

    if (found == string::npos) {
        ofstream resFile("../TestSuite/TestResults.txt");
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
        ofstream resFile("../TestSuite/TestResults.txt");
        resFile << "Встановлені вимоги порядку виконання лабораторної роботи порушено!" << endl;
        resFile.close();
        return false;
    }
    return true;
}

void declareTestSuiteResults(ofstream &resFile, ClassLab12_Striuk pipe, string outArea, string expArea, int index)
{
    resFile << "----------------------------------------------------" << endl;
    resFile << "| TEST CASE " << setw(2) << index << setw(38) << "|" << endl;
    resFile << "| (input)    Pipe height: " << setw(20) << pipe.getPipeHeight() << " м   |" << endl;
    resFile << "| (input)    Pipe radius: " << setw(20) << pipe.getPipeRadius() << " м   |" << endl;
    resFile << "| (output)   Pipe square: " << setw(20) << outArea << " м^2 |" << endl;
    resFile << "| (expected) Pipe square: " << setw(20) << expArea << " м^2 |" << endl;
    resFile << "| TEST CASE RESULT:       " << setw(20) << boolalpha << (expArea.compare(outArea) == 0) << "     |" << endl;
    resFile << "----------------------------------------------------" << endl;
}

#endif // ADDITIONFUNCTIONS_H_INCLUDED
