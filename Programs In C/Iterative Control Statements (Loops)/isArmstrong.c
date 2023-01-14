// C Program to Check Whether A Given Number is An Armstrong Number or Not

// Header Files
#include <stdio.h>
#include <conio.h>
#include <math.h>

// Main Function Start

int main()
{

    int num, digitsInNumber = 0, copyNumber;
    float sum = 0;
    printf("\nEnter A Number to Check Whetther it Armstrong or Not => ");
    scanf("%d", &num);
    copyNumber = num;
    while (copyNumber)
    {
        digitsInNumber++;
        copyNumber /= 10;
    }
    copyNumber = num;
    while (copyNumber)
    {
        sum += pow(copyNumber % 10, digitsInNumber);
        copyNumber /= 10;
    }
    if (sum == num)
        printf("%d is An Armstrong Number", num);
    else
        printf("%d is Not An Armstrong Number", num);

    getch();
    return 0;
}
// Main Function End
