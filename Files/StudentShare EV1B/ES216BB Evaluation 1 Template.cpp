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
/// INVENTORY ITEM STRUCTURE - Do not modify
//------------------------------------------------------------------------------//
struct InventoryItem
{
    int itemID;
    string itemName;
    int quantity;
    float unitPrice;
    void InitialiseInventoryItem(int id, string name, int qty, float price);
};

//------------------------------------------------------------------------------//
/// FUNCTION PROTOTYPES - Do not modify
//------------------------------------------------------------------------------//
int TextFileLineCount(string fileName);
void ReadFileAndPopulate(string fileName, InventoryItem **inventory, int *arraySize);
float CalculateTotalInventoryValue(InventoryItem *inventory, int arraySize);
void DisplayAllInventoryItems(InventoryItem *inventory, int arraySize);
void DisplayLowStockItems(InventoryItem *inventory, int arraySize, int threshold);
void DeleteInventoryArray(InventoryItem **inventory, int *arraySize);

//------------------------------------------------------------------------------//
/// MAIN FUNCTION - Do not modify
//------------------------------------------------------------------------------//
int main(void)
{
    InventoryItem *inventory = nullptr;
    int arraySize = 0, choice, threshold;
    string fileName;

    do
    {
        system("cls");
        cout << "------------------------------------" << endl;
        cout << "     Inventory Management System    " << endl;
        cout << "------------------------------------" << endl;
        cout << "1. Load inventory data from file" << endl;
        cout << "2. Calculate total inventory value" << endl;
        cout << "3. Display all inventory items" << endl;
        cout << "4. Display low-stock items" << endl;
        cout << "5. Delete data and exit" << endl;
        cout << "Choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "\nFile Name: ";
                cin >> fileName;
                ReadFileAndPopulate(fileName, &inventory, &arraySize);
                cout << "\nPress any key to continue...";
                _getch();
                break;
            case 2:
                cout << "\nTotal Inventory Value: $" << CalculateTotalInventoryValue(inventory, arraySize) << endl;
                cout << "\nPress any key to continue...";
                _getch();
                break;
            case 3:
                DisplayAllInventoryItems(inventory, arraySize);
                cout << "\nPress any key to continue...";
                _getch();
                break;
            case 4:
                cout << "\nEnter threshold quantity: ";
                cin >> threshold;
                DisplayLowStockItems(inventory, arraySize, threshold);
                cout << "\nPress any key to continue...";
                _getch();
                break;
            case 5:
                DeleteInventoryArray(&inventory, &arraySize);
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
/// 1. Initialise Inventory Item Function
//------------------------------------------------------------------------------//




//------------------------------------------------------------------------------//
/// 2. Text File Line Count Function
//------------------------------------------------------------------------------//




//------------------------------------------------------------------------------//
/// 3. Read File And Populate Function
//------------------------------------------------------------------------------//




//------------------------------------------------------------------------------//
/// 4. Calculate Total Inventory Value Function
//------------------------------------------------------------------------------//




//------------------------------------------------------------------------------//
/// 5. Display All Inventory Items Function
//------------------------------------------------------------------------------//




//------------------------------------------------------------------------------//
/// 6. Display Low Stock Items Function
//------------------------------------------------------------------------------//




//------------------------------------------------------------------------------//
/// 7. Delete Inventory Array Function
//------------------------------------------------------------------------------//



//------------------------------------------------------------------------------//
/// END - No code after this point
//------------------------------------------------------------------------------//