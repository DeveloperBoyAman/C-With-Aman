// C Program to Print Following Pattern

/*

    Pattern 34.

     * * * * *
      * * * *
       * * *
        * *
         *

*/

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{

    // 1st Approach
    int rows, cols, toggle;
    printf("\nHow Many Rows => ");
    scanf("%d", &rows);
    cols = rows * 2 - 1;
    puts("\n--------------------------------------------\n");
    for (int row = 1; row <= rows; row++)
    {
        toggle = 1;
        for (int col = 1; col <= cols; col++)
        {
            if (col >= row && col <= cols + 1 - row)
            {
                if (toggle)
                    printf("*");
                else
                    printf(" ");
                toggle = 1 - toggle;
            }
            else
                printf(" ");
        }

        printf("\n");
    }

    // // 2nd Approach
    // int rows, toggle;
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);
    // puts("\n--------------------------------------------\n");
    // for (int row = 1; row <= rows; row++)
    // {
    //     for (int space = 1; space <= row - 1; space++)
    //         printf(" ");
    //     toggle = 1;
    //     for (int col = 1; col <= rows * 2 - (row * 2 - 1); col++)
    //     {

    //         if (toggle)
    //             printf("*");
    //         else
    //             printf(" ");
    //         toggle = 1 - toggle;
    //     }

    //     printf("\n");
    // }

    // // 3rd Approach
    // int rows, toggle;
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);
    // puts("\n--------------------------------------------\n");
    // for (int row = 1; row <= rows; row++)
    // {
    //     for (int space = 1; space <= row - 1; space++)
    //         printf(" ");
    //     toggle = 1;
    //     for (int col = row; col <= rows * 2 - row; col++)
    //     {

    //         if (toggle)
    //             printf("*");
    //         else
    //             printf(" ");
    //         toggle = 1 - toggle;
    //     }

    //     printf("\n");
    // }

    // 4th Approach
    // int rows, toggle;
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);
    // puts("\n--------------------------------------------\n");
    // for (int row = 1; row <= rows; row++)
    // {
    //     for (int space = 1; space <= row - 1; space++)
    //         printf(" ");
    //     toggle = 1;
    //     for (int col = 1; col <= rows + 1 - row; col++)
    //     {
    //         if (toggle)
    //             printf("*");
    //         else
    //             printf(" ");
    //         toggle = 1 - toggle;
    //     }
    //     for (int col = 1; col <= rows  - row; col++)
    //     {
    //         if (toggle)
    //             printf("*");
    //         else
    //             printf(" ");
    //         toggle = 1 - toggle;
    //     }

    //     printf("\n");
    // }

    getch();
    return 0;
}
// Main Function End
