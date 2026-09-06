//------------------------------------------------------------------------------//
// STUDENT AND EVALUATION DETAILS - Complete student detail
//------------------------------------------------------------------------------//
// Student Number:
// Date:
// Campus:
// Department:
// Venue:
//------------------------------------------------------------------------------//
// EVALUATION REQUIREMENTS
//------------------------------------------------------------------------------//
// a. Save your work regularly on the PC D: drive.
// b. Do not modify code above the FUNCTION IMPLEMENTATION heading.
// c. Use the exact function names and parameters supplied below.
// d. Complete every requested function in the supplied comment blocks.
//------------------------------------------------------------------------------//

#include <iostream>
#include <fstream>
#include <iomanip>
#include <conio.h>


using namespace std;



string systemName = "Geyser Energy Management System";

struct TGeyserEnergy
{
    int geyserID;
    float ratedPower;
    float energyUsed;

    TGeyserEnergy *next;

    ///Member function prototypes
    void InitialiseGeyser(int id, float power, float energy);
};



TGeyserEnergy* AddGeyserToList(TGeyserEnergy **startNode);
void ReadDataFromFile(string fileName, TGeyserEnergy **startNode);
void DisplayGeyserData(TGeyserEnergy *startNode);
float AverageEnergyConsumption(TGeyserEnergy *startNode);
void DeleteSingleGeyser(TGeyserEnergy **startNode);
void DeleteAllGeysers(TGeyserEnergy **startNode);


int main()
{
    TGeyserEnergy *startNode;
    int choice = 0;

    startNode = nullptr; ///list does not exist

    do{

        system("cls");
        cout << systemName << endl;
        cout << "ES216BB" << endl;
        cout << "Evaluation 2" << endl << endl;

        cout << "1. Load Geyser information" << endl;
        cout << "2. Display Geyser information" << endl;
        cout << "3. Display average Geyser energy consumption" << endl;
        cout << "4. Delete a single Geyser's information" << endl;
        cout << "5. Exit\nChoice: ";

        cin >> choice;
        cout << "\n\n";

        switch(choice){

        case 1: ReadDataFromFile("energy.txt", &startNode);
                break;
        case 2: DisplayGeyserData(startNode);
                break;
        case 3: cout << "Average Geyser energy consumption: " << AverageEnergyConsumption(startNode) << endl;
                break;
        case 4: DeleteSingleGeyser(&startNode);
                break;
        case 5: DeleteAllGeysers(&startNode);
                cout << "Deleted all Geyser data, exiting program...\n";
                break;
        default: cout << "Invalid choice.....\n\n";
        }
        cout << "\n\nPress any key to continue...";
        getch();

    }while(choice != 5);

    return 0;
}


// FUNCTION IMPLEMENTATION
//------------------------------------------------------------------------------//
// 1. InitialiseGeyser
//------------------------------------------------------------------------------//
// Student Function Code - Delete this comment




//------------------------------------------------------------------------------//
// 2. AddGeyserToList
//------------------------------------------------------------------------------//
// Student Function Code - Delete this comment



//------------------------------------------------------------------------------//
// 3. ReadDataFromFile
//------------------------------------------------------------------------------//
// Student Function Code - Delete this comment



//------------------------------------------------------------------------------//
// 4. DisplayGeyserData
//------------------------------------------------------------------------------//
// Student Function Code - Delete this comment


//------------------------------------------------------------------------------//
// 5. AverageEnergyConsumption
//------------------------------------------------------------------------------//
// Student Function Code - write both functions here - Delete this comment



//------------------------------------------------------------------------------//
// 6. DeleteSingleGeyser
//------------------------------------------------------------------------------//
// Student Function Code - Delete this comment



//------------------------------------------------------------------------------//
// 7. DeleteAllGeysers
//------------------------------------------------------------------------------//
// Student Function Code - Delete this comment


// END - No code after this point
