#ifndef MODULESOZHEKHOVSKYI_H_INCLUDED
#define MODULESOZHEKHOVSKYI_H_INCLUDED

#include "struct_type_project_1.h"

#include <iostream>
#include <cstring>

using namespace std;

string inputTextData(int numBytes, string data, string msg);
string inputNumData(string data, int maxNum, string msg);
string inputYearData(string data, string msg);
string inputAdditions(string data, string msg);
void addElement(regEnrollment *lst);
void deleteElement(regEnrollment *root);

#endif // MODULESOZHEKHOVSKYI_H_INCLUDED
