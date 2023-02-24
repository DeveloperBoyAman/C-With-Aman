// Star Pattern

/*

    Pattern 37.

         *
        * *
       *   *
      *     *
     *       *
      *     *
       *   *
        * *
         *





*/

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{

    // //  1st Approach
    // int rows, cols, count = 1,n;
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);
    // cols = rows;
    //  n = (rows + 1) / 2;
    // puts("\n--------------------------------------------\n");
    // for (int row = 1; row <= rows; row++)
    // {
    //     for (int col = 1; col <= cols; col++)
    //     {
    //         if (col == n + 1 - count || col == n - 1 + count)
    //             printf("*");
    //         else
    //             printf(" ");
    //     }
    //     // If User Wants Even Number of Rows
    //     if (!(rows & 1) && row == n)
    //         count++;
    //     row < n ? count++ : count--;
    //     printf("\n");
    // }

    // // 2nd Approach
    int rows, n, spacesInEachRow, starsInEachRow, temp;
    printf("\nHow Many Rows => ");
    scanf("%d", &rows);
    n = (rows + 1) / 2;

    // // If User Wants Even Number of Rows
    if (rows % 2 == 0)
        temp = rows - 1;
    else
        temp = rows;

    puts("\n--------------------------------------------\n");
    for (int row = 1; row <= rows; row++)
    {
        spacesInEachRow = row <= n ? n - row : row - n;

        // // If User Wants Even Number of Rows
        if (temp != rows && row > n)
            spacesInEachRow--;

        for (int space = 1; space <= spacesInEachRow; space++)
            putch(' ');

        for (int col = 1; col <= temp - spacesInEachRow * 2; col++)
        {
            if (col == 1 || col == temp - spacesInEachRow * 2)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

    getch();
    return 0;
}
// Main Function End
