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
// Libraries - Do Not Modify
//------------------------------------------------------------------------------//
#include <iostream>
#include <conio.h>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

//------------------------------------------------------------------------------//
/// NODE STRUCTURE - Do Not Modify
//------------------------------------------------------------------------------//
struct aNode
{
    string aName;
    string event;
    float score;
    float adjFactor;
    aNode *nextPtr;

    void PopulateNode(string aN, string e, float s, float aF);
    float AdjustedScore();
};

//------------------------------------------------------------------------------//
// FUNCTION PROTOTYPES - Do Not Modify
//------------------------------------------------------------------------------//
void ReadFileAndPopulate(string FileName, aNode **sPtr);
void InsertNode(aNode **sPtr, string aName, string event, float score, float adjFactor);
void DisplayDataTable(aNode *sPtr);
void DisplayScoreDeviationTable(aNode *sPtr);
void DisplayPerformanceGraph(aNode *sPtr);
void DeleteAllNodes(aNode **sPtr);

//------------------------------------------------------------------------------//
// Main Function - Do Not Modify
//------------------------------------------------------------------------------//
int main()
{
    aNode *startPtr = nullptr;
    int choice;
    string fileName = "AthleteData.txt";

    do
    {
        system("cls");
        cout << "Athlete Performance Evaluation System" << endl;
        cout << "1. Read and Populate Athlete List" << endl;
        cout << "2. Display Data Table" << endl;
        cout << "3. Display Score and Deviation Table" << endl;
        cout << "4. Display Performance Graph" << endl;
        cout << "5. Clear Memory and Exit" << endl;
        cout << "Choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                ReadFileAndPopulate(fileName, &startPtr);
                break;
            case 2:
                DisplayDataTable(startPtr);
                break;
            case 3:
                DisplayScoreDeviationTable(startPtr);
                break;
            case 4:
                DisplayPerformanceGraph(startPtr);
                break;
            case 5:
                DeleteAllNodes(&startPtr);
                cout << "Exiting program..." << endl;
                return 0;
        }
        cout << "\nPress any key to continue...";
        _getch();
    } while (choice != 5);

    return 0;
}

//------------------------------------------------------------------------------//
// Function Implementation
//------------------------------------------------------------------------------//
// 1. Populate Node Function
//------------------------------------------------------------------------------//



//------------------------------------------------------------------------------//
// 2. Calculate Adjusted Score Function
//------------------------------------------------------------------------------//



//------------------------------------------------------------------------------//
// 3. Read File and Populate Function
//------------------------------------------------------------------------------//



//------------------------------------------------------------------------------//
// 4. Insert Node Function
//------------------------------------------------------------------------------//



//------------------------------------------------------------------------------//
// 5. Display Data Table Function
//------------------------------------------------------------------------------//



//------------------------------------------------------------------------------//
// 6. Display Score and Deviation Table Function
//------------------------------------------------------------------------------//



//------------------------------------------------------------------------------//
// 7. Display Performance Graph Function
//------------------------------------------------------------------------------//



//------------------------------------------------------------------------------//
// 8. Delete All Nodes Function
//------------------------------------------------------------------------------//



//------------------------------------------------------------------------------//
// END
//------------------------------------------------------------------------------//