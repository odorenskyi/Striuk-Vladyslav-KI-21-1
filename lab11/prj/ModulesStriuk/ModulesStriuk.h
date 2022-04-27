#ifndef MODULESSTRIUK_H_INCLUDED
#define MODULESSTRIUK_H_INCLUDED

#include "struct_type_project_1.h"

#include <fstream>
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

regEnrollment* initializeDefaultRoot(fstream &file);
void readFromFile(fstream &file, regEnrollment *rootNode);
void searchInDatabase(regEnrollment *rootNode);

#endif // MODULESSTRIUK_H_INCLUDED
