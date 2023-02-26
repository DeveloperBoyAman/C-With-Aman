// Star Pattern

/*

    Pattern 41.

       *        *
       **      **
       ***    ***
       ****  ****
       **********
       ****  ****
       ***    ***
       **      **
       *        *


*/

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{

    // //  1st Approach
    // int rows, cols, n, count = 1;
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);

    // if (rows & 1)
    //     cols = rows + 1;
    // else
    //     cols = rows; // If User Wants Even Number of Rows

    // n = (rows + 1) / 2;

    // puts("\n--------------------------------------------\n");
    // for (int row = 1; row <= rows; row++)
    // {
    //     for (int col = 1; col <= cols; col++)
    //     {
    //         if (col <= count || col >= n * 2 + 1 - count)
    //             printf("*");

    //         else
    //             putch(32);
    //     }

    //     // If User Wants Even Number of Rows
    //     if (row == n && rows % 2 == 0)
    //         count++;

    //     row < n ? count++ : count--;

    //     printf("\n");
    // }

    // // 2nd Approach
    int rows, starsInEachRow, n, k;
    printf("\nHow Many Rows => ");
    scanf("%d", &rows);
    n = (rows + 1) / 2;
    puts("\n--------------------------------------------\n");
    for (int row = 1; row <= rows; row++)
    {

        starsInEachRow = row <= n ? row * 2 : (rows - row + 1) * 2;

        for (int col = 1; col <= starsInEachRow / 2; col++)
            printf("*");

        for (int space = 1; space <= rows + 1 - starsInEachRow; space++)
            printf(" ");

        for (int col = 1; col <= starsInEachRow / 2; col++)
            printf("*");

        printf("\n");
    }

    getch();
    return 0;
}
// Main Function End
