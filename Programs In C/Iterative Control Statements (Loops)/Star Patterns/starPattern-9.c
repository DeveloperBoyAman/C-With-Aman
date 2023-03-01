// C Program to Print Following Pattern

/*

    Pattern 9.

    1234321
     12321
      121
       1

*/

// Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// Main Function Start
int main()
{

    // // 1st Approach
    int rows, cols, num;
    printf("\nHow Many Rows => ");
    scanf("%d", &rows);
    cols = rows * 2 - 1;
    puts("\n--------------------------------------------\n");
    for (int row = 1; row <= rows; row++)
    {
        num = 1;
        for (int col = 1; col <= cols; col++)
        {
            if (col >= row && col <= cols + 1 - row)
            {
                printf("%d", num);
                col < rows ? num++ : num--;
            }
            else
                printf(" ");
        }
        putch(10);
    }

    // // 2nd Approach
    // int rows, num, numsInEachRow;
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);
    // puts("\n--------------------------------------------\n");
    // for (int row = 1; row <= rows; row++)
    // {

    //     for (int space = 1; space <= row - 1; space++)
    //         printf(" ");

    //     numsInEachRow = rows * 2 - (row * 2 - 1);
    //     num = 1;
    //     for (int col = 1; col <= numsInEachRow; col++)
    //     {
    //         printf("%d", num);
    //         col < numsInEachRow / 2 + 1 ? num++ : num--;
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

    //     for (int col = 1; col <= rows + 1 - row; col++)
    //         printf("%d", col);

    //     for (int col = rows - row; col; col--)
    //         printf("%d", col);

    //     putch(10);
    // }

    // // 4th Approach
    // int rows;
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);
    // puts("\n--------------------------------------------\n");
    // for (int row = rows; row; row--)
    // {

    //     for (int space = 1; space <= rows - row; space++)
    //         printf(" ");

    //     for (int col = 1; col <= row; col++)
    //         printf("%d", col);

    //     for (int col = row - 1; col; col--)
    //         printf("%d", col);

    //     putch(10);
    // }

    getch();
    return 0;
}
// Main Function End
