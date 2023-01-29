
//  Write A Recursive Function to Count Digits In A Number

// Header Files
#include <stdio.h>
#include <conio.h>

// Function Declaration (Prototype)
int countDigitsInNumber(int);

// Main Function Start
int main()
{

    int num;
    printf("\nEnter A  Number => ");
    scanf("%d", &num);
    printf("\nDigits In Entered Number => %d", countDigitsInNumber(num));

    getch();
    return 0;
}
// Main Function End

// Function Definition
int countDigitsInNumber(int num)
{
    if (num)
        return 1 + countDigitsInNumber(num / 10);
}
