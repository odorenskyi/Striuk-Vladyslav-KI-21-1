#include "ModulesStriuk.h"

using namespace std;

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
    fullRegister.clear();                                               // Очищення вмісту вектора (так надо)
    regEnrollment *regEn = root;                                        // Локальний вказівник на перший елемент реєстру
    ifstream inFile("RegisterDataBase.dat", ios::binary | ios::in);

    if (inFile.is_open() == false) {
        cout << "Файл з даними не існує, або не вдалося знайти" << endl
             << "Створення нового та запис інформації за замовчуванням..." << endl;
        inFile.close();

        fullRegister[0] = initilaizeRoot();                             // Ініціалізація першого запису за замовчуванням
        ofstream outFile("RegisterDataBase.dat", ios::binary | ios::out);
        outFile.write((char*)&fullRegister, sizeof(fullRegister));      // Запис вектора у файл
        outFile.close();
    }
    else {
        inFile.read((char*)&fullRegister, sizeof(fullRegister));        // Зчитування вектору з файлу
        inFile.close();
        if (fullRegister.empty()) {                                     // Якщо вектор пустий, ініціалізувати перший запис за замовчуванням
            fullRegister[0] = initilaizeRoot();
        }
    }
    regEn = fullRegister[0];                                            // Присвоєння першого елемента до вказівника
    if (regEn->ptr != NULL) {                                           // Завершити виконання, якщо це єдиний елемент
        for (unsigned int i = 1; i < fullRegister.size(); i++) {
            regEn->ptr = fullRegister[i];                               // Замінити вказівник в поточній структурі на новий структурний ел.
            regEn = regEn->ptr;                                         // Переприсвоїти локальний вказівник значенням вказівника в ньому
            if (fullRegister[i]->ptr == NULL) {
                break;                                                  // Якщо останній елемент - завершити виконання
            }
        }
    }
    return(root);                                                       // Функція повертає вказівник на перший елемент динамічної структури
}
