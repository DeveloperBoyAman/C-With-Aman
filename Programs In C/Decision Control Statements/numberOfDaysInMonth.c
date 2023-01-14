// C Program to Take Month Number and Print Number of Days in That Month

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start

int main()
{

    int month;
    printf("\nEnter the Number of a Month =>");
    scanf("%d", &month);
    if (month == 1)
        printf("31 Days");
    else if (month == 2)
        printf("28 Days");
    else if (month == 3)
        printf("31 Days");
    else if (month == 4)
        printf("30 Days");
    else if (month == 5)
        printf("31 Days");
    else if (month == 6)
        printf("30 Days");
    else if (month == 7)
        printf("31 Days");
    else if (month == 8)
        printf("31 Days");
    else if (month == 9)
        printf("30 Days");
    else if (month == 10)
        printf("31 Days");
    else if (month == 11)
        printf("30 Days");
    else if (month == 12)
        printf("31 Days");
    else
        printf("Invalid Month");

    getch();
    return 0;
}
// Main Function End
