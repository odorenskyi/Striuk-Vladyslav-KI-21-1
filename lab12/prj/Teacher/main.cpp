#include "AdditionFunctions.h"

using namespace std;

int main()
{
    if (fileInDirectory() == false) { return 0; }

    ClassLab12_Striuk pipe;

    ifstream caseFile("../TestSuite/TS.txt");
    ofstream resultFile("../TestSuite/TestResults.txt");
    if (filesIsOpen(resultFile, caseFile) == false) { return 0; }

    for (int i = 1; i < 11; i++) {
        string pipeHeight;
        string pipeRadius;
        string pipeSquare;
        string bufLine;
        float bufFloat;

        getline(caseFile, bufLine);
        pipeHeight = bufLine.erase(0, 12);

        getline(caseFile, bufLine);
        pipeRadius = bufLine.erase(0, 12);

        getline(caseFile, bufLine);
        pipeSquare = bufLine.erase(0, 12);

        pipe.setPipeHeight(pipeHeight, bufFloat);
        pipe.setPipeRadius(pipeRadius, bufFloat);
        bufLine = to_string(pipe.getPipeSquare());

        declareTestSuiteResults(resultFile, pipe, bufLine, pipeSquare, i);
    }

    caseFile.close();
    resultFile.close();
    system("pause");
    return 0;
}
