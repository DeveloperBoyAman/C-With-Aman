//  Write A Recursive Function to Calculate Sum of First N Even Natural Numbers

// Header Files
#include <stdio.h>
#include <conio.h>

// Function Declaration (Prototype)
int sumOfFirstNEvenNaturalNumbers(int);

// Main Function Start
int main()
{

    int n;
    printf("\nHow Many First Even Natural Numbers You Want to Add => ");
    scanf("%d", &n);
    printf("\nSum of First %d Even Natural Numbers => %d", n, sumOfFirstNEvenNaturalNumbers(n));

    getch();
    return 0;
}
// Main Function End

// Function Definition
int sumOfFirstNEvenNaturalNumbers(int n)
{
    if (n == 1)
        return 2;
    return (n * 2) + sumOfFirstNEvenNaturalNumbers(n - 1);
}
