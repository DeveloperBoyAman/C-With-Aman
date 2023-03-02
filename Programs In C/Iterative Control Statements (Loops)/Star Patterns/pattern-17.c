// C Program to Print Following Pattern

/*

    Pattern 17.

    *********
     *     *
      *   *
       * *
        *



*/

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{

    // // 1st Approach
    int rows, cols;
    printf("\nHow Many Rows => ");
    scanf("%d", &rows);
    cols = rows * 2 - 1;
    puts("\n--------------------------------------------\n");
    for (int row = 1; row <= rows; row++)
    {
        for (int col = 1; col <= cols; col++)
        {
            if (col == row && col == cols + 1 - row || row == 1)
                printf("*");
            else
                printf(" ");
        }
        putch(10);
    }

    // // 2nd Approach
    // int rows;
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);
    // puts("\n--------------------------------------------\n");
    // for (int row = 1; row <= rows; row++)
    // {
    //     for (int space = 1; space <= row - 1; space++)
    //         printf(" ");

    //     for (int col = row; col <= rows * 2 - row; col++)
    //     {
    //         if (col == row || col == rows * 2 - row || row == 1)
    //             printf("*");
    //         else
    //             printf(" ");
    //     }

    //     putch(10);
    // }

    // // 3rd Approach
    // int rows;
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);
    // puts("\n--------------------------------------------\n");
    // for (int row = 1; row <= rows; row++)
    // {
    //     for (int space = 1; space <= row - 1; space++)
    //         printf(" ");

    //     for (int col = 1; col <= rows * 2 - (row * 2 - 1); col++)
    //     {
    //         if (col == 1 || col == rows * 2 - (row * 2 - 1) || row == 1)
    //             printf("*");
    //         else
    //             printf(" ");
    //     }

    //     putch(10);
    // }

    // // 4th Approach
    // int rows;
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);
    // puts("\n--------------------------------------------\n");
    // for (int row = 1; row <= rows; row++)
    // {
    //     for (int space = 1; space <= row - 1; space++)
    //         printf(" ");

    //     for (int col = 1; col <= rows + 1 - row; col++)
    //     {
    //         if (col == 1 || row == 1)
    //             printf("*");
    //         else
    //             printf(" ");
    //     }
    //     for (int col = 1; col <= rows - row; col++)
    //     {
    //         if (col == rows - row || row == 1)
    //             printf("*");
    //         else
    //             printf(" ");
    //     }

    //     putch(10);
    // }

    getch();
    return 0;
}
// Main Function End
