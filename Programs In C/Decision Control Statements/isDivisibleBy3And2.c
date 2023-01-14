// C Program to Check Whether A Given Number is Divisible by 3 and 2

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start

int main()
{

    int num;
    printf("\nEnter A Number => ");
    scanf("%d", &num);
    printf(num % 3 == 0 && num % 2 == 0 ? "Divisible" : "Not Divisible");

    getch();
    return 0;
}
// Main Function End
