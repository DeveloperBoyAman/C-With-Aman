// C Program to Check Whether A Given Number is there in Fibonnaci Series or Not

// Header Files
#include <stdio.h>
#include <conio.h>
#include <math.h>

// Main Function Start

int main()
{

    int num, prev = -1, next = 1, result = 0;
    printf("\nEnter A Number to Check Whether it is in Fibonnaci Series or Not => ");
    scanf("%d", &num);

    // If Start From 0 1 1 2 3 .......
    int i = 0;
    while (result < num)
    {
        result = prev + next;
        prev = next;
        next = result;
        i++;
    }
    if (result == num)
        printf("\n%d is Present in Fibonnaci Series at %dth Term", num, num ? i : 1);
    else
        printf("\n%d is Not Present in Fibonnaci Series", num);

    // If Start From 1 1 2 3 .......
    // prev = 0, next = 1, result = -1;
    // int i = 0;
    // while (result < num)
    // {
    //     result = prev + next;
    //     prev = next;
    //     next = result;
    //     i++;
    // }
    // if (result == num)
    //     printf("\n%d is Present in Fibonnaci Series at %dth Term", num, i);
    // else
    //     printf("\n%d is Not Present in Fibonnaci Series", num);

    getch();
    return 0;
}
// Main Function End
