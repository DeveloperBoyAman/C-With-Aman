// Write A Function to calculate Number of Arrangements Can be Made From n Items by Selecting r At A Time (TSRS)

// Header Files
#include <stdio.h>
#include <conio.h>

// Function Declarations (Prototypes)
int numberOfArrangements(int n, int r);
long long int factorialOfN(int);

// Main Function Start
int main()
{

    int n, r;
    printf("\nEnter Total Items (Value of n) and Itmes Selected At A Time (Value of r) => ");
    scanf("%d%d", &n, &r);
    printf("\nTotal Arrangements Can be Made => %d", numberOfArrangements(n, r));

    getch();
    return 0;
}
// Main Function End

// Function Definitions
int numberOfArrangements(int n, int r)
{
    return factorial(n) / factorial(n - r);
}

long long int factorialOfN(int num)
{
    long long int fact = 1;
    for (int i = 2; i <= num; i++)
        fact *= i;
    return fact;
}
