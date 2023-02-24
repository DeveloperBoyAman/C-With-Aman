// Star Pattern

/*

    Pattern 36.


     * * * * *
      * * * *
       * * *
        * *
         *
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
    // int rows, cols, lock, count = 1;
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);
    // cols = rows * 2 - 1;
    // rows *= 2;
    // puts("\n--------------------------------------------\n");
    // for (int row = 1; row <= rows; row++)
    // {
    //     lock = 1;
    //     for (int col = 1; col <= cols; col++)
    //     {
    //         if (lock && col >= count && col <= cols + 1 - count)
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
    //     if (row == rows / 2)
    //         count++;

    //     row < rows / 2 ? count++ : count--;

    //     printf("\n");
    // }

    // // 2nd Approach
    int rows, lock, n, spacesInEachRow, starsInEachRow;
    printf("\nHow Many Rows => ");
    scanf("%d", &rows);
    n = rows;
    rows *= 2;
    puts("\n--------------------------------------------\n");
    for (int row = 1; row <= rows; row++)
    {
        lock = 1;
        spacesInEachRow = row <= n ? row - 1 : n - (row - n);

        for (int space = 1; space <= spacesInEachRow; space++)
            putch(' ');

        starsInEachRow = row <= n ? n * 2 - 1 - (row - 1) * 2 : (row - n) * 2 - 1;

        for (int col = 1; col <= starsInEachRow; col++)
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
