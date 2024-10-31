//------------------------------------------------------------------------------//
/// EVALUATION REQUIREMENTS
//------------------------------------------------------------------------------//
/// a.	Remember to save your work on the PC “D: Drive” and save regularly throughout the evaluation.
/// b.	Do not modify the given code in the “.cpp” file except for your header file include statement.
/// c.	Use the exact function names and parameters as used in the in the “.cpp” file function calls.
/// d.	Complete class definition and class functions in seperate header file.
//------------------------------------------------------------------------------//

//------------------------------------------------------------------------------//
/// LIBRARIES - Do Not Modify
//------------------------------------------------------------------------------//
#include <iostream>
#include <conio.h>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

//------------------------------------------------------------------------------//
/// Class Header File - Change to you student Number
//------------------------------------------------------------------------------//

#include "CinemaBooking.h" // #include "123456789.h"

//------------------------------------------------------------------------------//
/// MAIN FUNCTION - Do Not Modify
//------------------------------------------------------------------------------//
int main (void)
{
    int choice;

    CinemaBooking Cinema;

    string Cinema_Name = "CinemaOne";
    string Cinema_MovieName = "Life of TUT";
    int Cinema_MaxSeats = 12;
    float TicketPrice = 29.90;

    ifstream BookingFile;
    string Cinema_Bookings = "Bookings.txt";
    string ClientName;

    Cinema.SetDetails(Cinema_Name,Cinema_MovieName,Cinema_MaxSeats);

    do
    {
        system("cls");
        cout << "+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+" << endl;
        cout << "   Cinema Booking Platform" << endl;
        cout << "   ES216BB" << endl;
        cout << "   Evaluation 3" << endl;
        cout << "+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+" << endl;
        cout << endl;
        cout << "1. Display Cinema Details" << endl;
        cout << "2. Load Cinema Client Bookings " << endl;
        cout << "3. Display Cinema Clients" << endl;
        cout << "4. Display Cinema Profit" << endl;
        cout << "5. Exit" << endl;
        cout << "Choice: ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
            case 1:
                Cinema.DisplayCinemaDetails();
                cout << endl;
                break;
            case 2:
                cout << "All possible bookings loaded" << endl;
                BookingFile.open(Cinema_Bookings);
                while ( BookingFile >> ClientName ) //end of file
                    Cinema.AddClient(ClientName);
                BookingFile.close();
                cout << endl;
                break;
            case 3:
                Cinema.DisplayClientList();
                cout << endl;
                break;
            case 4:
                cout << "Cinema Profit: R" << Cinema.CinemaProfit(TicketPrice) << endl;
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
