#include <iostream>
#include <cstring>
#include <conio.h>
#include <iomanip>

#include "ModulesStriuk.h"

using namespace std;

int main()
{
    system("chcp 65001 & cls");
    string inputWordsArray[5] = { "Щастя", "Воля", "Правило", "Праця", "Життя" };
    int vowelsCount[5] = {2, 2, 3, 2, 2};

    for(int i = 0; i < 5; i++) {
        abilityToEdit("prjOutputFile.txt", "prjInputFile.txt");
        cout << boolalpha << "fillInputTxtFile - " << fillInputTxtFile("prjInputFile.txt", inputWordsArray[i]) << endl;
        cout << boolalpha << "authorInfo - " << authorInfo("prjOutputFile.txt") << endl;
        cout << boolalpha << "vowelsCountInFile - " << (vowelsCountInFile("prjOutputFile.txt", inputWordsArray[i]) == vowelsCount[i]) << endl;
        _getch();
    }
    return 0;
}
