#include "ModulesStriuk.h"

double s_calculation(float x, float y, float z)
{
    const double PI = 3.14159;
    return log(x - y) + sqrt((PI * pow(x, 2)) / x + (z / (2 * pow(y, 2))));
}

void salaryAndTaxesOutput(unsigned char workingHours[5])
{
    float fullSalary = 0;
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


