// Star Pattern

/*

    Pattern 34.

         *
        * *
       * * *
      * * * *
     * * * * *

*/

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{

    // 1st Approach
    // int rows, cols, lock;
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);
    // cols = rows * 2 - 1;
    // puts("\n--------------------------------------------\n");
    // for (int row = 1; row <= rows; row++)
    // {
    //     lock = 1;
    //     for (int col = 1; col <= cols; col++)
    //     {
    //         if (lock && col >= rows + 1 - row && col <= rows - 1 + row)
    //         {
    //             printf("*");
    //             lock = 0;
    //         }
    //         else
    //         {
    //             printf(" ");
    //             lock = 1;
    //         }
    //     }

    //     printf("\n");
    // }

    // // 2nd Approach
    int rows, lock;
    printf("\nHow Many Rows => ");
    scanf("%d", &rows);
    int n = (rows + 1) / 2;
    puts("\n--------------------------------------------\n");
    for (int row = 1; row <= rows; row++)
    {
        lock = 1;
        for (int space = 1; space <= rows - row; space++)
            putch(' ');
        for (int col = 1; col <= row * 2 - 1; col++)
        {
            if (lock)
                printf("*");
            else
                printf(" ");
            lock = !lock;
        }

        printf("\n");
    }

    getch();
    return 0;
}
// Main Function End
