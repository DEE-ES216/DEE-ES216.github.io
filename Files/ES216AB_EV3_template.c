#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

// Function prototypes (exactly as required)
int displayMenu(void);
void generateRandomNumbers(int* x, int* y, int* h, float* A, int *surface, int size);
void displayArrays(int* x, int* y, int* h, float* A, int *surface, int size);
void sortDescending(int* x, int* y, int* h, float* A, int *surface, int size);
float findAve(int* h, int size);
int findMax(int* h, int size);
void linearSearchS(int* x, int* y, int* h, float* A, int *surface, int size, int value);

int main() {
    int size;
    int *x;
    int *y;
    int *h;
    float *A;
    int *surface;
    int choice;
    int value;


    // Seed random number generator


    // Get array size from user with validation
    do{
	    printf("Enter the number of parallelograms (positive integer > 1): ");
    	scanf("%d", &size);
    }while (size <= 1);


    // Allocate dynamic arrays



    // Menu-driven loop
    do {
	    choice = displayMenu();


        switch (choice) {
            case 1: // Generate random parallelograms
                printf("Random parallelograms generated.\n\n");
                break;

            case 2: // Display arrays
                break;

            case 3: // Sort descending
                printf("Arrays sorted in descending order by x.\n\n");
                break;

            case 4: // average h
                break;

            case 5: // Find max h
                break;

            case 6: // Linear search in surface array
                do{
				    printf("Enter value to search in surface array: (> 0) ");
                	scanf("%d", &value);
                }while (value <= 0);

                break;
            case 7: // Quit
                printf("Exiting program.\n");
                break;
        }


        if (choice != 7) {
            printf("Press Enter to continue...\n");
            getch();
            system("CLS");
        }
    } while (choice != 7);

    // Free dynamic memory



    return 0;
}



// ────────────────────────────────────────────────
// 1. Menu function
// ────────────────────────────────────────────────
int displayMenu(void) {
	int choice;

    printf("\n=== Parallelogram Management Menu ===\n");
    printf("1. Generate random parallelograms\n");
    printf("2. Display arrays and surface area graph\n");
    printf("3. Sort by x (descending) and display\n");
    printf("4. Find average h value\n");
    printf("5. Find maximum h value\n");
    printf("6. Search for value in surface array (Linear Search)\n");
    printf("7. Quit\n");

	do{
    	printf("Enter your choice (1-7): ");
    	scanf("%d", &choice);

    	if(choice < 1 || choice > 7)
			printf("Invalid choice. Enter a number between 1 and 7:\n");
    }while (choice < 1 || choice > 7);

	return(choice);
}



// ─────────────────────────────────────────────────────
// 2. Generate random numbers and calculate other values
// ─────────────────────────────────────────────────────
void generateRandomNumbers(int* x, int* y, int* h, float* A, int *surface, int size)
{
    //seed random function
    srand(time(NULL));

    for(int i=0;i<size;i++)
    {
        //populate x array with random numbers 15 - 30

        //populate y array with random numbers 15 - 30

        //populate h array with random numbers 4 - 14

        //calculate and populate A array

        //calculate and populate surface array


    }


}






// ────────────────────────────────────────
// 3. Display arrays and surface area graph
// ────────────────────────────────────────
void displayArrays(int* x, int* y, int* h, float* A, int *surface, int size)
{



}






// ───────────────────────────────────────
// 4. Sort arrays in descending order by x
// ───────────────────────────────────────
void sortDescending(int* x, int* y, int* h, float* A, int *surface, int size)
{



}





// ─────────────────
// 5. Find average h
// ─────────────────
float findAve(int* h, int size)
{



}




// ─────────────────
// 6. Find maximum h
// ─────────────────
int findMax(int* h, int size)
{



}



// ─────────────────────────────────
// 7. Linear search in surface array
// ─────────────────────────────────
void linearSearchS(int* x, int* y, int* h, float* A, int *surface, int size, int value)
{




}

