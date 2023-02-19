// Star Pattern

/*

    Pattern 10.

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
    // int rows, cols;
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);
    // cols = rows * 2 - 1;
    // puts("\n--------------------------------------------\n");
    // int count = 1;
    // for (int row = 1; row <= rows; row++)
    // {
    //     count = 1;
    //     for (int col = 1; col <= cols; col++)
    //     {
    //         if (col >= row && col <= cols + 1 - row)
    //         {
    //             printf("%d", count);
    //             col < rows ? count++ : count--;
    //         }
    //         else
    //             printf(" ");
    //     }
    //     putch(10);
    // }

    // // 2nd Approach
    int rows;
    printf("\nHow Many Rows => ");
    scanf("%d", &rows);
    puts("\n--------------------------------------------\n");
    for (int row = 1; row <= rows; row++)
    {

        for (int space = 1; space <= row - 1; space++)
            printf(" ");

        for (int col = 1; col <= rows + 1 - row; col++)
            printf("%d", col);

        for (int col = rows - row; col >= 1; col--)
            printf("%d", col);

        putch(10);
    }

    getch();
    return 0;
}
// Main Function End
