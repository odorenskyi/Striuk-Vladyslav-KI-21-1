#ifndef STRUCT_TYPE_PROJECT_1_H_INCLUDED
#define STRUCT_TYPE_PROJECT_1_H_INCLUDED

#define LARGE_TXT_SIZE 256
#define PROPER_NAME_SIZE 32
#define GOV_NUMBER_SIZE 16
#define YEAR_STIRNG_SIZE 8
#define DATE_STRING_SIZE 4

#include <string>

struct regEnrollment {
    char firstName[PROPER_NAME_SIZE] = "";
    char lastName[PROPER_NAME_SIZE] = "";
    char patronymic[PROPER_NAME_SIZE] = "";

    char carBrand[PROPER_NAME_SIZE] = "";

    char gradYear[YEAR_STIRNG_SIZE] = "";
    char dateDay[DATE_STRING_SIZE] = "";
    char dateMonth[DATE_STRING_SIZE] = "";
    char dateYear[YEAR_STIRNG_SIZE] = "";

    char govNumber[GOV_NUMBER_SIZE] = "";
    char additions[LARGE_TXT_SIZE] = "";

    regEnrollment *ptr;
};

#endif // STRUCT_TYPE_PROJECT_1_H_INCLUDED
