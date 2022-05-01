#include "ModulesOzhekhovskyi.h"

string inputTextData(int numBytes, string data, string msg)
{
    do {
        cout << msg;
        cin >> data;
    } while (data.length() < 1  || data.length() > numBytes);
    return data;
}

string inputNumData(string data, int maxNum, string msg)
{
    string num = "";
    int intNum = 0;

    do {
        cout << msg;
        cin >> num;

        string::size_type sz;
        intNum = stoi(num, &sz);

        if (intNum > 0 && intNum < 10) {
            data += num;
            return data;
        } else if (intNum > 9 && intNum <= maxNum){
            data = num;
            return data;
        }
    } while(intNum < 1 || intNum > maxNum);
}

string inputYearData(string data, string msg)
{
    int intNum = 0;

    do {
        cout << msg;
        cin >> data;

        string::size_type sz;
        intNum = stoi(data, &sz);

        if (intNum >= 1800 && intNum < 2023) return data;

    } while(intNum < 1800 || intNum > 2022);
}

string inputAdditions(string data, string msg)
{
    do {
        cout << msg;
        cin.ignore();
        getline(cin, data);

        if (data.length() <= 255) return data;

    } while(data.length() > 255);
}

void addElement(regEnrollment *rootNode)
{
    regEnrollment *bufNode = rootNode;
    regEnrollment *newElement = new regEnrollment;

    while (bufNode->ptr != nullptr) {
        bufNode = bufNode->ptr;
    }

    bufNode->ptr = newElement;
    newElement->ptr = nullptr;

    string name = "";
    string lastName = "";
    string patronymic = "";
    string carBrand = "";
    string gradYear = "";
    string dateDay = "0";
    string dateMonth = "0";
    string dateYear = "";
    string govNum = "";
    char additions[255] = "";

    strcpy(newElement->firstName, inputTextData(35, name, "Enter your name: ").c_str());
    strcpy(newElement->lastName, inputTextData(35, lastName, "Enter your last name: ").c_str());
    strcpy(newElement->patronymic, inputTextData(35, patronymic, "Enter your patronymic: ").c_str());
    strcpy(newElement->carBrand, inputTextData(35, carBrand, "Enter your car brand: ").c_str());
    strcpy(newElement->gradYear, inputYearData(gradYear, "Enter your graduation year: ").c_str());
    strcpy(newElement->dateDay, inputNumData(dateDay, 31, "Enter the day of registration: ").c_str());
    strcpy(newElement->dateMonth, inputNumData(dateMonth, 12, "Enter the month of registration: ").c_str());
    strcpy(newElement->dateYear, inputYearData(dateYear, "Enter the year of registration: ").c_str());
    strcpy(newElement->govNumber, inputTextData(8, govNum, "Enter your state number: ").c_str());
    strcpy(newElement->additions, inputAdditions(additions, "Enter additions informations: ").c_str());
}

void deleteElement(regEnrollment *&root)
{
    regEnrollment *findNode = root;
    regEnrollment *buffer = nullptr;

    char searchRequest[9] = "";
    cout << endl << "Choose element for deleting by state number: ";
    cin >> searchRequest;

    do {
        if (int(strcmp(searchRequest, findNode->govNumber)) == 0) {
            if (findNode == root) {
                root = root->ptr;
            }
            else {
                buffer->ptr = findNode->ptr;
            }
            delete(findNode);
            break;
        }
        buffer = findNode;
        findNode = findNode->ptr;
    } while (findNode != nullptr);
}
