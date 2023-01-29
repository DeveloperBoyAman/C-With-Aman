
// Write A Recursive Function to Print Binary of A Decimal Number

// Header Files
#include <stdio.h>
#include <conio.h>

// Function Declaration (Prototype)
void decimalToOctal(int);

// Main Function Start
int main()
{

    int num;
    printf("\nEnter A Decimal Number to Find its Octal Representation => ");
    scanf("%d", &num);
    printf("\n>>>>>>>>>>>> Following is the Octal Representation of %d <<<<<<<<<<<<<\n", num);
    decimalToBinary(num);

    getch();
    return 0;
}
// Main Function End

// Function Definition
void decimalToOctal(int num)
{
    if (num > 0)
    {
        decimalToOctal(num / 8);
        printf("%d", num % 8);
    }
}
