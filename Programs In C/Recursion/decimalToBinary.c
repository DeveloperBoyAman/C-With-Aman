
// Write A Recursive Function to Print Binary of A Decimal Number

// Header Files
#include <stdio.h>
#include <conio.h>

// Function Declaration (Prototype)
void decimalToBinary(int);

// Main Function Start
int main()
{

    int num;
    printf("\nEnter A Decimal Number to Find its Binary => ");
    scanf("%d", &num);
    printf("\n>>>>>>>>>>>> Following is the Binary of %d <<<<<<<<<<<<<\n", num);
    decimalToBinary(num);

    getch();
    return 0;
}
// Main Function End

// Function Definition
void decimalToBinary(int num)
{

    if (num > 0)
    {
        decimalToBinary(num / 2);

        printf("%d ", num % 2);
    }
}
