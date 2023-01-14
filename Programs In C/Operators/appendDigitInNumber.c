
// C Program to Append A Given Digit In A Given Number

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start

int main()
{
    int num, digit;
    printf("\nEnter A Number => ");
    scanf("%d", &num);
    printf("\nEnter A Digit Which You Want to Append With Entered (%d) Number => ", num);
    scanf("%d", &digit);
    num = num * 10 + digit;
    printf("\nAfter Appending %d in Number => %d", digit, num);
  
    getch();
    return 0;
}
// Main Function End
