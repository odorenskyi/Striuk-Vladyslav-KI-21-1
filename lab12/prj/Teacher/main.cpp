#include "ModulesStriuk.h"
#include "AdditionFunctions.h"

using namespace std;

int main()
{
    if (fileInDirectory() == false) { return 0; }

    ClassLab12_Striuk pipe;

    for (int i = 1; i < 11; i++) {
        ifstream testFile("../TestSuite/test_" + to_string(i) + ".txt");

        string pipeHeight;
        string pipeRadius;
        string bufLine;
        float bufFloat;

        getline(testFile, bufLine);
        pipeHeight = bufLine.erase(0, 12);
        getline(testFile, bufLine);
        pipeRadius = bufLine.erase(0, 12);

        pipe.setPipeHeight(pipeHeight, bufFloat);
        pipe.setPipeRadius(pipeRadius, bufFloat);

        cout << pipe.getPipeHeight() << endl;
        cout << pipe.getPipeRadius() << endl;
        cout << pipe.getPipeSquare() << endl << endl;

        testFile.close();
    }


    return 0;
}
