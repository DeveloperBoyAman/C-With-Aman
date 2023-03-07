// C Program to Print Following Pattern

/*

    Pattern 46.

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
    int rows, cols, counting = 1, num, k, sum;
    printf("\nHow Many Rows => ");
    scanf("%d", &rows);
    cols = rows * 2;
    sum = rows * (rows + 1) / 2;
    puts("\n--------------------------------------------\n");
    for (int row = 1; row <= rows; row++)
    {
        k = rows - row;

        num = sum + (k * (k + 1) / 2) + 1;

        for (int col = 1; col <= cols; col++)
        {
            if (col >= row && col <= cols + 1 - row)
            {
                if (col <= rows)
                    printf(" %-2d ", counting++);
                else
                    printf(" %-2d ", num++);
            }
            else
                printf("    ");
        }
        printf("\n");
    }

    // // 2nd Approach
    // int rows, counting = 1, k, num, sum;
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);
    // sum = rows * (rows + 1) / 2;
    // puts("\n--------------------------------------------\n");
    // for (int row = 1; row <= rows; row++)
    // {
    //     k = rows - row;

    //     num = sum + (k * (k + 1) / 2) + 1;
    //     for (int space = 1; space <= row - 1; space++)
    //         printf("    ");

    //     for (int col = row; col <= rows; col++)
    //         printf(" %-2d ", counting++);

    //     for (int col = rows + 1 - row; col; col--)
    //         printf(" %-2d ", num++);

    //     putch(10);
    // }

    getch();
    return 0;
}
// Main Function End

