#ifndef MODULESBARAMBA_H_INCLUDED
#define MODULESBARAMBA_H_INCLUDED

#include <iostream>
#include <fstream>
#include <iomanip>
#include "struct_type_project_1.h"

using namespace std;

void writeToRegistData(fstream &file, regEnrollment *node);
void writeToFile(fstream &file, regEnrollment *node);
void writeToConsole(regEnrollment *node);


#endif // MODULESBARAMBA_H_INCLUDED
