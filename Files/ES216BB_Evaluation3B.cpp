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

    WorkshopRegistration Workshop;

    string First_Detail = "Arduino Fundamentals";
    string Second_Detail = "Dr Ndlovu";
    int Maximum_Entries = 12;
    float RegistrationFee = 325.00;

    ifstream DataFile;
    string Data_File = "TextFile_WorkshopRegistration.txt";
    string ParticipantName;

    Workshop.SetDetails(First_Detail, Second_Detail, Maximum_Entries);

    do
    {
        system("cls");
        cout << "+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+" << endl;
        cout << "   Workshop Registration System" << endl;
        cout << "   ES216BB" << endl;
        cout << "   Evaluation 3" << endl;
        cout << "+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+" << endl;
        cout << endl;
        cout << "1. Display Workshop Details" << endl;
        cout << "2. Load Participant Registrations" << endl;
        cout << "3. Display Participant List" << endl;
        cout << "4. Display Registration Revenue" << endl;
        cout << "5. Exit" << endl;
        cout << "Choice: ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
            case 1:
                Workshop.DisplayWorkshopDetails();
                cout << endl;
                break;
            case 2:
                cout << "All possible participants loaded" << endl;

                DataFile.open(Data_File);
                while (DataFile >> ParticipantName)
                    Workshop.AddParticipant(ParticipantName);
                DataFile.close();

                cout << endl;
                break;
            case 3:
                Workshop.DisplayParticipantList();
                cout << endl;
                break;
            case 4:
                cout << "Registration Revenue: R" << Workshop.RegistrationRevenue(RegistrationFee) << endl;
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
