// Star Pattern

/*

    Pattern 7.

    **********
    ****  ****
    ***    ***
    **      **
    *        *


*/

// Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// Main Function Start
int main()
{

    // // 1st Approach
    // int rows, cols;
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);
    // cols = rows * 2;
    // puts("\n--------------------------------------------\n");
    // for (int row = 1; row <= rows; row++)
    // {
    //     for (int col = 1; col <= cols; col++)
    //     {
    //         if (col <= rows + 1 - row || col >= rows + row)
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

        for (int space = 1; space <= (row - 1) * 2; space++)
            printf(" ");

        for (int col = 1; col <= rows + 1 - row; col++)
            printf("*");

        putch(10);
    }

    getch();
    return 0;
}
// Main Function End
