#ifndef STRUCT_TYPE_PROJECT_1_H_INCLUDED
#define STRUCT_TYPE_PROJECT_1_H_INCLUDED

#include <string>
#include <vector>

struct regEnrollment {
    std::string firstName;
    std::string lastName;
    std::string patronymic;

    std::string carBrand;

    unsigned short int gradYear;
    unsigned char dateDay;
    unsigned char dateMonth;
    unsigned short int dateYear;
    std::string govNumber;
    std::string additions;

    regEnrollment *ptr;
};

regEnrollment defaultEnroll = { "Іван", "Іванов", "Іванович", "Toyota", 2012, 12, 12, 2022, "АА0000АА", "Немає лобового скла", NULL };

std::vector <regEnrollment*> fullRegister;

#endif // STRUCT_TYPE_PROJECT_1_H_INCLUDED
