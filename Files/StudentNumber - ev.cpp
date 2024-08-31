//------------------------------------------------------------------------------//
/// STUDENT AND EVALUATION DETAILS - Complete
//------------------------------------------------------------------------------//
/// Student Number:
/// Date:
/// Campus:
/// Department:
/// Venue:
//------------------------------------------------------------------------------//

//------------------------------------------------------------------------------//
/// EVALUATION REQUIREMENTS
//------------------------------------------------------------------------------//
/// a.	Remember to save your work on the PC “D: Drive” and save regularly throughout the evaluation.
/// b.	Do not modify the given code in the “.cpp” file except for implementing the requested functions as required.
/// c.	Use the exact function names and parameters as used in the in the “.cpp” file function prototypes and main function.
/// d.	Complete the C++ functions below the main function in each comment block as shown.
//------------------------------------------------------------------------------//

//------------------------------------------------------------------------------//
/// LIBRARIES - Do not modify
//------------------------------------------------------------------------------//

#include <iostream>
#include <conio.h>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

//------------------------------------------------------------------------------//
/// RECORD STRUCTURE - Do not modify
//------------------------------------------------------------------------------//
struct Record
{
    //Structure Member Variables
    string sData;
    float fData;
    //Structure Member Function Prototype
    void InitialiseRecord(string sPara, float fPara);
};

//------------------------------------------------------------------------------//
/// FUNCTION PROTOTYPES - Do not modify
//------------------------------------------------------------------------------//
int TextFileLineCount(string FileName);
void ReadFileAndPopulate(string FileName, Record **records, int *arrSize);
float AverageArray(Record *records, int arrSize);
void DisplayRecordData(Record *records, int arrSize);
void DisplayRecordData(Record *records, int arrSize, float avg);
void DeleteArray(Record **records, int *arrSize);

//------------------------------------------------------------------------------//
/// MAIN FUNCTION - Do not modify
//------------------------------------------------------------------------------//
int main(void)
{
    Record *records = nullptr;
    int arrSize = 0;
    int choice;
    string fileName;
    float avg;

    do
    {
        system("cls");
        cout << "----------------------------" << endl;
        cout << "       Evaluation 1          " << endl;
        cout << "----------------------------" << endl;
        cout << "1. Read and Populate Array" << endl;
        cout << "2. Calculate Array Average" << endl;
        cout << "3. Display Data" << endl;
        cout << "4. Display Data And Deviation" << endl;
        cout << "5. Delete Array and Exit" << endl;
        cout << "Choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "\nFile Name: ";
                cin >> fileName;
                ReadFileAndPopulate(fileName, &records, &arrSize);
                cout << "\nPress any key to continue...";
                _getch();
                break;
            case 2:
                avg = AverageArray(records, arrSize);
                cout << "\nAverage: " << avg << endl;
                cout << "\nPress any key to continue...";
                _getch();
                break;
            case 3:
                cout << endl;
                DisplayRecordData(records, arrSize);
                cout << "\nPress any key to continue...";
                _getch();
                break;
            case 4:
                cout << endl;
                avg = AverageArray(records, arrSize);
                DisplayRecordData(records, arrSize, avg);
                cout << "\nPress any key to continue...";
                _getch();
                break;
            case 5:
                DeleteArray(&records, &arrSize);
                cout << "\nExit Program...\n";
                break;
            default:
                cout << "\nInvalid choice. Please try again.\n";
                cout << "\nPress any key to continue...";
                _getch();
                break;
        }
    } while (choice != 5);

    return 0;
}

//------------------------------------------------------------------------------//
/// FUNCTION IMPLEMENTATION
//------------------------------------------------------------------------------//
/// 1. InitialiseRecord Structure Member Function
//------------------------------------------------------------------------------//


//Student Function Code - Delete this comment


//------------------------------------------------------------------------------//
/// 2. TextFileLineCount Function
//------------------------------------------------------------------------------//


//Student Function Code - Delete this comment


//------------------------------------------------------------------------------//
/// 3. ReadFileAndPopulate Function
//------------------------------------------------------------------------------//


//Student Function Code - Delete this comment


//------------------------------------------------------------------------------//
/// 4. AverageArray Function
//------------------------------------------------------------------------------//


//Student Function Code - Delete this comment


//------------------------------------------------------------------------------//
/// 5. DisplayRecordData Function  - Basic Display, 2 Parameters
//------------------------------------------------------------------------------//


//Student Function Code - Delete this comment


//------------------------------------------------------------------------------//
/// 6. DisplayRecordData Function - Display With Deviation, 3 Parameters
//------------------------------------------------------------------------------//


//Student Function Code - Delete this comment


//------------------------------------------------------------------------------//
/// 7. DeleteArray Function
//------------------------------------------------------------------------------//


//Student Function Code - Delete this comment


//------------------------------------------------------------------------------//
/// END - No code after this comment block
//------------------------------------------------------------------------------//
