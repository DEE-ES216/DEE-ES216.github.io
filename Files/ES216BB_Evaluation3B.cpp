// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! //
/// DO NOT SUBMIT THIS FILE
// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! //

// ------------------------------------------------------------------- //
/// Application Libraries - DO NOT CHANGE
// ------------------------------------------------------------------- //
#include <iostream>
#include <conio.h>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

// ******************************************************************* //
/// HEADER FILE - CHANGE TO STUDENT NUMBER (e.g. "123456789.h")
// ******************************************************************* //

#include "STUDENT_NUMBER.h"

// ******************************************************************* //

// ------------------------------------------------------------------- //
/// Application Main Function - DO NOT CHANGE
// ------------------------------------------------------------------- //
int main(void)
{
    int choice;

    CourseEnrollment Course;

    string Course_Code = "INF101";
    string Course_Title = "Introduction to Information Systems";
    int Course_MaxStudents = 12;
    float EnrollmentFee = 1200.00;

    ifstream BookingFile;
    string Enrollment_File = "TextFile_CourseEnrollment.txt";
    string StudentName;

    Course.SetDetails(Course_Code, Course_Title, Course_MaxStudents);

    do
    {
        system("cls");
        cout << "+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+" << endl;
        cout << "   Course Enrollment System" << endl;
        cout << "   ES216BB" << endl;
        cout << "   Evaluation 3" << endl;
        cout << "+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+" << endl;
        cout << endl;
        cout << "1. Display Course Details" << endl;
        cout << "2. Load Student Enrollments" << endl;
        cout << "3. Display Student List" << endl;
        cout << "4. Display Enrollment Revenue" << endl;
        cout << "5. Exit" << endl;
        cout << "Choice: ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
            case 1:
                Course.DisplayCourseDetails();
                cout << endl;
                break;
            case 2:
                cout << "All possible enrollments loaded" << endl;

                BookingFile.open(Enrollment_File);
                while (BookingFile >> StudentName)
                    Course.AddStudent(StudentName);
                BookingFile.close();

                cout << endl;
                break;
            case 3:
                Course.DisplayStudentList();
                cout << endl;
                break;
            case 4:
                cout << "Enrollment Revenue: R" << Course.EnrollmentRevenue(EnrollmentFee) << endl;
                cout << endl;
                break;
            case 5:
                cout << "Exit Program..." << endl << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }

        cout << "Press any key to continue...";
        _getch();

    } while (1);

    return 0;
}

// ------------------------------------------------------------------- //
/// END
// ------------------------------------------------------------------- //