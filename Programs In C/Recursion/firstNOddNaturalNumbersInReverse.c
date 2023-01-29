
// Write A Recursive Function to Print First N Odd Natural Numbers In Reverse Order

// Header Files
#include <stdio.h>
#include <conio.h>

// Function Declaration (Prototype)
void firstNOddNaturalNumbersInReverse(int n);

// Main Function Start
int main()
{

    int n;
    printf("\nHow Many First Odd Natural Numbers You Want to Print In Reverse Order => ");
    scanf("%d", &n);
    printf("\n>>>>>>>>>>>>>> First %d Odd Natural Numbers In Reverse Order Are <<<<<<<<<<<<<<\n", n);
    firstNOddNaturalNumbersInReverse(n);

    getch();
    return 0;
}
// Main Function End

// Function Definition
void firstNOddNaturalNumbersInReverse(int n)
{
    if (n > 0)
    {
        printf("%d ", n * 2 - 1);
        firstNOddNaturalNumbersInReverse(n - 1);
    }
}
