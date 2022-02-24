#include <iostream>
#include <conio.h>
#include <random>
#include <time.h>
#include "ModulesStriuk.h"

using namespace std;

int main()
{
    system("chcp 65001 & cls");
    srand(time(0));
    money m;
    socks s;
    int bitNumber;

    while(true) {
        cout << "Введіть символ (v/n/m/q/w/W): ";
        int salaryArray[5] = {rand()%24, rand()%24, rand()%24, rand()%24, rand()%24};
        int randNum;
        switch (_getch()) {
            case 'v': cout << endl << endl << "s_calculation: " << s_calculation(rand(), rand(), rand()) << endl; break;
            case 'n': cout << endl << "salaryAndTaxesOutput: " << endl;
                      m = salaryAndTaxesOutput(salaryArray);
                      break;
            case 'm': randNum = rand()%35;
                      cout << endl << endl << "socksSizeStandart: " << randNum << endl;
                      s = socksSizeStandart(randNum);
                      break;
            case 'q': randNum = rand();
                      cout << endl << endl << "numberByteManipulation: " << randNum << endl;
                      bitNumber = numberByteManipulation(randNum);
                      break;
            case 'w': return 0; break;
            case 'W': return 0; break;
            default: cout << "\a" << endl; continue;
        }
    }
}
