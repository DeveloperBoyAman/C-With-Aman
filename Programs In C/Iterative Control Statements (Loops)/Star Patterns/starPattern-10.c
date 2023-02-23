// Star Pattern

/*

    Pattern  10.

    1234321
    123 321
    12   21
    1     1



*/

// Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// Main Function Start
int main()
{

    // // 1st Approach
    // int rows, cols,count;
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);
    // cols = rows * 2 - 1;
    // puts("\n--------------------------------------------\n");
    // for (int row = 1; row <= rows; row++)
    // {
    //     count=1;
    //     for (int col = 1; col <= cols; col++)
    //     {
    //         if (col <= rows + 1 - row || col >= rows - 1 + row)
    //             printf("%d", count);
    //         else
    //             printf(" ");
    //         col < rows ? count++ : count--;
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

        for (int col = 1; col <= rows + 1 - row; col++)
            printf("%d", col);

        for (int space = 1; space <= (row - 1) * 2 - 1; space++)
            printf(" ");

        for (int col = row == 1 ? rows - row : rows + 1 - row; col >= 1; col--)
            printf("%d", col);

        putch(10);
    }

    getch();
    return 0;
}
// Main Function End

