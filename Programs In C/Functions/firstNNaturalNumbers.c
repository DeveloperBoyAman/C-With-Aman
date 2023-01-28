// Write A Function to Print First N Natural Numbers (TSRN)

// Header Files
#include <stdio.h>
#include <conio.h>

// Function Declaration (Prototype)
void firstNNaturalNumbers(int);

// Main Function Start
int main()
{

    int n;
    printf("\nHow Many First Natural Numbers You Want to Print => ");
    scanf("%d", &n);
    printf("\n>>>>>>>>>>>> First %d Natural Numbers Are <<<<<<<<<<<<<<\n", n);
    firstNNaturalNumbers(n);

    getch();
    return 0;
}
// Main Function End

// Function Definition
void firstNNaturalNumbers(int n)
{
    for (int i = 1; i <= n; i++)
        printf("%d ", i);
}
