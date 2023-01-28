// Write A Function to Check Whether A Given Number Conatins A Given Number or Not (TSRS)

// Header Files
#include <stdio.h>
#include <conio.h>

// Function Declaration (Prototype)
int isContainsDigit(int, int);

// Main Function Start
int main()
{

    int num, digit;
    printf("\nEnter A Number => ");
    scanf("%d", &num);
    printf("\nEnter A Digit that You Want to Check, The Number Contains the Digit or Not => ");
    scanf("%d", &digit);
    if (isContainsDigit(num, digit))
        printf("Yes, Number Contains the Given Digit");
    else
        printf("No, Number Does not Contains the Given Digit");

    getch();
    return 0;
}
// Main Function End

// Function Definition
int isContainsDigit(int num, int digit)
{

    while (num)
    {
        if (num % 10 == digit)
            return 1;
        num /= 10;
    }
    return 0;
}
