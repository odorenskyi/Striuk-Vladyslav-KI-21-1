#include <iostream>
#include <cstring>
#include <conio.h>
#include "ModulesStriuk.h"

using namespace std;

int main()
{
    system("chcp 65001 & cls");
    string inputWordsArray[5] = { "Щастя", "Воля", "Правило", "Праця", "Життя" };
    int vowelsCount[5] = {2, 2, 3, 2, 2};

    for(int i = 0; i < 5; i++) {
        abilityToEdit("prjOutputFile.txt", "prjInputFile.txt");
        cout << "fillInputTxtFile - " << fillInputTxtFile("prjInputFile.txt", inputWordsArray[i]) << endl;
        cout << "authorInfo - " << authorInfo("prjOutputFile.txt") << endl;
        cout << "vowelsCountInFile - " << (vowelsCountInFile("prjOutputFile.txt", inputWordsArray[i]) == vowelsCount[i]);
        _getch();
    }
    return 0;
}
