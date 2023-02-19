// Star Pattern

/*

    Pattern 27.

       1 2 3 4
         2 3 4
           3 4
             4

*/

// Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// Main Function Start
int main()
{

    // // 1st Approach
    int rows, cols;
    printf("\nHow Many Rows => ");
    scanf("%d", &rows);
    cols = rows;
    puts("\n--------------------------------------------\n");
    for (int row = 1; row <= rows; row++)
    {
        for (int col = 1; col <= cols; col++)
        {
            if (col >= row)
                printf("%d", col);
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
    //     for (int space = 1; space <= row - 1; space++)
    //         printf(" ");
    //     for (int col = row; col <= rows; col++)
    //         printf("%d", col);
    //     printf("\n");
    // }

    getch();
    return 0;
}
// Main Function End
