//------------------------------------------------------------------------------//
/// STUDENT AND EVALUATION DETAILS - Complete Student Detail
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
/// a. Remember to save your work on the PC “D: Drive” and save regularly throughout the evaluation.
/// b. Do not modify the given code in the “.cpp” file except for implementing the requested functions as required.
/// c. Use the exact function names and parameters as used in the “.cpp” file function prototypes and main function.
/// d. Complete the C++ functions below the main function in each comment block as shown.
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
/// EMPLOYEE STRUCTURE - Do not modify
//------------------------------------------------------------------------------//
struct Employee
{
    int employeeID;
    string employeeName;
    float hoursWorked;
    float hourlyRate;
    void InitialiseEmployeeRecord(int id, string name, float hours, float rate);
};

//------------------------------------------------------------------------------//
/// FUNCTION PROTOTYPES - Do not modify
//------------------------------------------------------------------------------//
int TextFileLineCount(string fileName);
void ReadFileAndPopulate(string fileName, Employee **employees, int *arraySize);
float CalculateTotalPayroll(Employee *employees, int arraySize);
void DisplayAllEmployees(Employee *employees, int arraySize);
void DisplayOvertimeEmployees(Employee *employees, int arraySize);
void DeleteEmployeeArray(Employee **employees, int *arraySize);

//------------------------------------------------------------------------------//
/// MAIN FUNCTION - Do not modify
//------------------------------------------------------------------------------//
int main(void)
{
    Employee *employees = nullptr;
    int arraySize = 0, choice;
    string fileName;

    do
    {
        system("cls");
        cout << "--------------------------------------" << endl;
        cout << "        Employee Payroll System       " << endl;
        cout << "--------------------------------------" << endl;
        cout << "1. Load employee data from file" << endl;
        cout << "2. Calculate total payroll amount" << endl;
        cout << "3. Display all employee records" << endl;
        cout << "4. Display employees with overtime" << endl;
        cout << "5. Delete data and exit" << endl;
        cout << "Choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "\nFile Name: ";
                cin >> fileName;
                ReadFileAndPopulate(fileName, &employees, &arraySize);
                cout << "\nPress any key to continue...";
                _getch();
                break;
            case 2:
                cout << "\nTotal Payroll Amount: $" << CalculateTotalPayroll(employees, arraySize) << endl;
                cout << "\nPress any key to continue...";
                _getch();
                break;
            case 3:
                DisplayAllEmployees(employees, arraySize);
                cout << "\nPress any key to continue...";
                _getch();
                break;
            case 4:
                DisplayOvertimeEmployees(employees, arraySize);
                cout << "\nPress any key to continue...";
                _getch();
                break;
            case 5:
                DeleteEmployeeArray(&employees, &arraySize);
                cout << "\nExiting program...\n";
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
// 1. Initialise Employee Record Function
//------------------------------------------------------------------------------//




//------------------------------------------------------------------------------//
// 2. Text File Line Count Function
//------------------------------------------------------------------------------//




//------------------------------------------------------------------------------//
// 3. Read File And Populate Function
//------------------------------------------------------------------------------//




//------------------------------------------------------------------------------//
// 4. Calculate Total Payroll Function
//------------------------------------------------------------------------------//




//------------------------------------------------------------------------------//
// 5. Display All Employees Function
//------------------------------------------------------------------------------//




//------------------------------------------------------------------------------//
// 6. Display Overtime Employees Function
//------------------------------------------------------------------------------//




//------------------------------------------------------------------------------//
// 7. Delete Employee Array Function
//------------------------------------------------------------------------------//




//------------------------------------------------------------------------------//
/// END - No code after this point
//------------------------------------------------------------------------------//