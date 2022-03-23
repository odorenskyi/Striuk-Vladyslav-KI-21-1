#include <iostream>
#include <cstring>
#include <conio.h>
#include "ModulesStriuk.h"

using namespace std;

int main()
{
    system("chcp 65001 & cls");
    string inputWordsArray[5] = { "Щастя", "Воля", "Правило", "Праця", "Життя" };

    for(int i = 0; i < 5; i++) {
        abilityToEdit("prjOutputFile.txt", "prjInputFile.txt");
        cout << "fillInputTxtFile - " << fillInputTxtFile("prjInputFile.txt", inputWordsArray[i]) << endl;
        cout << "authorInfo - " << authorInfo("prjOutputFile.txt") << endl;
        _getch();
    }
    return 0;
}
