
// Write A Recursive Function to calculate Power

// Header Files
#include <stdio.h>
#include <conio.h>

// Function Declaration (Prototype)
float calculatePower(int, int);

// Main Function Start
int main()
{

    int base, exponent;
    printf("\nEnter Base and Exponent => ");
    scanf("%d %d", &base, &exponent);
    printf("%d Raised to Power %d => %.4f", base, exponent, calculatePower(base, exponent));

    getch();
    return 0;
}
// Main Function End

// Function Definition
float calculatePower(int base, int exponent)
{
    if (exponent == 0)
        return 1;
    else if (exponent > 0)
        return base * calculatePower(base, exponent - 1);
    else
        return 1.0 / base * calculatePower(base, exponent + 1);
}
