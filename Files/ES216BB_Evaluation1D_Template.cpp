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

string tariffName = "EV Charging Tariff";
string systemName = "EV Charging Session Analysis";

struct ChargingSession
{
    int stationID;
    int startHour;
    char sessionCode;
    float recordedAmount;
    char tariffBand;
    void InitialiseChargingSession(int id, int hour, char typeCode, float amount, char band);
};

int TextFileLineCount(string fileName);
void ReadFileAndPopulate(string fileName, ChargingSession **sessions, int *arraySize);
float CalculateChargeCost(ChargingSession session);
void DisplayTariffName();
template <typename T> T FindPeak(T first, T second);
void DisplayPeakSessions(ChargingSession *sessions, int arraySize);
void WritePeakSummary(ChargingSession *sessions, int arraySize);
void DeleteSessionArray(ChargingSession **sessions, int *arraySize);

int main()
{
    ChargingSession referenceSession;
    referenceSession.InitialiseChargingSession(0, 0, 'C', 0.0, 'L'); // dot operator
    ChargingSession *sessions = nullptr;
    int arraySize = 0;
    int choice = 0;
    string fileName;

    do
    {
        system("cls");
        cout << systemName << endl;
        cout << "ES216BB" << endl;
        cout << "Evaluation 1" << endl << endl;

        cout << "1. Load sessions" << endl;
        cout << "2. Display peak sessions" << endl;
        cout << "3. Display tariff label" << endl;
        cout << "4. Export peak summary" << endl;
        cout << "5. Exit\nChoice: ";

        if (!(cin >> choice))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            choice = 0;
        }
        cout << endl;

        if (choice == 1)
        {
            cout << "Input file: ";
            cin >> fileName; ReadFileAndPopulate(fileName, &sessions, &arraySize);
        }
        else if (choice == 2)
            DisplayPeakSessions(sessions, arraySize);
        else if (choice == 3)
            DisplayTariffName();
        else if (choice == 4)
            WritePeakSummary(sessions, arraySize);
        else if (choice == 5)
        {
            DeleteSessionArray(&sessions, &arraySize);
            cout << "Session analyser closed.\n";
            return 0;
        }
        else
            cout << "Invalid choice.\n";

        cout << "\nPress any key to continue...";
        _getch();

    } while (choice != 5);

    return 0;
}
// FUNCTION IMPLEMENTATION
//------------------------------------------------------------------------------//
// 1. InitialiseChargingSession
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
// 4. CalculateChargeCost
//------------------------------------------------------------------------------//
// Student Function Code - Delete this comment

//------------------------------------------------------------------------------//
// 5. DisplayTariffName (scope resolution)
//------------------------------------------------------------------------------//
// Student Function Code - Delete this comment

//------------------------------------------------------------------------------//
// 6. FindPeak (function template)
//------------------------------------------------------------------------------//
// Student Function Code - Delete this comment

//------------------------------------------------------------------------------//
// 7. WritePeakSummary
//------------------------------------------------------------------------------//
// Student Function Code - Delete this comment

//------------------------------------------------------------------------------//
// 8. DeleteSessionArray
//------------------------------------------------------------------------------//
// Student Function Code - Delete this comment

// END - No code after this point
