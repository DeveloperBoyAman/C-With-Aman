// C Program to Print Following Pattern

/*

    Pattern 44.

       *        *
       **      **
       * *    * *
       *  *  *  *
       *   **   *
       *   **   *
       *  *  *  *
       * *    * *
       **      **
       *        *

*/

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{

    // //  1st Approach
    int rows, cols, midOfRows, k = 1;
    printf("\nHow Many Rows => ");
    scanf("%d", &rows);
    midOfRows = (rows + 1) / 2;
    cols = midOfRows * 2;
    puts("\n--------------------------------------------\n");
    for (int row = 1; row <= rows; row++)
    {
        for (int col = 1; col <= cols; col++)
        {
            if (col == k || col == cols + 1 - k || col == 1 || col == cols)
                printf("*");
            else
                printf(" ");
        }

        // If User Wants Even Number of Rows
        if (rows % 2 == 0 && row == midOfRows)
            k++;

        row < midOfRows ? k++ : k--;

        printf("\n");
    }

    // // 2nd Approach
    // int rows, starsInEachRow, midOfRows, k;
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);
    // midOfRows = (rows + 1) / 2;
    // puts("\n--------------------------------------------\n");
    // for (int row = 1; row <= rows; row++)
    // {

    //     starsInEachRow = (row > midOfRows ? midOfRows * 2 - row : row) * 2;

    //     // If User Wants Even Number of Rows
    //     if (rows % 2 == 0 && row > midOfRows)
    //         starsInEachRow += 2;

    //     for (int col = 1; col <= starsInEachRow / 2; col++)
    //     {
    //         if (col == 1 || col == starsInEachRow / 2)
    //             printf("*");
    //         else
    //             printf(" ");
    //     }

    //     for (int space = 1; space <= midOfRows * 2 - starsInEachRow; space++)
    //         printf(" ");

    //     for (int col = 1; col <= starsInEachRow / 2; col++)
    //     {
    //         if (col == 1 || col == starsInEachRow / 2)
    //             printf("*");
    //         else
    //             printf(" ");
    //     }

    //     printf("\n");
    // }

    getch();
    return 0;
}
// Main Function End
