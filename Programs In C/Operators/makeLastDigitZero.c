// C Program to Input a Number From User and Also a Digit . Append Given Digit in the Number and Print the Resulting Number (Ex: number = 243 and Digit = 9 then make it number = 2439)

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start

int main()
{

    int num;
    printf("\nEnter A Number => ");
    scanf("%d", &num);
    // 1st Way
    num = num - num % 10;
    // 2nd Way
    num = num / 10 * 10;
    printf("\nAfter Making Last Digit Zero => %d", num);

    getch();
    return 0;
}
// Main Function End
