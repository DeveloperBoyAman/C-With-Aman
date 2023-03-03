// C Program to Print Following Pattern


/*

    Pattern 27.

          1
        2 3
      4 5 6

*/

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{

    // // 1st Approach
    int rows, cols, num=1;
    printf("\nHow Many Rows => ");
    scanf("%d", &rows);
    cols = rows;
    puts("\n--------------------------------------------\n");
    for (int row = 1; row <= rows; row++)
    {
        for (int col = 1; col <= cols; col++)
        {
            if (col >= rows + 1 - row)
                printf("%-2d ", num++);
            else
                printf("   ");
        }
        printf("\n");
    }

    // // 2nd Approach
    // int rows, num = 1;
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);
    // puts("\n--------------------------------------------\n");
    // for (int row = 1; row <= rows; row++)
    // {
    //     for (int space = 1; space <= rows - row; space++)
    //         printf("   ");
    //     for (int col = 1; col <= row; col++)
    //         printf("%-2d ", num++);
    //     printf("\n");
    // }

    // // 3rd Approach
    // int rows, num = 1;
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);
    // puts("\n--------------------------------------------\n");
    // for (int row = 1; row <= rows; row++)
    // {
    //     num += row - 1;
    //     for (int space = 1; space <= rows - row; space++)
    //         printf("   ");

    //     for (int col = 1; col <= row; col++)
    //         printf("%-2d ", num - 1 + col);

    //     printf("\n");
    // }

    getch();
    return 0;
}
// Main Function End
