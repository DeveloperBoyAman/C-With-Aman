// Star Pattern

/*

    Pattern 3.

    * * * *
    * * *
    * *
    *



*/

// Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// Main Function Start
int main()
{

    // // 1st Approach
    // int rows;
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);
    // puts("\n--------------------------------------------\n");
    // for (int row = 1; row <= rows; row++)
    // {
    //     for (int col = 1; col <= rows; col++)
    //     {
    //         if (col <= rows + 1 - row)
    //             printf("*");
    //         else
    //             printf(" ");
    //     }
    //     putch(10);
    // }

    // // 2nd Approach
    int rows;
    printf("\nHow Many Rows => ");
    scanf("%d", &rows);
    puts("\n--------------------------------------------\n");
    for (int row = 1; row <= rows; row++)
    {

        for (int col = 1; col <= rows + 1 - row; col++)
            printf("*");

        putch(10);
    }

    getch();
    return 0;
}
// Main Function End
