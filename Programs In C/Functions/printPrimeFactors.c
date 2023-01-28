// Write A Function to Print All Prime Factors of A Given Number (TSRN)

// Header Files
#include <stdio.h>
#include <conio.h>

// Function Declaration (Prototype)
int printPrimeFactors(int);

// Main Function Start
int main()
{
    int num;
    printf("\nEnter A Number to Find its Prime Factors => ");
    scanf("%d", &num);
    printf("\n>>>>>>>>>>> Prime Factors of %d Are <<<<<<<<<<<<<<<\n", num);
    printPrimeFactors(num);

    getch();
    return 0;
}
// Main Function End

// Function Definition
int printPrimeFactors(int num)
{
    for (int i = 2; num; i++)
    {
        while (num % i == 0)
        {
            printf("%d ", i);
            num /= i;
        }
    }
}
