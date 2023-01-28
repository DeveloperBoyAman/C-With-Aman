// Write A Function to Print All Prime Numbers Between Two Given Numbers (TSRN)

// Header Files
#include <stdio.h>
#include <conio.h>

// Function Declaration (Prototype)
void primeNumbersBetweenTwoNumbers(int, int);
int isPrime(int);

// Main Function Start
int main()
{
    int lowerLimit, upperLimit;
    printf("\nEnter Two Numbers to Find All Prime Numbers Between them => ");
    scanf("%d%d", &lowerLimit, &upperLimit);
    printf("\n>>>>>>>>>>>> Prime Numbers Between %d and %d Are <<<<<<<<<<<<<\n", lowerLimit, upperLimit);
    primeNumbersBetweenTwoNumbers(lowerLimit, upperLimit);

    getch();
    return 0;
}
// Main Function End

// Functions Definitions
void primeNumbersBetweenTwoNumbers(int lowerLimit, int upperLimit)
{
    for (int i = lowerLimit + 1; i < upperLimit; i++)
    {
        if (i % 2 && isPrime(i))
            printf("%d ", i);
    }
}

int isPrime(int num)
{
    for (int i = 2; i <= num / 2; i++)
        if (num % i == 0)
            return 0;
    return 1;
}
