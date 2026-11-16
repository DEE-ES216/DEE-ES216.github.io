#include <iostream>
#include <fstream>
#include <iomanip>
#include <conio.h>

using namespace std;

#include "EV4_Template.h"


void ReadDataFromFile(string fileName, TSolarPanel *panel);
void DisplaySolarPanelData(TSolarPanel *panel);



int main()
{
    TSolarPanel *panel;
    int choice = 0;

    panel = new TSolarPanel;

    do {
        system("cls");
        cout << "Solar panel system" << endl;
        cout << "ES216BB" << endl;
        cout << "Evaluation 4" << endl << endl;

        cout << "1. Load solar panel data" << endl;
        cout << "2. Display solar panel data" << endl;
        cout << "3. Display total installed capacity" << endl;
        cout << "4. Display solar plant cost saving" << endl;
        cout << "5. Delete a single solar panel" << endl;
        cout << "6. Exit\nChoice: ";

        cin >> choice;
        cout << "\n\n";

        switch(choice) {
            case 1: ReadDataFromFile("solarpanel.txt", panel); break;
            case 2: DisplaySolarPanelData(panel); break;
            case 3: panel->CalculateTotalCapacity();
                    cout << "Total installed capacity: " << panel->GetTotalCapacity() << " W." << endl;
                    break;
            case 4: panel->CalculateCostSaving(4.21);
                    cout << "Total cost saving: R" << panel->GetEnergyCostSaving() << "." << endl;
                    break;
            case 5: cout << "Deleting panel from the end of the list....\n";
                    panel->DeleteSolarPanel(panel->GetPointerToCapacity());
                    panel->SetNrOfPanels(panel->GetNrOfPanels()+1); ///correct the nr of panels since DeleteSolarPanel() would decrement the size
                    panel->DeleteSolarPanel(panel->GetPointerToEnergyProduced());
                    break;
            case 6: delete panel;
                    cout << "Deleted all solar panel data, exiting program...\n"; break;
            default: cout << "Invalid choice.....\n\n";
        }
        cout << "\n\nPress any key to continue...";
        getch();
    } while(choice != 6);

    return 0;
}


void ReadDataFromFile(string fileName, TSolarPanel *panel) {
    ifstream iFile;
    float produced, cap;
    int lastPanelIndex;
    float **d;

    /// Open file
    iFile.open(fileName);
    if (iFile.is_open()) { /// File is open
        while (!iFile.eof()) { /// NOT the end of the file
            iFile >> produced >> cap;

            d = panel->GetPointerToEnergyProduced();
            panel->AddSolarPanel(d); /// Add one node to EnergyProduced array
            panel->SetNrOfPanels(panel->GetNrOfPanels()-1); ///correct the nr of panels since AddSolarPanel() would increment the size
            d = panel->GetPointerToCapacity();
            panel->AddSolarPanel(d); /// Add one node to Capacity array

            lastPanelIndex = panel->GetNrOfPanels() - 1;
            panel->SetEnergyProduced(produced, lastPanelIndex);
            panel->SetCapacity(cap, lastPanelIndex);
        }
        cout << "Solar panel list created and data from file loaded....\n\n";
    } else {
        cout << "File could not be opened....\n\n";
    }
}


void DisplaySolarPanelData(TSolarPanel *panel) {
    int nrOfPanels, i;
    float **pe, **pc;

    pe = panel->GetPointerToEnergyProduced();
    pc = panel->GetPointerToCapacity();

    nrOfPanels = panel->GetNrOfPanels();

    if (nrOfPanels == 0) { /// List does not exist
        cout << "No panel data exists....\n\n";
    } else {
        cout << "Panel nr\tEnergy Produced (kWh)\t   Capacity (W)\n";
            ///* Display energy source details ***/
        for(i=0;i<nrOfPanels;i++){
            cout << " " << i+1 << "\t\t\t";
            cout << (*pe)[i] << "\t\t\t";
            cout << (*pc)[i] << endl;
        }
    }
}

