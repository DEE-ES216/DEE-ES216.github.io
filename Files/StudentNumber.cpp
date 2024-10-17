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
#include <fstream>
#include <conio.h>

using namespace std;

//------------------------------------------------------------------------------//
/// NODE STRUCTURE - Do Not Modify
//------------------------------------------------------------------------------//
struct Node {
    string sData;
    float  fData;
    Node *nextPtr;
};

//------------------------------------------------------------------------------//
/// FUNCTION PROTOTYPES - Do Not Modify
//------------------------------------------------------------------------------//
// 1. InsertNode (Modified to insert at the end)
void InsertNode(Node **sPtr, string StringData, float FloatData);
// 2. ReadTextFile
void ReadTextFile(string FileName, Node **sPtr);
// 3. AverageLL
float AverageLL(Node **sPtr);
// 4. DisplayNodeData
void DisplayNodeData(Node **sPtr);
// 5. DisplayNodeData
void DisplayNodeData(Node **sPtr, float avg);
// 6. DeleteAllNodes
void DeleteAllNodes(Node **sPtr);

//------------------------------------------------------------------------------//
/// MAIN FUNCTION - Do Not Modify
//------------------------------------------------------------------------------//
int main (void)
{
    Node *startPtr = nullptr;
    int choice;
    string FileName;
    float Average;
    int flag = 0;

    do
    {
        cout << "------------------------- " << endl;
        cout << "|     Evaluation 3      | " << endl;
        cout << "------------------------- " << endl;
        cout << "1. Read and Populate LL   " << endl;
        cout << "2. Calculate LL Average   " << endl;
        cout << "3. Display String Data    " << endl;
        cout << "4. Display Float Data     " << endl;
        cout << "5. Delete Nodes and Exit  " << endl;
        cout << "Choice: ";
        cin  >> choice;
        cout << endl;

        switch (choice)
        {
            case 1: cout << "File Name: ";
                    cin  >> FileName;
                    ReadTextFile(FileName,&startPtr);
                    flag = 1;
                    break;

            case 2: if (flag == 1)
                    {
                        Average = AverageLL(&startPtr);
                        cout << "Average: " << Average << endl;
                    }
                    else
                        cout << "First Load Text File" << endl;
                    break;

            case 3: if (flag == 1)
                        DisplayNodeData(&startPtr);
                    else
                        cout << "First Load Text File" << endl;
                    break;

            case 4: if (flag == 1)
                        DisplayNodeData(&startPtr, Average);
                    else
                        cout << "First Load Text File" << endl;
                    break;

            case 5: if (flag == 1)
                    {
                        DeleteAllNodes(&startPtr);
                        cout << "All LL Nodes Deleted" << endl;
                    }
                    cout << "Exit Program..." << endl;
                    getch();
                    return 0;

            default:cout << "Invalid Input" << endl;
                    break;

        }
        cout << endl << "Press any key to continue...";
        getch();
        system("cls");


    } while (choice != 5);



    return 0;
}

//------------------------------------------------------------------------------//
/// FUNCTION IMPLEMENTATION
//------------------------------------------------------------------------------//
/// 1. InsertNode (Modified to insert at the end)
//------------------------------------------------------------------------------//




//------------------------------------------------------------------------------//
/// 2. ReadTextFile
//------------------------------------------------------------------------------//




//------------------------------------------------------------------------------//
/// 3. AverageLL
//------------------------------------------------------------------------------//





//------------------------------------------------------------------------------//
/// 4. DisplayNodeData
//------------------------------------------------------------------------------//





//------------------------------------------------------------------------------//
/// 5. DisplayNodeData
//------------------------------------------------------------------------------//





//------------------------------------------------------------------------------//
/// 6. DeleteAllNodes
//------------------------------------------------------------------------------//





//------------------------------------------------------------------------------//
