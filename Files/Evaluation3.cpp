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

#include "FlightBooking.h" // #include "123456789.h"

//------------------------------------------------------------------------------//
/// MAIN FUNCTION - Do Not Modify
//------------------------------------------------------------------------------//
int main (void)
{
    int choice;

    FlightBooking Flight;

    string Flight_Number = "CA140";
    string Flight_DestinationName = "Durban - King Shaka Airport";
    int Flight_MaxSeats = 12;
    float TicketPrice = 590.20;

    ifstream BookingFile;
    string Flight_Bookings = "Bookings.txt";
    string PassengerName;

    Flight.SetDetails(Flight_Number,Flight_DestinationName,Flight_MaxSeats);

    do
    {
        system("cls");
        cout << "+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+" << endl;
        cout << "   Flight Booking Platform" << endl;
        cout << "   ES216BB" << endl;
        cout << "   Evaluation 3" << endl;
        cout << "+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+" << endl;
        cout << endl;
        cout << "1. Display Flight Details" << endl;
        cout << "2. Load Flight Passenger Bookings " << endl;
        cout << "3. Display Flight Passengers" << endl;
        cout << "4. Display Flight Profit" << endl;
        cout << "5. Exit" << endl;
        cout << "Choice: ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
            case 1:
                Flight.DisplayFlightDetails();
                cout << endl;
                break;
            case 2:
                cout << "All possible bookings loaded" << endl;

                BookingFile.open(Flight_Bookings);
                while ( BookingFile >> PassengerName ) //end of file
                    Flight.AddPassenger(PassengerName);
                BookingFile.close();

                cout << endl;
                break;
            case 3:
                Flight.DisplayPassengerList();
                cout << endl;
                break;
            case 4:
                cout << "Flight Profit: R" << Flight.FlightProfit(TicketPrice) << endl;
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
