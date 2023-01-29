// Write A Recursive Function to Calculate Factorial to A Number

// Header Files
#include <stdio.h>
#include <conio.h>

// Function Declaration (Prototype)
int factorial(int);

// Main Function Start
int main()
{

    int num;
    printf("\nEnter A Number to Find Factorial => ");
    scanf("%d", &num);
    printf("\nFactorial of %d => %d", num, factorial(num));

    getch();
    return 0;
}
// Main Function End

// Function Definition
int factorial(int num)
{
    if (num <= 1)
        return 1;
    return num * factorial(num - 1);
}
