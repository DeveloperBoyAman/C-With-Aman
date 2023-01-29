// C Program to Calculate Factorial of A Number

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start

int main()
{

    int n;
    unsigned long long int fact = 1;
    printf("\nEnter A Number => ");
    scanf("%d", &n);
    for (int i = 2; i <= n; i++)
        fact *= i;
    printf("\nFactorial of %d => %llu", n, fact);

    getch();
    return 0;
}
// Main Function End
