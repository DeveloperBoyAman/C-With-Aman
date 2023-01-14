// C Program to to Check Whether a Given Number is Even or Odd Using a Bitwise Operator

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start

int main()
{

    int num;
    printf("\nEnter A  Number => ");
    scanf("%d", &num);
    printf(num & 1 ? "Odd Number" : "Even Number");

    getch();
    return 0;
}
// Main Function End
