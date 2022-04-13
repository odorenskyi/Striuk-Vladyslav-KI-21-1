#include "ModulesStriuk.h"

using namespace std;

vector <regEnrollment*> fullRegister;
vector <regEnrollment*> getFullRegister() { return fullRegister; }

/// Запис за замовчуванням ///
regEnrollment *initilaizeRoot()
{
    regEnrollment *regEn = new regEnrollment;

    regEn->firstName = "Іван";
    regEn->lastName = "Іванов";
    regEn->patronymic = "Іванович";
    regEn->carBrand = "Toyota";
    regEn->gradYear = 2012;
    regEn->dateDay = 12;
    regEn->dateMonth = 12;
    regEn->dateYear = 2022;
    regEn->govNumber = "АА0000АА";
    regEn->additions = "Немає лобового скла";
    regEn->ptr = NULL;

    return(regEn);
}

/// Автоматичне завантаження бази данних з файлу ///
regEnrollment *autoUploadFromFile(regEnrollment *root)
{
    regEnrollment *regEn = root;
    fstream inFile("RegisterDataBase.dat", ios::binary | ios::in | ios::out);
    inFile.seekg(0, ios::end);

    if (inFile.is_open() == false || inFile.tellg() == 0) {
        cout << "Файл з даними не існує, або дані відсутні" << endl
             << "Створення нового та/або запис інформації за замовчуванням..." << endl;
        fullRegister.clear();
        fullRegister.push_back(initilaizeRoot());
        inFile.write(reinterpret_cast<char*>(&fullRegister), fullRegister.size()*sizeof(regEnrollment));
        //inFile.write((char*)&fullRegister[0], sizeof(fullRegister));
    }
    cout << "Завантаження інформації..." << endl;


    inFile.seekg(0, ios::end);
    int inFileSize = inFile.tellg();
    size_t structAmount = inFileSize / sizeof(regEnrollment);
    fullRegister.clear();

    inFile.read(reinterpret_cast<char*>(&fullRegister[0]), structAmount * sizeof(regEnrollment));
    //inFile.read((char*)&fullRegister, sizeof(fullRegister));
    inFile.close();

    regEn = fullRegister[0]; /// BUG (0xC0000005)
    if (regEn->ptr != NULL) {
        for (unsigned int i = 1; i < fullRegister.size(); i++) {
            regEn->ptr = fullRegister[i];
            regEn = regEn->ptr;
            if (fullRegister[i]->ptr == NULL) {
                break;
            }
        }
    }
    cout << "Інформацію заванатжено успішно" << endl;
    return(root);
}
