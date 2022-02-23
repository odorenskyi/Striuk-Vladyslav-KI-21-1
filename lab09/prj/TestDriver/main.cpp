#include <iostream>
#include "ModulesStriuk.h"

using namespace std;

int main()
{
    system("chcp 65001 & cls");
    int workingHours_1[5] {8, 8, 6, 1, 8};
    int workingHours_2[5] {0, 0, 0, 0, 0};
    int workingHours_3[5] {9, -9, 9, 9, 11};

    salaryAndTaxesOutput(workingHours_1);
    salaryAndTaxesOutput(workingHours_2);
    salaryAndTaxesOutput(workingHours_3);

    return 0;
}
