
// Write A Recursive Function to Print First N Natural Numbers

// Header Files
#include <stdio.h>
#include <conio.h>

// Function Declaration (Prototype)
void firstNNaturalNumbers(int n);

// Main Function Start
int main()
{

    int n;
    printf("\nHow Many First Natural Numbers You Wan to Print => ");
    scanf("%d", &n);
    printf("\n>>>>>>>>>>>>>> First %d Natural Numbers Are <<<<<<<<<<<<<<\n", n);
    firstNNaturalNumbers(n);

    getch();
    return 0;
}
// Main Function End

// Function Definition
void firstNNaturalNumbers(int n)
{
    if (n > 0)
    {
        firstNNaturalNumbers(n - 1);
        printf("%d ", n);
    }
}
