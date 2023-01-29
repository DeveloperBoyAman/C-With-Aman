
// Write A Recursive Function to Print Octal of A Decimal Number

// Header Files
#include <stdio.h>
#include <conio.h>

// Function Declaration (Prototype)
void reverseNumber(int);

// Main Function Start
int main()
{
    int num;
    printf("\nEnter A Number => ");
    scanf("%d", &num);
    printf("\nReverse of %d => ", num);
    reverseNumber(num);

    getch();
    return 0;
}
// Main Function End

// Function Definition
void reverseNumber(int num)
{
    if (num)
    {
        printf("%d", num % 10);
        reverseNumber(num / 10);
    }
}
