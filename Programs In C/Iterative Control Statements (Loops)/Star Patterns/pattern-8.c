// C Program to Print Following Pattern


/*

    Pattern 8.

        1
       121
      12321
     1234321

*/

// Header Files
#include <stdio.h>
#include <conio.h>

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
            if (col >= rows + 1 - row && col <= rows - 1 + row)
            {
                printf("%d", num);
                col < rows ? num++ : num--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }

    // // 2nd Approach
    // int rows, num;
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);
    // puts("\n--------------------------------------------\n");
    // for (int row = 1; row <= rows; row++)
    // {
    //     for (int space = 1; space <= rows - row; space++)
    //         printf(" ");

    //     for (int col = 1; col <= row * 2 - 1; col++)
    //     {
    //         printf("%d", num);
    //         col < (row * 2 - 1) / 2 + 1 ? num++ : num--;
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
