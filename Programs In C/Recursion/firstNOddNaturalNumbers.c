// Write A Recursive Function to Print First N Odd Natural Numbers

// Header Files
#include <stdio.h>
#include <conio.h>

// Function Declaration (Prototype)
void firstNOddNaturalNumbers(int n);

// Main Function Start
int main()
{

    int n;
    printf("\nHow Many First Odd Natural Numbers You Wan to Print => ");
    scanf("%d", &n);
    printf("\n>>>>>>>>>>>>>>> First %d Odd Natural Numbers Are <<<<<<<<<<<<<\n", n);
    firstNOddNaturalNumbers(n);

    getch();
    return 0;
}
// Main Function End

// Function Definition
void firstNOddNaturalNumbers(int n)
{
    if (n > 0)
    {
        firstNOddNaturalNumbers(n - 1);
        printf("%d ", n * 2 - 1);
    }
}
