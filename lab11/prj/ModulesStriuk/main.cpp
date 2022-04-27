#include "ModulesStriuk.h"

using namespace std;

regEnrollment* initializeDefaultRoot(fstream &file)
{
    regEnrollment *regEn = new regEnrollment;

    strcpy(regEn->firstName, "Ivan");
    strcpy(regEn->lastName, "Ivanov");
    strcpy(regEn->patronymic, "Ivanovich");
    strcpy(regEn->carBrand, "Toyota");
    strcpy(regEn->gradYear, "2012");
    strcpy(regEn->dateDay, "12");
    strcpy(regEn->dateMonth, "12");
    strcpy(regEn->dateYear, "2022");
    strcpy(regEn->govNumber, "AA0000AA");
    strcpy(regEn->additions, "Without front left door");
    regEn->ptr = nullptr;

    file.write((char*)&*regEn, sizeof(regEnrollment));
    return(regEn);
}

void readFromFile(fstream &file, regEnrollment *rootNode)
{
    rootNode->ptr = nullptr;
    file.read((char*)&*rootNode, sizeof(regEnrollment));

    if (file.peek() != -1) {
        rootNode->ptr = new regEnrollment;
        readFromFile(file, rootNode->ptr);
    }
}

void searchInDatabase(regEnrollment *rootNode)
{
    regEnrollment *bufEnrollment = rootNode;
    string bufString;

    cout << "Enter government number, which you wanna find: ";
    cin >> bufString;
    bufString.substr(0, GOV_NUMBER_SIZE);

    do {
        string bufGovNumber = bufEnrollment->govNumber;
        size_t foundStr = bufGovNumber.find(bufString);
        if (foundStr != string::npos) {
            cout << bufEnrollment->firstName << " " << bufEnrollment->lastName << " " << bufEnrollment->patronymic << ": "
                 << bufEnrollment->govNumber << endl;
        }
        bufEnrollment = bufEnrollment->ptr;
    } while (bufEnrollment != nullptr);
}
