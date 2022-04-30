#include "ModulesBaramba.h"

using namespace std;

void writeToRegistData(fstream &file, regEnrollment *regEn)
{
    if (regEn == nullptr) { cout << "Error: can't write an empty information" << endl; return; }
    file.close();
    file.open("RegisterDataBase.dat", ios::binary | ios::out | ofstream::trunc);
    file.seekg(0);
    regEnrollment *buffer = regEn;

    while (buffer != nullptr) {
        file.write((char*)&*buffer, sizeof(regEnrollment));
        buffer = buffer->ptr;
    }
    file.close();
}

void dataOutput(fstream &file, regEnrollment *regEn, int action) {
    if (regEn == nullptr) { cout << "Error: can't show an empty information" << endl; return; }
    #define OUTPUT(stream) ((stream) == 1 ? cout : file)
    regEnrollment *buffer = regEn;
    bool isFirstElem = true;
    file.seekg(0);

    do {
        if (isFirstElem == false) { buffer = buffer->ptr; }

        OUTPUT(action) << " ----------------------------------------------------------------------------------" << endl << left;
        OUTPUT(action) << "|" << setw(17) << "First name" << "|" << setw(64) << buffer->firstName << "|" << endl
             << "|" << setw(17) << "Last name" << "|" << setw(64) << buffer->lastName << "|" << endl
             << "|" << setw(17) << "Patronymic" << "|" << setw(64) << buffer->patronymic << "|" << endl
             << "|" << setw(17) << "Car brand" << "|" << setw(64) << buffer->carBrand << "|" << endl
             << "|" << setw(17) << "Graduation year" << "|" << setw(64) << buffer->gradYear << "|" << endl
             << "|" << setw(17) << "Registration day" << "|" << buffer->dateDay << "."
                                                             << buffer->dateMonth << "."
                                                             << buffer->dateYear << setw(54) << "" << "|" << endl
             << "|" << setw(17) << "Registration code" << "|" << setw(64) << buffer->govNumber << "|" << endl;

        OUTPUT(action) << "|" << setw(17) << "Additions" << "|";
        for(int i = 0, line = 0; line < 4; i++) {
            if(buffer->additions[line * 64 + i] == 0) {
                OUTPUT(action) << setw(64 - i) << "" << "|" << endl;
                break;
            }
            if((i+1) % 64 != 0) {
                OUTPUT(action) << buffer->additions[line * 64 + i];
            }
            else {
                OUTPUT(action) << " |" << endl << "|" << setw(17) << "" << "|";
                line++;
                i = -1;
            }
        }

        OUTPUT(action) << " ----------------------------------------------------------------------------------" << endl;
        if (buffer->ptr != nullptr) {
            OUTPUT(action) << "|" << setw(81) << "" << " |" << endl;
        }
        isFirstElem = false;
    } while (buffer->ptr != nullptr);

    if (action != 1 && buffer->ptr == nullptr) { cout << "Information writed to TextFile.txt" << endl; }
}
