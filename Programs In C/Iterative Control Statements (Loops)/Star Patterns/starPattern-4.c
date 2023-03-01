// C Program to Print Following Pattern

/*

    Pattern 4.

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
            if (col >= row)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
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

    //     for (int col = 1; col <= rows + 1 - row; col++)
    //         printf("* ");

    //     printf("\n");
    // }

    // // 3rd Approach
    // int rows;
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);
    // puts("\n--------------------------------------------\n");
    // for (int row = 1; row <= rows; row++)
    // {
    //     for (int space = 1; space <= row - 1; space++)
    //         printf("  ");

    //     for (int col = row; col <= rows; col++)
    //         printf("* ");

    //     printf("\n");
    // }

    getch();
    return 0;
}
// Main Function End
