// C Program to Check Whether a Given Number is Even or Odd Without % Operator

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start

int main()
{

    int num;
    printf("\nEnter A Number => ");
    scanf("%d", &num);

    // 1st Way
    // printf((num / 2.0 - num / 2) * 10 ? "Odd Number": "Even Number");

    // 2nd Way
    // printf(num / 2 * 2 == num ? "Even Number" : "Odd Number");

    // 3rd Way
    printf(num & 1 ? "Odd Number" : "Even Number");

    getch();
    return 0;
}
// Main Function End
