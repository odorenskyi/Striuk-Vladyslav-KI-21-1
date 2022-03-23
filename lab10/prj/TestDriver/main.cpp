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
        fillInputTxtFile("prjInputFile.txt", inputWordsArray[i]);
        _getch();
    }
    return 0;
}
