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

    ConferenceRegistration Conference;

    string Conference_Title = "AI Summit 2024";
    string Conference_Location = "Sandton Convention Centre";
    int Conference_MaxAttendees = 12;
    float RegistrationFee = 1500.00;

    ifstream BookingFile;
    string Registration_File = "TextFile_ConferenceRegistration.txt";
    string AttendeeName;

    Conference.SetDetails(Conference_Title, Conference_Location, Conference_MaxAttendees);

    do
    {
        system("cls");
        cout << "+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+" << endl;
        cout << "   Conference Registration System" << endl;
        cout << "   ES216BB" << endl;
        cout << "   Evaluation 3" << endl;
        cout << "+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+" << endl;
        cout << endl;
        cout << "1. Display Conference Details" << endl;
        cout << "2. Load Attendee Registrations" << endl;
        cout << "3. Display Attendee List" << endl;
        cout << "4. Display Registration Revenue" << endl;
        cout << "5. Exit" << endl;
        cout << "Choice: ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
            case 1:
                Conference.DisplayConferenceDetails();
                cout << endl;
                break;
            case 2:
                cout << "All possible registrations loaded" << endl;

                BookingFile.open(Registration_File);
                while (BookingFile >> AttendeeName)
                    Conference.AddAttendee(AttendeeName);
                BookingFile.close();

                cout << endl;
                break;
            case 3:
                Conference.DisplayAttendeeList();
                cout << endl;
                break;
            case 4:
                cout << "Registration Revenue: R" << Conference.RegistrationRevenue(RegistrationFee) << endl;
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