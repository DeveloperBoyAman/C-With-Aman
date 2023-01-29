//  Write A Recursive Function to Print First N Terms of Fibonacci Series

// Header Files
#include <stdio.h>
#include <conio.h>

// Function Declaration (Prototype)
int firstNTermsOfFibonacciSeries(int);

// Main Function Start
int main()
{

    int n;
    printf("\nHow Many Terms of Fibonacci Series You Want to Print => ");
    scanf("%d", &n);
    printf("\n>>>>>>>>>>>>>> First %d Terms of Fibonacci Series Are <<<<<<<<<<<<<\n", n);
    for (int i = 1; i <= n; i++)
        printf("%d ", firstNTermsOfFibonacciSeries(i));

    getch();
    return 0;
}
// Main Function End

// Function Definition
int firstNTermsOfFibonacciSeries(int n)
{
    if (n == 1)
        return 0;
    else if (n == 2)
        return 1;
    else
        return firstNTermsOfFibonacciSeries(n - 1) + firstNTermsOfFibonacciSeries(n - 2);
}
