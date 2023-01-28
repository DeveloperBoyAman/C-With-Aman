// C Program to Print First N Terms of Fibonacci Series

// Header Files
#include <stdio.h>
#include <conio.h>
#include <math.h>

// Main Function Start

int main()
{

    int nth, prev = -1, next = 1, result = 0;
    printf("\nEnter N to Print N Terms of Fibonacci Series => ");
    scanf("%d", &nth);

    // If Start From 0 1 1 2 3 .......
    // for (int i = 1; i <= nth; i++)
    // {
    //     result = prev + next;
    //     printf("%d ", result);
    //     prev = next;
    //     next = result;
    // }

    // If Start From 1 1 2 3 .......
    // prev = 0, next = 1;
    // for (int i = 0; i < nth; i++)
    // {
    //     if (i < 1)
    //         printf("1 ");
    //     else
    //     {
    //         result = prev + next;
    //         printf("%d ", result);
    //         prev = next;
    //         next = result;
    //     }
    // }

    getch();
    return 0;
}
// Main Function End
