// C Program to Check Whether a Given Number is Divisible by 5 or Not

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start

int main()
{

    int num;
    printf("\nEnter A Number => ");
    scanf("%d", &num);
    printf(num % 5 ? "Entered Number is Not Divisible by 5" : "Entered Number Divisible by 5");

    getch();
    return 0;
}
// Main Function End
