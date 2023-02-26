// Star Pattern

/*

    Pattern 46.

          *****
         *   *
        *   *
       *   *
      *****

*/

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{

    // //  1st Approach
    // int rows, cols;
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);

    // cols = rows * 2 - 1;

    // puts("\n--------------------------------------------\n");
    // for (int row = 1; row <= rows; row++)
    // {
    //     for (int col = 1; col <= cols; col++)
    //     {
    //         if (col == rows + 1 - row || col == cols + 1 - row || ((row == 1 || row == rows) && col >= rows + 1 - row && col <= cols + 1 - row))
    //             printf("*");
    //         else
    //             putch(32);
    //     }

    //     printf("\n");
    // }

    // // 2nd Approach
    int rows;
    printf("\nHow Many Rows => ");
    scanf("%d", &rows);
    puts("\n--------------------------------------------\n");
    for (int row = 1; row <= rows; row++)
    {

        for (int space = 1; space <= rows - row; space++)
            printf(" ");
        for (int col = 1; col <= rows; col++)
        {
            if (row == 1 || row == rows || col == 1 || col == rows)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

    getch();
    return 0;
}
// Main Function End
