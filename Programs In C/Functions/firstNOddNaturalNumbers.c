// Write A Function to Print First N Odd Natural Numbers (TSRN)

// Header Files
#include <stdio.h>
#include <conio.h>

// Function Declaration (Prototype)
void firstNOddNaturalNumbers(int);

// Main Function Start
int main()
{

    int n;
    printf("\nHow Many First Odd Natural Numbers You Want to Print => ");
    scanf("%d", &n);
    printf("\n>>>>>>>>>>>> First %d Odd Natural Numbers Are <<<<<<<<<<<<<<\n", n);
    firstNOddNaturalNumbers(n);

    getch();
    return 0;
}
// Main Function End

// Function Definition
void firstNOddNaturalNumbers(int n)
{
    for (int i = 1; i <= n; i++)
        printf("%d ", i * 2 - 1);
}
