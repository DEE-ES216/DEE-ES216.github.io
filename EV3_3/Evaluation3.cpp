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

#include "TrainBooking.h" // #include "123456789.h"

//------------------------------------------------------------------------------//
/// MAIN FUNCTION - Do Not Modify
//------------------------------------------------------------------------------//
int main (void)
{
    int choice;

    TrainBooking Train;

    string Train_Number = "T141";
    string Train_DestinationName = "Pretoria - Central Station";
    int Train_MaxSeats = 12;
    float TicketPrice = 15.20;

    ifstream BookingFile;
    string Train_Bookings = "Bookings.txt";
    string PassengerName;

    Train.SetDetails(Train_Number,Train_DestinationName,Train_MaxSeats);

    do
    {
        system("cls");
        cout << "+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+" << endl;
        cout << "   Train Booking Platform" << endl;
        cout << "   ES216BB" << endl;
        cout << "   Evaluation 3" << endl;
        cout << "+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+" << endl;
        cout << endl;
        cout << "1. Display Train Details" << endl;
        cout << "2. Load Train Passenger Bookings " << endl;
        cout << "3. Display Train Passengers" << endl;
        cout << "4. Display Train Profit" << endl;
        cout << "5. Exit" << endl;
        cout << "Choice: ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
            case 1:
                Train.DisplayTrainDetails();
                cout << endl;
                break;
            case 2:
                cout << "All possible bookings loaded" << endl;
                BookingFile.open(Train_Bookings);
                while ( BookingFile >> PassengerName ) //end of file
                    Train.AddPassenger(PassengerName);
                BookingFile.close();
                cout << endl;
                break;
            case 3:
                Train.DisplayPassengerList();
                cout << endl;
                break;
            case 4:
                cout << "Train Profit: R" << Train.TrainProfit(TicketPrice) << endl;
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
