// Write A Function to Print First N Terms of Fibonacci Series (TSRN)

// Header Files
#include <stdio.h>
#include <conio.h>

// Function Declaration (Prototype)
void printFirstNTermsOfFibonacci(int);

// Main Function Start
int main()
{

    int n;
    printf("\nHow Many Terms of Fibonacci Series You Want to Print => ");
    scanf("%d", &n);
    printf("\n>>>>>>>>>>>> First %d Terms of Fibonacci Series Are <<<<<<<<<<<<\n", n);
    printFirstNTermsOfFibonacci(n);

    getch();
    return 0;
}
// Main Function End

// Functions Definition
void printFirstNTermsOfFibonacci(int n)
{

    int prev = -1, next = 1, result;
    for (int i = 1; i <= n; i++)
    {
        result = prev + next;
        printf("%d ", result);
        prev = next;
        next = result;
    }
}
