// Write A Recursive Function to Print First N Even Natural Numbers

// Header Files
#include <stdio.h>
#include <conio.h>

// Function Declaration (Prototype)
void firstNEvenNaturalNumbers(int n);

// Main Function Start
int main()
{

    int n;
    printf("\nHow Many First Even Natural Numbers You Wan to Print => ");
    scanf("%d", &n);
    printf("\n>>>>>>>>>>>>>>> First %d Even Natural Numbers Are <<<<<<<<<<<<<\n", n);
    firstNEvenNaturalNumbers(n);

    getch();
    return 0;
}
// Main Function End

// Function Definition
void firstNEvenNaturalNumbers(int n)
{
    if (n > 0)
    {
        firstNEvenNaturalNumbers(n - 1);
        printf("%d ", n * 2);
    }
}
