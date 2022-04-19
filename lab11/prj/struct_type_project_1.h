#ifndef STRUCT_TYPE_PROJECT_1_H_INCLUDED
#define STRUCT_TYPE_PROJECT_1_H_INCLUDED

#define LARGE_TXT_SIZE 255
#define PROPER_NAME_SIZE 35
#define GOV_NUMBER_SIZE 8
#define YEAR_STIRNG_SIZE 4
#define DATE_STRING_SIZE 2

#include <string>

struct regEnrollment {
    char *firstName;    //use PROPER_NAME_SIZE
    char *lastName;     //use PROPER_NAME_SIZE
    char *patronymic;   //use PROPER_NAME_SIZE

    char *carBrand;     //use PROPER_NAME_SIZE

    char *gradYear;     //use YEAR_STIRNG_SIZE
    char *dateDay;      //use DATE_STRING_SIZE
    char *dateMonth;    //use DATE_STRING_SIZE
    char *dateYear;     //use YEAR_STIRNG_SIZE

    char *govNumber;    //use GOV_NUMBER_SIZE
    char *additions;    //use LARGE_TXT_SIZE

    regEnrollment *ptr;
};

#endif // STRUCT_TYPE_PROJECT_1_H_INCLUDED
