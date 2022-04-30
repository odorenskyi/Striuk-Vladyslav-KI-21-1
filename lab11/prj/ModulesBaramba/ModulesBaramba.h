#ifndef MODULESBARAMBA_H_INCLUDED
#define MODULESBARAMBA_H_INCLUDED

#include <iostream>
#include <fstream>
#include <iomanip>
#include "struct_type_project_1.h"

using namespace std;

void writeToRegistData(fstream &file, regEnrollment *regEn);
void dataOutput(fstream &file, regEnrollment *regEn, int action);

#endif // MODULESBARAMBA_H_INCLUDED
