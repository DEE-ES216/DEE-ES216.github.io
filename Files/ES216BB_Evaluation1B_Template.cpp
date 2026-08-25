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

string systemName = "Wind Turbine Maintenance Planner";

struct ServiceTask
{
    int turbineID;
    int daysSinceService;
    float operatingHours;
    char typeCode;
    float serviceValue;
    void InitialiseServiceTask(int id, int days, float hours, char typeCode, float value);
};

int TextFileLineCount(string fileName);
void ReadFileAndPopulate(string fileName, ServiceTask **tasks, int *arraySize);
string CalculateServicePriority(ServiceTask task);
void DisplayServiceTask(ServiceTask task);
void DisplayServiceTasks(ServiceTask *tasks, int arraySize, int dueDays = 180);
void WriteMaintenancePlan(ServiceTask *tasks, int arraySize);
void DeleteServiceArray(ServiceTask **tasks, int *arraySize);

int main()
{
    ServiceTask referenceTask;
    referenceTask.InitialiseServiceTask(0, 0, 0.0f, 'R', 0.0f); // static structure and dot operator
    ServiceTask *tasks = nullptr;
    int arraySize = 0;
    int choice = 0;
    string fileName;

    do
    {
        system("cls");
        cout << systemName << endl;
        cout << "ES216BB" << endl;
        cout << "Evaluation 1" << endl << endl;

        cout << "1. Load service tasks" << endl;
        cout << "2. Display one task" << endl;
        cout << "3. Display due tasks" << endl;
        cout << "4. Export maintenance plan" << endl;
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
            cin >> fileName;
            ReadFileAndPopulate(fileName, &tasks, &arraySize);
        }
        else if (choice == 2)
        {
            if (tasks && arraySize)
                DisplayServiceTask(tasks[0]);
            else
                cout << "No service tasks are loaded.\n";
        }
        else if (choice == 3)
            DisplayServiceTasks(tasks, arraySize);
        else if (choice == 4)
            WriteMaintenancePlan(tasks, arraySize);
        else if (choice == 5)
        {
            DeleteServiceArray(&tasks, &arraySize);
            cout << "Maintenance planner closed.\n";
            cout << "\nPress any key to continue...";
            _getch();
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
// 1. InitialiseServiceTask
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
// 4. CalculateServicePriority
//------------------------------------------------------------------------------//
// Student Function Code - Delete this comment

//------------------------------------------------------------------------------//
// 5. DisplayServiceTask (overloaded)
//------------------------------------------------------------------------------//
// Student Function Code - Delete this comment

//------------------------------------------------------------------------------//
// 6. DisplayServiceTasks (default argument)
//------------------------------------------------------------------------------//
// Student Function Code - Delete this comment

//------------------------------------------------------------------------------//
// 7. WriteMaintenancePlan
//------------------------------------------------------------------------------//
// Student Function Code - Delete this comment

//------------------------------------------------------------------------------//
// 8. DeleteServiceArray
//------------------------------------------------------------------------------//
// Student Function Code - Delete this comment

// END - No code after this point
