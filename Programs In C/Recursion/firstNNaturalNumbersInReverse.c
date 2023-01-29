
// Write A Recursive Function to Print First N Natural Numbers In Reverse Order

// Header Files
#include <stdio.h>
#include <conio.h>

// Function Declaration (Prototype)
void firstNNaturalNumbersInReverse(int n);

// Main Function Start
int main()
{

    int n;
    printf("\nHow Many First Natural Numbers You Wan to Print In Reverse Order => ");
    scanf("%d", &n);
    printf("\n>>>>>>>>>>>> First %d Natural Numbers In Reverse Order Are <<<<<<<<<<<<<\n", n);
    firstNNaturalNumbersInReverse(n);

    getch();
    return 0;
}
// Main Function End

// Function Definition
void firstNNaturalNumbersInReverse(int n)
{
    if (n > 0)
    {
        printf("%d ", n);
        firstNNaturalNumbersInReverse(n - 1);
    }
}
