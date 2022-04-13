#ifndef MODULESSTRIUK_H_INCLUDED
#define MODULESSTRIUK_H_INCLUDED

#include "struct_type_project_1.h"

#include <fstream>
#include <iostream>

using namespace std;

vector <regEnrollment*> getFullRegister();
regEnrollment *initilaizeRoot();
regEnrollment *autoUploadFromFile(regEnrollment *root);


#endif // MODULESSTRIUK_H_INCLUDED
