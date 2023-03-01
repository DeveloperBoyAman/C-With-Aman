// C Program to Print Following Pattern

/*

    Pattern 7.

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

    // // 1st Approach
    int rows, cols;
    printf("\nHow Many Rows => ");
    scanf("%d", &rows);
    cols = rows * 2;
    puts("\n--------------------------------------------\n");
    for (int row = 1; row <= rows; row++)
    {
        for (int col = 1; col <= cols; col++)
        {
            if (col <= rows + 1 - row || col >= rows + row)
                printf("*");
            else
                printf(" ");
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

    //     for (int col = 1; col <= rows + 1 - row; col++)
    //         printf("*");

    //     for (int space = 1; space <= row * 2 - 2; space++)
    //         printf(" ");

    //     for (int col = 1; col <= rows + 1 - row; col++)
    //         printf("*");

    //     putch(10);
    // }

    // // 3rd Approach
    // int rows, spacesInEachRow = 0;
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);
    // puts("\n--------------------------------------------\n");
    // for (int row = rows; row; row--)
    // {

    //     for (int col = row; col; col--)
    //         printf("*");

    //     for (int space = 1; space <= spacesInEachRow; space++)
    //         printf(" ");

    //     for (int col = row; col; col--)
    //         printf("*");

    //     spacesInEachRow += 2;

    //     putch(10);
    // }

    getch();
    return 0;
}
// Main Function End
