// Star Pattern

/*

    Pattern 48.

         *
        * *
       * * *
      * * * *
     * * * * *
      * * * *
       * * *
        * *
         *

*/

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{

    // // 1st Approach
    int rows, lock;
    printf("\nHow Many Rows => ");
    scanf("%d", &rows);
    puts("\n--------------------------------------------\n");
    int n = (rows + 1) / 2, count = 1;
    for (int row = 1; row <= rows; row++)
    {
        lock = 1;
        for (int col = 1; col <= rows; col++)
        {
            if (lock && col >= n + 1 - count && col <= n - 1 + count)
            {
                printf("*");
                lock = 0;
            }
            else
            {
                printf(" ");
                lock = 1;
            }
        }

        // If User Wants Even Number of Rows
        if (rows % 2 == 0 && row == n)
        {
            printf("\n");
            continue;
        }
        row < n ? count++ : count--;
        printf("\n");
    }

    // // 2nd Approach
    // int rows, cols, lock;
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);

    // // //  If User Wants Even Number fo Rows
    // if (rows & 1)
    //     cols = rows;
    // else
    //     cols = rows - 1;

    // puts("\n--------------------------------------------\n");
    // int n = (rows + 1) / 2, spacesInEachRow;
    // for (int row = 1; row <= rows; row++)
    // {
    //     spacesInEachRow = row <= n ? n - row : row - n;
    //     lock = 1;
    //      // // If User Wants Even Number fo Rows
    //     if (rows % 2 == 0 && row > n)
    //         spacesInEachRow--;

    //     for (int space = 1; space <= spacesInEachRow; space++)
    //         printf(" ");
    //     for (int col = 1; col <= cols - spacesInEachRow * 2; col++)
    //     {
    //         if (lock)
    //             printf("*");
    //         else
    //             printf(" ");
    //         lock = 1 - lock;
    //     }

    //     printf("\n");
    // }

    getch();
    return 0;
}
// Main Function End
