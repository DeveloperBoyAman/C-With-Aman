//  Write A Function to Print First N Prime Numbers (TSRN)

// Header Files
#include <stdio.h>
#include <conio.h>

// Function Declaration (Prototype)
void printFirstNPrimeNumbers(int);
int isPrime(int);

// Main Function Start
int main()
{
    int n;
    printf("\nHow Many First Prime Numbers You Want to Print => ");
    scanf("%d", &n);
    printf("\n>>>>>>>>>>>>> First %d Prime Numbers Are <<<<<<<<<<<<<<<\n", n);
    printFirstNPrimeNumbers(n);

    getch();
    return 0;
}
// Main Function End

// Functions Definitions
void printFirstNPrimeNumbers(int n)
{
    for (int i = 2; n; i++)
    {
        if (i % 2 && isPrime(i))
        {
            printf("%d ", i);
            n--;
        }
    }
}

int isPrime(int num)
{
    for (int i = 2; i <= num / 2; i++)
        if (num % i == 0)
            return 0;
    return 1;
}
