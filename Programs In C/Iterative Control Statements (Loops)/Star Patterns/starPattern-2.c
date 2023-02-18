// Star Pattern

/*

     Pattern 2.

            *
          * *
        * * *
      * * * *
    * * * * *

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
    // for (int row = 1; row <= rows; row++)
    // {
    //     for (int col = 1; col <= cols; col++)
    //     {
    //         if (col >= rows - row + 1)
    //             printf("*");
    //         else
    //             printf(" ");
    //     }
    //     printf("\n");
    // }

    // // 2nd Approach
    int rows, cols;
    printf("\nHow Many Rows => ");
    scanf("%d", &rows);
    cols = rows;
    puts("\n--------------------------------------------\n");
    for (int row = 1; row <= rows; row++)
    {
        for (int space = 1; space <= rows - row + 1; space++)
            printf(" ");
        for (int col = 1; col <= row; col++)
            printf("*");
        printf("\n");
    }

    getch();
    return 0;
   
}
// Main Function End
