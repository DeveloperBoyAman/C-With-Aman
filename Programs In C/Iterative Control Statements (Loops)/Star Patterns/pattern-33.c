// C Program to Print Following Pattern

/*

    Pattern 33.

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
            if (col >= rows + 1 - row && col <= rows - 1 + row)
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
    //     toggle = 1;
    //     for (int space = 1; space <= rows - row; space++)
    //         printf(" ");

    //     for (int col = 1; col <= row * 2 - 1; col++)
    //     {
    //         if (toggle)
    //             printf("*");
    //         else
    //             printf(" ");
    //         toggle = !toggle;
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
    //     toggle = 1;
    //     for (int space = 1; space <= rows - row; space++)
    //         printf(" ");

    //     for (int col = 1; col <= row; col++)
    //     {
    //         if (toggle)
    //             printf("*");
    //         else
    //             printf(" ");
    //         toggle = !toggle;
    //     }

    //     for (int col = 1; col <= row - 1; col++)
    //     {
    //         if (toggle)
    //             printf("*");
    //         else
    //             printf(" ");
    //         toggle = !toggle;
    //     }

    // printf("\n");
    // }

    getch();
    return 0;
}
// Main Function End
