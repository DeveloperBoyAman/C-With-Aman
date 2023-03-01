// C Program to Print Following Pattern

/*

       Pattern 2.

               *
             * *
           * * *
         * * * *
       * * * * *

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
    cols = rows;
    puts("\n--------------------------------------------\n");
    for (int row = 1; row <= rows; row++)
    {
        for (int col = 1; col <= cols; col++)
        {
            if (col >= rows + 1 - row)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    // // 2nd Approach
    // int rows, cols;
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);
    // cols = rows;
    // puts("\n--------------------------------------------\n");
    // for (int row = rows; row; row--)
    // {
    //     for (int col = 1; col <= cols; col++)
    //     {
    //         if (col >= row)
    //             printf("* ");
    //         else
    //             printf("  ");
    //     }
    //     printf("\n");
    // }

    // // 3rd Approach
    // int rows;
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);
    // puts("\n--------------------------------------------\n");
    // for (int row = 1; row <= rows; row++)
    // {
    //     for (int space = 1; space <= rows - row; space++)
    //         printf("  ");
    //     for (int col = 1; col <= row; col++)
    //         printf("* ");
    //     printf("\n");
    // }

    // // 4th Approach
    // int rows, col;
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);
    // puts("\n--------------------------------------------\n");
    // for (int row = 1; row <= rows; row++)
    // {
    //     for (col = 1; col <= rows - row; col++)
    //         printf("  ");
    //     while (col <= rows)
    //     {
    //         printf("* ");
    //         col++;
    //     }
    //     printf("\n");
    // }

    getch();
    return 0;
}
// Main Function End
