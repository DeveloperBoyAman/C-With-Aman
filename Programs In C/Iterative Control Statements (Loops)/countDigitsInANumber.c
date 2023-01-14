// C Program to Count Digits In a Given Number

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start

int main()
{

    int num, count = 0;
    printf("\nEnter A Number => ");
    scanf("%d", &num);
    while (num)
    {
        num /= 10;
        count++;
    }
    printf("Total Number of Digits in Entered Number => %d", count);

    getch();
    return 0;
}
// Main Function End
