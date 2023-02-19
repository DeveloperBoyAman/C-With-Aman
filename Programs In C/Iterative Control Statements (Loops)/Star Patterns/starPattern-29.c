// Star Pattern

/*

    Pattern 29.

    1 2 3 4 5 5 4 3 2 1
    1 2 3 4 * * 4 3 2 1
    1 2 3 * * * * 3 2 1
    1 2 * * * * * * 2 1
    1 * * * * * * * * 1


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
    // cols = rows * 2;
    // puts("\n--------------------------------------------\n");
    // for (int row = 1; row <= rows; row++)
    // {
    //     int count = 1;
    //     for (int col = 1; col <= cols; col++)
    //     {
    //         if (col <= rows + 1 - row)
    //             printf("%d", count++);
    //         else if (col >= rows + row)
    //             printf("%d", --count);
    //         else
    //             printf("*");
    //     }
    //     putch(10);
    // }

    // // 2nd Approach
    int rows, cols;
    printf("\nHow Many Rows => ");
    scanf("%d", &rows);
    cols = rows * 2;
    puts("\n--------------------------------------------\n");
    for (int row = 1; row <= rows; row++)
    {
        for (int col = 1; col <= rows + 1 - row; col++)
            printf("%d", col);
        for (int space = 1; space <= (row - 1) * 2; space++)
            printf("*");
        for (int col = rows + 1 - row; col >= 1; col--)
            printf("%d", col);

        putch(10);
    }

    getch();
    return 0;
}
// Main Function End
