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

#include "ES216BB_EVMakeup_Header.h"

// ******************************************************************* //

// ------------------------------------------------------------------- //
/// Application Main Function - DO NOT CHANGE
// ------------------------------------------------------------------- //
int main(void)
{
    int choice;

    HotelReservation Room;

    string Room_Number = "H205";
    string Room_Type = "Standard King";
    int Room_MaxOccupancy = 12;
    float RoomRate = 950.75;

    ifstream BookingFile;
    string Guest_File = "ReservationHotelList.txt";
    string GuestName;

    Room.SetDetails(Room_Number, Room_Type, Room_MaxOccupancy);

    do
    {
        system("cls");
        cout << "+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+" << endl;
        cout << "   Hotel Reservation System" << endl;
        cout << "   ES216BB" << endl;
        cout << "   Evaluation Makeup" << endl;
        cout << "+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+" << endl;
        cout << endl;
        cout << "1. Display Reservation Details" << endl;
        cout << "2. Load Guest Reservations" << endl;
        cout << "3. Display Guest List" << endl;
        cout << "4. Display Reservation Revenue" << endl;
        cout << "5. Exit" << endl;
        cout << "Choice: ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
            case 1:
                Room.DisplayReservationDetails();
                cout << endl;
                break;
            case 2:
                cout << "All possible reservations loaded" << endl;

                BookingFile.open(Guest_File);
                while (BookingFile >> GuestName)
                    Room.AddGuest(GuestName);
                BookingFile.close();

                cout << endl;
                break;
            case 3:
                Room.DisplayGuestList();
                cout << endl;
                break;
            case 4:
                cout << "Reservation Revenue: R" << Room.ReservationRevenue(RoomRate) << endl;
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
