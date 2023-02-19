// Star Pattern

/*

    Pattern 28.

          1
        2 3
      4 5 6

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
    // cols = rows;
    // puts("\n--------------------------------------------\n");
    // int count = 1;
    // for (int row = 1; row <= rows; row++)
    // {

    //     for (int col = 1; col <= cols; col++)
    //     {
    //         if (col >= rows + 1 - row)
    //             printf("%2d ", count++);
    //         else
    //             printf("   ");
    //     }
    //     printf("\n");
    // }

    // // 2nd Approach
    int rows;
    printf("\nHow Many Rows => ");
    scanf("%d", &rows);
    puts("\n--------------------------------------------\n");
    int count = 1;
    for (int row = 1; row <= rows; row++)
    {
        for (int space = 1; space <= rows - row; space++)
            printf("   ");
        for (int col = 1; col <= row; col++)
            printf("%2d ", count++);
        printf("\n");
    }

    getch();
    return 0;
}
// Main Function End
