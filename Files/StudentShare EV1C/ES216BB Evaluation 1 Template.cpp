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
/// STUDENT STRUCTURE - Do not modify
//------------------------------------------------------------------------------//
struct Student
{
    int studentID;
    string studentName;
    float studentGPA;
    void InitialiseStudentRecord(int id, string name, float gpa);
};

//------------------------------------------------------------------------------//
/// FUNCTION PROTOTYPES - Do not modify
//------------------------------------------------------------------------------//
int TextFileLineCount(string fileName);
void ReadFileAndPopulate(string fileName, Student **students, int *arraySize);
float CalculateAverageGPA(Student *students, int arraySize);
void DisplayAllStudents(Student *students, int arraySize);
void DisplayBelowAverageStudents(Student *students, int arraySize, float avgGPA);
void DeleteStudentArray(Student **students, int *arraySize);

//------------------------------------------------------------------------------//
/// MAIN FUNCTION - Do not modify
//------------------------------------------------------------------------------//
int main(void)
{
    Student *students = nullptr;
    int arraySize = 0, choice;
    string fileName;
    float avgGPA;

    do
    {
        system("cls");
        cout << "--------------------------------------" << endl;
        cout << "      Student Database System         " << endl;
        cout << "--------------------------------------" << endl;
        cout << "1. Load student data from file" << endl;
        cout << "2. Calculate average GPA" << endl;
        cout << "3. Display all student records" << endl;
        cout << "4. Display below-average students" << endl;
        cout << "5. Delete data and exit" << endl;
        cout << "Choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "\nFile Name: ";
                cin >> fileName;
                ReadFileAndPopulate(fileName, &students, &arraySize);
                cout << "\nPress any key to continue...";
                _getch();
                break;
            case 2:
                avgGPA = CalculateAverageGPA(students, arraySize);
                cout << "\nAverage GPA: " << avgGPA << endl;
                cout << "\nPress any key to continue...";
                _getch();
                break;
            case 3:
                DisplayAllStudents(students, arraySize);
                cout << "\nPress any key to continue...";
                _getch();
                break;
            case 4:
                avgGPA = CalculateAverageGPA(students, arraySize);
                DisplayBelowAverageStudents(students, arraySize, avgGPA);
                cout << "\nPress any key to continue...";
                _getch();
                break;
            case 5:
                DeleteStudentArray(&students, &arraySize);
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
/// 1. Initialise Student Record Function
//------------------------------------------------------------------------------//




//------------------------------------------------------------------------------//
/// 2. Text File Line Count Function
//------------------------------------------------------------------------------//




//------------------------------------------------------------------------------//
/// 3. Read File And Populate Function
//------------------------------------------------------------------------------//




//------------------------------------------------------------------------------//
/// 4. Calculate Average GPA Function
//------------------------------------------------------------------------------//




//------------------------------------------------------------------------------//
/// 5. Display All Students Function
//------------------------------------------------------------------------------//




//------------------------------------------------------------------------------//
/// 6. Display Below Average Students Function
//------------------------------------------------------------------------------//




//------------------------------------------------------------------------------//
/// 7. Delete Student Array Function
//------------------------------------------------------------------------------//




//------------------------------------------------------------------------------//
/// END - No code after this point
//------------------------------------------------------------------------------//