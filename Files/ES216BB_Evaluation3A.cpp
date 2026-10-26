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

    EquipmentLoan Equipment;

    string First_Detail = "3D Printer";
    string Second_Detail = "Innovation Lab";
    int Maximum_Entries = 12;
    float LoanFee = 250.00;

    ifstream DataFile;
    string Data_File = "TextFile_EquipmentLoan.txt";
    string BorrowerName;

    Equipment.SetDetails(First_Detail, Second_Detail, Maximum_Entries);

    do
    {
        system("cls");
        cout << "+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+" << endl;
        cout << "   Laboratory Equipment Loan System" << endl;
        cout << "   ES216BB" << endl;
        cout << "   Evaluation 3" << endl;
        cout << "+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+" << endl;
        cout << endl;
        cout << "1. Display Equipment Details" << endl;
        cout << "2. Load Equipment Borrowers" << endl;
        cout << "3. Display Borrower List" << endl;
        cout << "4. Display Loan Revenue" << endl;
        cout << "5. Exit" << endl;
        cout << "Choice: ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
            case 1:
                Equipment.DisplayEquipmentDetails();
                cout << endl;
                break;
            case 2:
                cout << "All possible borrowers loaded" << endl;

                DataFile.open(Data_File);
                while (DataFile >> BorrowerName)
                    Equipment.AddBorrower(BorrowerName);
                DataFile.close();

                cout << endl;
                break;
            case 3:
                Equipment.DisplayBorrowerList();
                cout << endl;
                break;
            case 4:
                cout << "Loan Revenue: R" << Equipment.LoanRevenue(LoanFee) << endl;
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
