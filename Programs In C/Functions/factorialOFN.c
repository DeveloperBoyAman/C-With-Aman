// Write A Function to Calaculate Factorial of A Number (TSRS)

// Header Files
#include <stdio.h>
#include <conio.h>

// Function Declaration (Prototype)
long long int factorialOfN(int);

// Main Function Start
int main()
{

    int num;
    printf("\nEnter A Number => ");
    scanf("%d", &num);
    printf("Factorial of %d => %lld", num, factorialOfN(num));

    getch();
    return 0;
}
// Main Function End

// Function Definition
long long int factorialOfN(int num)
{
    long long int fact = 1;
    for (int i = 2; i <= num; i++)
        fact *= i;
    return fact;
}
