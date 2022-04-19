#ifndef STRUCT_TYPE_PROJECT_1_H_INCLUDED
#define STRUCT_TYPE_PROJECT_1_H_INCLUDED

#include <string>

struct regEnrollment {
    char *firstName;
    char *lastName;
    char *patronymic;

    char *carBrand;

    char *gradYear;
    char *dateDay;
    char *dateMonth;
    char *dateYear;

    char *govNumber;
    char *additions;

    regEnrollment *ptr;
};

#endif // STRUCT_TYPE_PROJECT_1_H_INCLUDED
