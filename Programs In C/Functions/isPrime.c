//  Write A Function to Check Whether A Given Number is Prime or Not (TSRS)

// Header Files
#include <stdio.h>
#include <conio.h>

// Function Declaration (Prototype)
int isPrime(int);

// Main Function Start
int main()
{

    int num;
    printf("Enter A Number => ");
    scanf("%d", &num);
    if (isPrime(num))
        printf("\n%d is a Prime Number", num);
    else
        printf("\n%d is Not a Prime Number", num);

    getch();
    return 0;
}
// Main Function End

// Function Definition
int isPrime(int num)
{
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}
