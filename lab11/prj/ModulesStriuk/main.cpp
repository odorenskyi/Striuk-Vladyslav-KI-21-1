#include "ModulesStriuk.h"

using namespace std;

regEnrollment* initializeDefaultRoot(fstream &file)
{
    regEnrollment *regEn = new regEnrollment;

    regEn->firstName = (char*)"Ivan";                       // 35 bytes
    regEn->lastName = (char*)"Ivanov";                      // 35 bytes
    regEn->patronymic = (char*)"Ivanovich";                 // 35 bytes
    regEn->carBrand = (char*)"Toyota";                      // 35 bytes
    regEn->gradYear = (char*)"2012";                        // 4 bytes
    regEn->dateDay = (char*)"12";                           // 2 bytes
    regEn->dateMonth = (char*)"12";                         // 2 bytes
    regEn->dateYear = (char*)"2022";                        // 4 bytes
    regEn->govNumber = (char*)"AA0000AA";                   // 8 bytes
    regEn->additions = (char*)"Without front left door";    // 255 bytes
    regEn->ptr = nullptr;

    file.write(&regEn->firstName[0], PROPER_NAME_SIZE);
    file.write(&regEn->lastName[0], PROPER_NAME_SIZE);
    file.write(&regEn->patronymic[0], PROPER_NAME_SIZE);
    file.write(&regEn->carBrand[0], PROPER_NAME_SIZE);
    file.write(&regEn->gradYear[0], YEAR_STIRNG_SIZE);
    file.write(&regEn->dateDay[0], DATE_STRING_SIZE);
    file.write(&regEn->dateMonth[0], DATE_STRING_SIZE);
    file.write(&regEn->dateYear[0], YEAR_STIRNG_SIZE);
    file.write(&regEn->govNumber[0], GOV_NUMBER_SIZE);
    file.write(&regEn->additions[0], LARGE_TXT_SIZE);

    return(regEn);
}

void readFromFile(fstream &file, regEnrollment *rootNode)
{
    rootNode->firstName = new char(PROPER_NAME_SIZE);
    rootNode->lastName = new char(PROPER_NAME_SIZE);
    rootNode->patronymic = new char(PROPER_NAME_SIZE);
    rootNode->carBrand = new char(PROPER_NAME_SIZE);
    rootNode->gradYear = new char(YEAR_STIRNG_SIZE);
    rootNode->dateDay = new char(DATE_STRING_SIZE);
    rootNode->dateMonth = new char(DATE_STRING_SIZE);
    rootNode->dateYear = new char(YEAR_STIRNG_SIZE);
    rootNode->govNumber = new char(GOV_NUMBER_SIZE);
    rootNode->additions = new char(LARGE_TXT_SIZE);
    rootNode->ptr = nullptr;

    if (file.peek() == EOF) {
        rootNode = initializeDefaultRoot(file);
        return;
    }

    file.read(&rootNode->firstName[0], PROPER_NAME_SIZE);
    file.read(&rootNode->lastName[0], PROPER_NAME_SIZE);
    file.read(&rootNode->patronymic[0], PROPER_NAME_SIZE);
    file.read(&rootNode->carBrand[0], PROPER_NAME_SIZE);
    file.read(&rootNode->gradYear[0], YEAR_STIRNG_SIZE);
    file.read(&rootNode->dateDay[0], DATE_STRING_SIZE);
    file.read(&rootNode->dateMonth[0], DATE_STRING_SIZE);
    file.read(&rootNode->dateYear[0], YEAR_STIRNG_SIZE);
    file.read(&rootNode->govNumber[0], GOV_NUMBER_SIZE);
    file.read(&rootNode->additions[0], LARGE_TXT_SIZE);

    if (file.peek() != -1) {
        rootNode->ptr = new regEnrollment;
        readFromFile(file, rootNode->ptr);
    }
}

void clearData(regEnrollment *rootNode)
{
    if (rootNode->ptr != nullptr) {
        clearData(rootNode->ptr);
    }
    delete (rootNode);
}

void searchInDatabase(regEnrollment *rootNode)
{
    regEnrollment *bufEnrollment = rootNode;
    string bufString;

    cout << "Enter government number, which you wanna find: ";
    getline(cin, bufString);
    bufString.substr(0, GOV_NUMBER_SIZE);
    const char *governmentNum = bufString.c_str();

    do {
        if (governmentNum == bufEnrollment->govNumber) {
            cout << bufEnrollment->firstName << " " << bufEnrollment->lastName << " " << bufEnrollment->patronymic << ": "
                 << bufEnrollment->govNumber << endl;
        }
        bufEnrollment = bufEnrollment->ptr;
    } while (bufEnrollment != nullptr);
}
