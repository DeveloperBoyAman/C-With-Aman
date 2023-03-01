// C Program to Print Following Pattern

/*

    Pattern 5.

            *
           ***
          *****
         *******
        *********

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
            if (col >= rows + 1 - row && col <= rows - 1 + row)
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
    //     for (int space = 1; space <= rows - row; space++)
    //         printf(" ");

    //     for (int col = 1; col <= row * 2 - 1; col++)
    //         printf("*");

    //     putch(10);
    // }

    // // 3rd Approach
    // int rows, starsInEachRow = 1;
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);
    // puts("\n--------------------------------------------\n");
    // for (int row = 1; row <= rows; row++)
    // {
    //     for (int space = 1; space <= rows - row; space++)
    //         printf(" ");

    //     for (int col = 1; col <= starsInEachRow; col++)
    //         printf("*");

    //     starsInEachRow += 2;

    //     putch(10);
    // }

    // // 4th Approach
    // int rows;
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);
    // puts("\n--------------------------------------------\n");
    // for (int row = 1; row <= rows; row++)
    // {
    //     for (int space = 1; space <= rows - row; space++)
    //         printf(" ");

    //     for (int col = 1; col <= row; col++)
    //         printf("*");

    //     for (int col = 1; col <= row - 1; col++)
    //         printf("*");

    //     putch(10);
    // }

    getch();
    return 0;
}
// Main Function End
