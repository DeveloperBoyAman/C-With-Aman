// C Program to Check whether a Given Number is Positive or Non-Positive

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start

int main()
{

    int num;
    printf("\nEnter A Number => ");
    scanf("%d", &num);
    printf(num > 0 ? "Positive" : "Non-Positive");

    getch();
    return 0;
}
// Main Function End
