#include <iostream>
#include <cstring>
#include <conio.h>
#include <iomanip>

#include "ModulesStriuk.h"

using namespace std;

int main()
{
    system("chcp 65001 & cls");
    string inputWordsArray[5] = { "щастя", "воля", "правило", "праця", "життя" };
    int vowelsCount[5] = {2, 2, 3, 2, 2};
    int consonantsCount[5] = {3, 2, 4, 3, 3};

    for(int i = 0; i < 5; i++) {
        abilityToEdit("prjOutputFile.txt", "prjInputFile.txt");
        cout << boolalpha
             << "fillInputTxtFile - " << fillInputTxtFile("prjInputFile.txt", inputWordsArray[i])
             << endl;
        cout << boolalpha
             << "authorInfo - " << authorInfo("prjOutputFile.txt")
             << endl;
        cout << boolalpha
             << "vowelsCountInFile - " << (vowelsCountInFile("prjOutputFile.txt", inputWordsArray[i]) == vowelsCount[i])
             << endl;
        cout << boolalpha
             << "findWordInPoem - " << findWordInPoem("prjOutputFile.txt", inputWordsArray[i])
             << endl;
        cout << boolalpha
             << "consonantsCountInFile - " << (consonantsCountInFile("prjInputFile.txt", inputWordsArray[i]) == consonantsCount[i])
             << endl;
        _getch();
    }
    return 0;
}
