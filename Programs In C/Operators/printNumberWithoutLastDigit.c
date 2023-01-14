// C Program to Print A Number Without Its Last Digit

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start

int main()
{

    int num;
    printf("\nEnter A Number => ");
    scanf("%d", &num);
    printf("\nEntered Number %d Without Last Digit => %d", num, num / 10);

    getch();
    return 0;
}
// Main Function End
