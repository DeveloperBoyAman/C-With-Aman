// C Program to Print Following Pattern

/*

    Pattern 3.

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
        for (int col = 1; col <= rows; col++)
        {
            if (col <= rows + 1 - row)
                printf("* ");
            else
                printf("  ");
        }
        putch(10);
    }

    // // 2nd Approach
    // int rows, cols;
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);
    // cols = rows;
    // puts("\n--------------------------------------------\n");
    // for (int row = rows; row ; row--)
    // {
    //     for (int col = 1; col <= rows; col++)
    //     {
    //         if (col <= row)
    //             printf("* ");
    //         else
    //             printf("  ");
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
    //     for (int col = 1; col <= rows + 1 - row; col++)
    //         printf("* ");
    //     putch(10);
    // }

    // // 4th Approach
    // int rows;
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);
    // puts("\n--------------------------------------------\n");
    // for (int row = rows; row; row--)
    // {
    //     for (int col = row; col; col--)
    //         printf("* ");
    //     putch(10);
    // }

    getch();
    return 0;
}
// Main Function End
