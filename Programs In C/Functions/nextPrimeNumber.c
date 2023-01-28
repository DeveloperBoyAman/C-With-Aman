// Write A Function to Find Next Prime Number of A Given Number (TSRS)

// Header Files
#include <stdio.h>
#include <conio.h>

// Functions Declarations (Prototypes)
int nextPrimeNumber(int);
int isPrime(int);

// Main Function Start
int main()
{

    int num;
    printf("\nEnter A Number => ");
    scanf("%d", &num);
    printf("\nNext Prime Number After %d => %d\n", num, nextPrimeNumber(num));

    getch();
    return 0;
}
// Main Function End

// Functions Definitions

int nextPrimeNumber(int num)
{
    for (int i = num + 1; i; i++)
    {
        if (isPrime(i))
            return i;
    }
}

int isPrime(int num)
{
    for (int i = 2; i <= num / 2; i++)
        if (num % i == 0)
            return 0;
    return 1;
}
