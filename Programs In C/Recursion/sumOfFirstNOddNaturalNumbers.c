// Write A Recursive Function to Calculate Sum of First N Odd Natural Numbers

// Header Files
#include <stdio.h>
#include <conio.h>

// Function Declaration (Prototype)
int sumOfFirstNOddNaturalNumbers(int);

// Main Function Start
int main()
{

    int n;
    printf("\nHow Many First Odd Natural Numbers You Want to Add => ");
    scanf("%d", &n);
    printf("\nSum of First %d Odd Natural Numbers => %d", n, sumOfFirstNOddNaturalNumbers(n));

    getch();
    return 0;
}
// Main Function End

// Function Definition
int sumOfFirstNOddNaturalNumbers(int n)
{
    if (n == 1)
        return 1;
    return (n * 2 - 1) + sumOfFirstNOddNaturalNumbers(n - 1);
}
