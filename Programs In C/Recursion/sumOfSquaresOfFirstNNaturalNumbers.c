
//  Write A Recursive Function to Print Square of First N Natural Numbers

// Header Files
#include <stdio.h>
#include <conio.h>

// Function Declaration (Prototype)
int sumOfSquareOfNNaturalNumbers(int);

// Main Function Start
int main()
{

    int n;
    printf("\nHow Many Numbers => ");
    scanf("%d", &n);
    printf("\nSum of Squares of First %d Natural Numbers => %d", n, sumOfSquareOfNNaturalNumbers(n));

    getch();
    return 0;
}
// Main Function End

// Function Definition
int sumOfSquareOfNNaturalNumbers(int n)
{
    if (n == 1)
        return 1;
    return (n * n) + sumOfSquareOfNNaturalNumbers(n - 1);
}
