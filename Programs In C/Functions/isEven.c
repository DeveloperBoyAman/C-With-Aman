// Write A Function to Check Whether A Given Number is Even or Odd. Return 1 if the Number is Even, otherwise Return 0 (TSRS)

// Header Files
#include <stdio.h>
#include <conio.h>

// Function Declaration (Prototype)
int isEven(int);

// Main Function Start
int main()
{

    int num;
    printf("\nEnter An Integer => ");
    scanf("%d", &num);
    if (isEven(num))
        printf("%d is an Even Number", num);
    else
        printf("%d is an Odd Number", num);

    getch();
    return 0;
}
// Main Function End

// Function Definition
int isEven(int num)
{
    return !(num & 1);
}
