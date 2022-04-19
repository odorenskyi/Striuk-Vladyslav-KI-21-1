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

    file.write(&regEn->firstName[0], 35);
    file.write(&regEn->lastName[0], 35);
    file.write(&regEn->patronymic[0], 35);
    file.write(&regEn->carBrand[0], 35);
    file.write(&regEn->gradYear[0], 4);
    file.write(&regEn->dateDay[0], 2);
    file.write(&regEn->dateMonth[0], 2);
    file.write(&regEn->dateYear[0], 4);
    file.write(&regEn->govNumber[0], 8);
    file.write(&regEn->additions[0], 255);

    return(regEn);
}

void readFromFile(fstream &file, regEnrollment *rootNode)
{
    rootNode->firstName = new char(35);
    rootNode->lastName = new char(35);
    rootNode->patronymic = new char(35);
    rootNode->carBrand = new char(35);
    rootNode->gradYear = new char(4);
    rootNode->dateDay = new char(2);
    rootNode->dateMonth = new char(2);
    rootNode->dateYear = new char(4);
    rootNode->govNumber = new char(8);
    rootNode->additions = new char(255);
    rootNode->ptr = nullptr;

    if (file.peek() == EOF) {
        rootNode = initializeDefaultRoot(file);
        return;
    }

    file.read(&rootNode->firstName[0], 35);
    file.read(&rootNode->lastName[0], 35);
    file.read(&rootNode->patronymic[0], 35);
    file.read(&rootNode->carBrand[0], 35);
    file.read(&rootNode->gradYear[0], 4);
    file.read(&rootNode->dateDay[0], 2);
    file.read(&rootNode->dateMonth[0], 2);
    file.read(&rootNode->dateYear[0], 4);
    file.read(&rootNode->govNumber[0], 8);
    file.read(&rootNode->additions[0], 255);

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
