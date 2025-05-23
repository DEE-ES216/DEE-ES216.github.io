#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

// Function prototypes
int displayMenu(void);
void generateRandomNumbers(int* x, int* y, int* r, int size);
void displayArrays(int* x, int* y, int* r, int size);
void sortDescending(int* x, int* y, int* r, int size);
void sortAscending(int* x, int* y, int* r, int size);
void findMaxMin(int* r, int size);
void linearSearchY(int* x, int* y, int* r, int size, int value);

int main() {
    int size;
    int choice;
    int* x;
    int* y;
    int* r;
//    int choice;

    // Seed random number generator


    // Get array size from user with validation


    // Allocate dynamic arrays

    // Menu-driven loop
    do {
        choice = displayMenu();


        switch (choice)
        {
            case 1: // Generate random numbers

                break;
            case 2: // Display arrays

                break;
            case 3: // Sort descending

                break;
            case 4: // Sort ascending

                break;
            case 5: // Find max/min

                break;
            case 6: // Linear search in y array
                {

                }
                break;
            case 7: // Quit
                printf("Exiting program.\n");
                break;
        }


    } while (choice != 7);

    // Free dynamic memory


    return 0;
}

// Display menu
int displayMenu(void)
{
    int selection;
    printf("\n=== Triangle Management Menu ===\n");
    printf("1. Generate random triangles\n");
    printf("2.  \n");
    printf("3.  \n");
    printf("4.  \n");
    printf("5.  \n");
    printf("6.  \n");
    printf("7. Quit\n");
    printf("Select: ");
        scanf("%d",&selection);
        return selection;
}

