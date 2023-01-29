// Write A Recursive Function to Calculate Sum of First N Natural Numbers

// Header Files
#include <stdio.h>
#include <conio.h>

// Function Declaration (Prototype)
int sumOfFirstNNaturalNumbers(int);

// Main Function Start
int main()
{
    int n;
    printf("\nHow Many First Natural Numbers You Want to Add => ");
    scanf("%d", &n);
    printf("\nSum of First %d Natural Numbers => %d", n, sumOfFirstNNaturalNumbers(n));

    getch();
    return 0;
}
// Main Function End

// Function Definition
int sumOfFirstNNaturalNumbers(int n)
{
    if (n == 1)
        return 1;
    return n + sumOfFirstNNaturalNumbers(n - 1);
}
