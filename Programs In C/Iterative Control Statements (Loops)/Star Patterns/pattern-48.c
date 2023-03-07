// C Program to Print Following Pattern

/*

    Pattern 48.

            1
          2 1 2
        3 2 1 2 3
      4 3 2 1 2 3 4
    5 4 3 2 1 2 3 4 5

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
        num = row;
        for (int col = 1; col <= cols; col++)
        {
            if (col >= rows + 1 - row && col <= rows - 1 + row)
            {
                printf("%d ", num);
                col < rows ? num-- : num++;
            }
            else
                printf("  ");
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

    //     for (int space = 1; space <= rows - row; space++)
    //         printf("  ");

    //     for (int col = row; col >= 1; col--)
    //         printf("%d ", col);

    //     for (int col = 2; col <= row; col++)
    //         printf("%d ", col);

    //     printf("\n");
    // }

    getch();
    return 0;
}
// Main Function End
