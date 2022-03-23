#include <iostream>
#include <cstring>
#include "ModulesStriuk.h"

using namespace std;

int main()
{
    system("chcp 65001 & cls");

    string testWord = "Щастя";
    fillInputTxtFile(testWord);
    cout << "У файл prjInputFile.txt записано: \"" << testWord << "\"" << endl;
    return 0;
}
