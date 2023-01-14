
// C Program to Print Unit Digit of A Given Number

// Header Files

#include <stdio.h>
#include <conio.h>

// Main Function Start

int main()
{

    int num;
    printf("\nEnter A Number => ");
    scanf("%d", &num);
    printf("\nUnit Digit of %d => %d", num, num % 10);

    getch();
    return 0;
}
// Main Function End
