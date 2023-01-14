// C Program to Reverse A Given Number

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start

int main()
{

    int num, rev = 0;
    printf("\nEnter A Number => ");
    scanf("%d", &num);
    while (num)
    {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    printf("Reverse of Entered Number =>  %d", rev);

    getch();
    return 0;
}
// Main Function End
