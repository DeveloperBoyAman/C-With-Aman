
// Write A Recursive Function to Print First N Even Natural Numbers In Reverse Order

// Header Files
#include <stdio.h>
#include <conio.h>

// Function Declaration (Prototype)
void firstNEvenNaturalNumbersInReverse(int n);

// Main Function Start
int main()
{

    int n;
    printf("\nHow Many First Even Natural Numbers You Want to Print In Reverse Order => ");
    scanf("%d", &n);
    printf("\n>>>>>>>>>>>>>> First %d Even Natural Numbers In Reverse Order Are <<<<<<<<<<<<<<\n", n);
    firstNEvenNaturalNumbersInReverse(n);

    getch();
    return 0;
}
// Main Function End

// Function Definition
void firstNEvenNaturalNumbersInReverse(int n)
{
    if (n > 0)
    {
        printf("%d ", n * 2);
        firstNEvenNaturalNumbersInReverse(n - 1);
    }
}
