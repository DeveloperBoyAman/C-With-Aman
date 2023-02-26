// Star Pattern

/*

    Pattern 47.

      1 2 3 4  17 18 19 20
        5 6 7  14 15 16
          8 9  12 13
            10 11

*/

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{

    // //  1st Approach
    // int rows, cols, num1 = 1, num2, k, sum;
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);
    // cols = rows * 2;
    // sum = rows * (rows + 1) / 2;
    // puts("\n--------------------------------------------\n");
    // for (int row = 1; row <= rows; row++)
    // {
    //     k = rows - row;

    //     num2 = sum + 1 + (k * (k + 1) / 2);

    //     for (int col = 1; col <= cols; col++)
    //     {
    //         if (col >= row && col <= cols + 1 - row)
    //         {
    //             if (col <= rows)
    //                 printf(" %2d ", num1++);
    //             else
    //                 printf(" %d ", num2++);
    //         }
    //         else
    //             printf("    ");
    //     }

    //     printf("\n");
    // }

    // // 2nd Approach
    int rows, num1, num2, k, sum;
    printf("\nHow Many Rows => ");
    scanf("%d", &rows);
    num1 = 1;
    sum = rows * (rows + 1) / 2;
    puts("\n--------------------------------------------\n");
    for (int row = 1; row <= rows; row++)
    {

        for (int space = 1; space <= row - 1; space++)
            printf("    ");

        for (int col = 1; col <= rows + 1 - row; col++)
            printf(" %2d ", num1++);

        k = rows - row;
        num2 = sum + 1 + (k * (k + 1) / 2);

        for (int col = 1; col <= rows + 1 - row; col++)
            printf(" %2d ", num2++);

        putch(10);
    }

    getch();
    return 0;
}
// Main Function End
