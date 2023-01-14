// C Program to Find Nth Term of Fibonnaci Series

// Header Files
#include <stdio.h>
#include <conio.h>
#include <math.h>

// Main Function Start

int main()
{

    int nth, prev = -1, next = 1, result = 0;
    printf("\nEnter N to Find Nth Term of Fibonnaci Series => ");
    scanf("%d", &nth);

    // If Start From 0 1 1 2 3 .......
    for (int i = 1; i <= nth; i++)
    {
        result = prev + next;
        prev = next;
        next = result;
    }

    // If Start From 1 1 2 3 .......
    // prev = 0, next = 1;
    // for (int i = 0; i < nth; i++)
    // {
    //     if (i < 1)
    //         result = 1;
    //     else
    //     {
    //         result = prev + next;
    //         prev = next;
    //         next = result;
    //     }
    // }

    printf("%dth Term of Fibonnaci Series => %d", nth, result);

    getch();
    return 0;
}
// Main Function End
