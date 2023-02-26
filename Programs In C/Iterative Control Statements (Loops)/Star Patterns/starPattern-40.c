// Star Pattern

/*

    Pattern 40.

      **********
      ****  ****
      ***    ***
      **      **
      *        *
      *        *
      **      **
      ***    ***
      ****  ****
      **********


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
    // cols = rows;
    // n = rows / 2;
    // puts("\n--------------------------------------------\n");
    // for (int row = 1; row <= rows; row++)
    // {
    //     for (int col = 1; col <= cols; col++)
    //     {
    //         if (rows & 1)
    //         {
    //             // If User Wants Odd Number of Rows
    //             if (col <= n + 1 - count || col >= n + 1 + count)
    //                 printf("*");
    //             else
    //                 putch(32);
    //         }
    //         else if (col <= n + 1 - count || col >= n + count)
    //             printf("*");
    //         else
    //             putch(32);
    //     }

    //     if (row == n)
    //         count++;

    //     row < n ? count++ : count--;

    //     // If User Wants Odd Number of Rows
    //     if (rows & 1 && row == n)
    //         count++;

    //     printf("\n");
    // }

    // // 2nd Approach
    int rows, spacesInEachRow, n, k;
    printf("\nHow Many Rows => ");
    scanf("%d", &rows);
    n = rows / 2;
    puts("\n--------------------------------------------\n");
    for (int row = 1; row <= rows; row++)
    {

        if (rows & 1)
            spacesInEachRow = row <= n + 1 ? row * 2 - 1 : rows - (row + n - rows) * 2; // If User Wants Odd Number of Rows
        else
            spacesInEachRow = row <= n ? (row - 1) * 2 : rows - ((row - n) * 2);

        for (int col = 1; col <= (rows - spacesInEachRow) / 2; col++)
            printf("*");

        for (int space = 1; space <= spacesInEachRow; space++)
            printf(" ");

        for (int col = 1; col <= (rows - spacesInEachRow) / 2; col++)
            printf("*");

        printf("\n");
    }

    getch();
    return 0;
}
// Main Function End
