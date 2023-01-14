// C Program to Check Whether a Given Number is a Three Digit Number or Not 

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start

int main()
{

   int num;
    printf("\nEnter A Number => ");
    scanf("%d", &num);
    printf(num > 99 && num < 1000 ? "Three Digit Number" : "Not A Three Digit Number");

    getch();
    return 0;
}
// Main Function End
