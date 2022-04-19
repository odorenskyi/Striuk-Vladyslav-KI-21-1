#ifndef MODULESSTRIUK_H_INCLUDED
#define MODULESSTRIUK_H_INCLUDED

#include "struct_type_project_1.h"

#include <fstream>
#include <iostream>

using namespace std;

regEnrollment* initializeDefaultRoot(fstream &file);
void readFromFile(fstream &file, regEnrollment *rootNode);
void clearData(regEnrollment *rootNode);


#endif // MODULESSTRIUK_H_INCLUDED
