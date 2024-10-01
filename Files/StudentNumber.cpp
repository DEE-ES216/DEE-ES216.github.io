//------------------------------------------------------------------------------//
/// STUDENT AND EVALUATION DETAILS - Complete The Below Details
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
/// a.	Remember to save your work on the PC “D: Drive” and save regularly throughout the evaluation.
/// b.	Do not modify the given code in the “.cpp” file except for implementing the requested functions as required.
/// c.	Use the exact function names and parameters as used in the in the “.cpp” file function prototypes and main function.
/// d.	Complete the C++ functions below the main function in each comment block as shown.
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
/// Constants - Do Not Modify
//------------------------------------------------------------------------------//
const float GRAVITY = 9.81;      // Acceleration due to gravity (m/s^2)
const float EARTH_RADIUS = 6371000.0;  // Average radius of the Earth in meters

//------------------------------------------------------------------------------//
/// NODE STRUCTURE - Do Not Modify
//------------------------------------------------------------------------------//
struct pNode
{
    ///Structure Member Variables
    // Node Data Variables
    string pTest;   // Projectile Test Name
    float pWeight;  // Projectile Weight
    float pSpeed;   // Projectile Initial Speed
    float pOffset;  // Projectile Offset Parameter
    // Linked List Next Pointer
    pNode *nextPtr;

    ///Structure Member Function Prototype
    //1. Populate Node Values
    void PopulateNode(string pT, float pW, float pS, float pO);
    //2. Calculate Projectile (Node) Distance
    float ProjectileDistance();
};

//------------------------------------------------------------------------------//
/// FUNCTION PROTOTYPES - Do Not Modify
//------------------------------------------------------------------------------//

// 3. Capture Data From Text File And Populate Linked List
void ReadFileAndPopulate(string FileName, pNode **sPtr);
// 4. Insert new pNode at the back of Linked List
void InsertNode(pNode **sPtr, string Test, float Weight, float Speed, float Offset);
// 5. Display All Linked List pNodes Data in Table Format
void DisplayDataTable(pNode *sPtr);
// 6. Display All Linked List pNodes Data in Table Format
void DisplayDistanceDeviationTable(pNode *sPtr);
// 7. Display All Linked List pNode Projectile Distances
void DisplayNodeDistanceGraph(pNode *sPtr);
// 8. Delete All Linked List pNodes
void DeleteAllNodes (pNode **sPtr);

//------------------------------------------------------------------------------//
/// MAIN FUNCTION - Do Not Modify
//------------------------------------------------------------------------------//
int main (void)
{
    pNode *pStartPtr;
    int choice;
    string fileName = "ProjectileData.txt";

    do
    {
        system("cls");
        cout << "+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+" << endl;
        cout << "|        Projectile Test Linked List (LL)   |" << endl;
        cout << "+        ES216BB                            +" << endl;
        cout << "|        Evaluation 2                       |" << endl;
        cout << "+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+" << endl;
        cout << endl;
        cout << "1. Read and Populate Projectile LL" << endl;
        cout << "2. Display Data Table " << endl;
        cout << "3. Display Distance And Deviation Table" << endl;
        cout << "4. Display Distance Graph" << endl;
        cout << "5. Clear Memory and Exit" << endl;
        cout << "Choice: ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
            case 1:
                cout << "File Name: " << fileName << endl;
                ReadFileAndPopulate(fileName, &pStartPtr);
                cout << endl;
                break;
            case 2:
                DisplayDataTable(pStartPtr);
                cout << endl;
                break;
            case 3:
                DisplayDistanceDeviationTable(pStartPtr);
                cout << endl;
                break;
            case 4:
                DisplayNodeDistanceGraph(pStartPtr);
                cout << endl;
                break;
            case 5:
                DeleteAllNodes(&pStartPtr);
                cout << "Exit Program..." << endl << endl;
                return;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }

        cout << "Press any key to continue...";
        _getch();

    } while (choice != 5);

    return 0;
}

//------------------------------------------------------------------------------//
/// FUNCTION IMPLEMENTATION
//------------------------------------------------------------------------------//
/// 1. pNode Structure: Populate Node Function
//------------------------------------------------------------------------------//



//------------------------------------------------------------------------------//
/// 2. pNode Structure: Projectile Distance Function
//------------------------------------------------------------------------------//



//------------------------------------------------------------------------------//
/// 3. Read Text File and Populate LL Function
//------------------------------------------------------------------------------//



//------------------------------------------------------------------------------//
/// 4. Insert New Node Into LL Function
//------------------------------------------------------------------------------//



//------------------------------------------------------------------------------//
/// 5. Display Data Table Function
//------------------------------------------------------------------------------//



//------------------------------------------------------------------------------//
/// 6. Display Distance Deviation Table Function
//------------------------------------------------------------------------------//



//------------------------------------------------------------------------------//
/// 7. Display Node Distance Graph Function
//------------------------------------------------------------------------------//



//------------------------------------------------------------------------------//
/// 8. Delete All Nodes Function
//------------------------------------------------------------------------------//



//------------------------------------------------------------------------------//