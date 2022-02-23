#include "ModulesStriuk.h"

double s_calculation(float x, float y, float z)
{
    const double PI = 3.14159;
    return log(x - y) + sqrt((PI * pow(x, 2)) / x + (z / (2 * pow(y, 2))));
}

void salaryAndTaxesOutput(unsigned char workingHours[5])
{
    float fullSalary = 0;
    for (int i = 0; i < 5; i++) {
        if (workingHours[i] < 0) {
            cout << "ПОМИЛКА: від\'ємне значення зарплати ! (автоматично визначається як 0)" << endl;
            workingHours[i] = 0;
        }
    }
    cout << "ПН: " << workingHours[0] << endl
         << "ВТ: " << workingHours[1] << endl
         << "СР: " << workingHours[2] << endl
         << "ЧТ: " << workingHours[3] << endl
         << "ПТ: " << workingHours[4] << endl << endl;

    for (int i = 0; i < 5; i++) {
        if (workingHours[i] <= 0)   { continue; }
        else if (workingHours <= 8) { fullSalary += workingHours * 40; }
        else                        { fullSalary += workingHours * 40 + 300; }
    }
    cout << "Нарахована сума зарплатні: "
         << fullSalary << " грн" << endl;

    cout << "Податок на прибуток фізособи (15%%): "
         << fullSalary * 0.15 << " грн" << endl
         << "Податок до пенсійного фонду (2%%): "
         << fullSalary * 0.02 << " грн" << endl
         << "Податок до фонду страхування на випадок безробіття (0.6%%): "
         << fullSalary * 0.006 << " грн" << endl
         << "Податок на соціально страхування у випадку втрати працезатності (1%%): "
         << fullSalary * 0.01 << " грн" << endl;
}

void socksSizeStandart(unsigned char sSize)
{
    if (sSize != S && sSize != M && sSize != L && sSize != XL && sSize != XXL) {
        cout << "ПОМИЛКА: Розмір шкарпеток не відповідає стандарту !" << endl;
    }
    cout << "Розмір шкарпеток за українською системою: " << sSize << endl;
    cout << "Розмір шкарпеток за системою США: " << (sSize / 2) - 3.5 << endl;
    cout << "Розмір шкарпеток за системою ЄС: " << sSize + 14 << "//" << sSize + 15 << endl;
}

void numberByteManipulation(unsigned int number)
{
    if (number < 0 || number > 7483650) {
        cout << "ПОМИЛКА: число в недоустимому діапазоні !" << endl;
    }

    int reverseNumber = 0;
    unsigned int bitCount = 0;

    for (; number; number /= 2;) {
        reverseNumber = reverseNumber * 2 + number % 2;
    }

    number = reverseNumber;
    (number >> 13) & 1 == 1 ? bitValue = 1 : bitValue = 0

    for (unsigned int bitCount = 0, int i = 0; i <= 31; i++) {
        bitCount += ((number & (1 << i)) != (number >> 13) & 1);
    }

    switch (number >> 13) & 1:
        case 0: cout << "Кількість двійкових 1 = " << bitCount << endl;
        case 1: cout << "Кількість двійкових 0 = " << bitCount << endl;
}

