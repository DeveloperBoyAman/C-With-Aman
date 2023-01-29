//  Write a Function to Calculate Sum of Digits of A Number

// Header Files
#include <stdio.h>
#include <conio.h>

// Function Declaration (Prototype)
int sumOfDigits(int);

// Main Function Start
int main()
{

    int num;
    printf("\nEnter A Number => ");
    scanf("%d", &num);
    printf("\nSum of Digits of Entered Number => %d", sumOfDigits(num));

    getch();
    return 0;
}
// Main Function End

// Function Definition
int sumOfDigits(int num)
{
    if (num == 0)
        return 0;
    return (num % 10) + sumOfDigits(num / 10);
}
