//------------------------------------------------------------------------------//
// STUDENT AND EVALUATION DETAILS - Complete student detail
//------------------------------------------------------------------------------//
// Student Number:
// Date:
// Campus:
// Department:
// Venue:
//------------------------------------------------------------------------------//
// EVALUATION REQUIREMENTS
//------------------------------------------------------------------------------//
// a. Save your work regularly on the PC D: drive.
// b. Do not modify code above the FUNCTION IMPLEMENTATION heading.
// c. Use the exact function names and parameters supplied below.
// d. Complete every requested function in the supplied comment blocks.
//------------------------------------------------------------------------------//
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <new>
#include <limits>
#include <conio.h>

using namespace std;

string systemName = "Solar Inverter Diagnostic System";

struct InverterTest
{
    int inverterID;
    float dcInput;
    float acOutput;
    char stateCode;
    float diagnosticValue;
    void InitialiseInverterTest(int id, float dc, float ac, char sCode, float value);
};

int TextFileLineCount(string fileName);
void ReadFileAndPopulate(string fileName, InverterTest **tests, int *arraySize);
inline float CalculateEfficiency(InverterTest test);
void DisplaySystemName();
void DisplayInverterTests(InverterTest *tests, int arraySize, bool faultsOnly = false);
void WriteFaultReport(InverterTest *tests, int arraySize);
void DeleteInverterArray(InverterTest **tests, int *arraySize);

int main()
{
    InverterTest referenceTest;
    referenceTest.InitialiseInverterTest(0, 0.0, 0.0, 'P', 0.0); // dot operator
    InverterTest *tests = nullptr;
    int arraySize = 0;
    int choice = 0;
    string fileName;

    do
    {
        system("cls");
        cout << systemName << endl;
        cout << "ES216BB" << endl;
        cout << "Evaluation 1" << endl << endl;

        cout << "1. Load inverter tests" << endl;
        cout << "2. Display all test results" << endl;
        cout << "3. Display warnings and faults" << endl;
        cout << "4. Export fault alerts" << endl;
        cout << "5. Exit\nChoice: ";

        if (!(cin >> choice))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            choice = 0;
        }
        cout << endl;

        switch (choice)
        {
            case 1:
                cout << "Input file: ";
                cin >> fileName;
                ReadFileAndPopulate(fileName, &tests, &arraySize);
                break;
            case 2:
                DisplaySystemName();
                DisplayInverterTests(tests, arraySize);
                break;
            case 3:
                DisplayInverterTests(tests, arraySize, true);
                break;
            case 4:
                WriteFaultReport(tests, arraySize);
                break;
            case 5:
                DeleteInverterArray(&tests, &arraySize);
                cout << "Diagnostic application closed.\n";
                cout << "\nPress any key to continue...";
                _getch();
                return 0;
            default:
                cout << "Invalid choice.\n";
        }

        cout << "\nPress any key to continue...";
        _getch();

    } while (choice != 5);
    return 0;
}

// FUNCTION IMPLEMENTATION
//------------------------------------------------------------------------------//
// 1. InitialiseInverterTest
//------------------------------------------------------------------------------//
// Student Function Code - Delete this comment

//------------------------------------------------------------------------------//
// 2. TextFileLineCount
//------------------------------------------------------------------------------//
// Student Function Code - Delete this comment

//------------------------------------------------------------------------------//
// 3. ReadFileAndPopulate
//------------------------------------------------------------------------------//
// Student Function Code - Delete this comment

//------------------------------------------------------------------------------//
// 4. CalculateEfficiency
//------------------------------------------------------------------------------//
// Student Function Code - Delete this comment

//------------------------------------------------------------------------------//
// 5. DisplaySystemName
//------------------------------------------------------------------------------//
// Student Function Code - Delete this comment

//------------------------------------------------------------------------------//
// 6. DisplayInverterTests
//------------------------------------------------------------------------------//
// Student Function Code - Delete this comment

//------------------------------------------------------------------------------//
// 7. WriteFaultReport
//------------------------------------------------------------------------------//
// Student Function Code - Delete this comment

//------------------------------------------------------------------------------//
// 8. DeleteInverterArray
//------------------------------------------------------------------------------//
// Student Function Code - Delete this comment

// END - No code after this point
