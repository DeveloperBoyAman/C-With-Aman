// C Program to Check Whether a Given Year is Leap Year or Not

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start

int main()
{

    int year;
    printf("\nEnter A Year => ");
    scanf("%d", &year);

    // 1st Way
    if (year % 400 == 0 || year % 100 != 0 && year % 4 == 0)
        printf("%d is Leap Year", year);
    else
        printf("%d is Not a Leap Year", year);

    // 2nd Way
    // if (year % 400 == 0)
    //     printf("%d is Leap Year", year);
    // else if (year % 100 == 0)
    //     printf("%d is Not a Leap Year", year);
    // else if (year % 4 == 0)
    //     printf("%d is  a Leap Year", year);
    // else printf("%d is Not a Leap Year", year);

    getch();
    return 0;
}
// Main Function End
