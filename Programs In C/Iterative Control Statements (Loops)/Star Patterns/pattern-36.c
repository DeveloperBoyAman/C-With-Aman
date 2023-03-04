// C Program to Print Following Pattern

/*

    Pattern 36.

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
    int rows, cols, k = 1, midOfRows;
    printf("\nHow Many Rows => ");
    scanf("%d", &rows);
    cols = rows;
    midOfRows = (rows + 1) / 2;
    puts("\n--------------------------------------------\n");
    for (int row = 1; row <= rows; row++)
    {
        for (int col = 1; col <= cols; col++)
        {
            if (col == midOfRows + 1 - k || col == midOfRows - 1 + k)
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
    // int rows, midOfRows, spacesInEachRow, starsInEachRow, cols;
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);
    // midOfRows = (rows + 1) / 2;

    // // If User Wants Even Number of Rows
    // if (rows & 1)
    //     cols = rows;
    // else
    //     cols = rows - 1;

    // puts("\n--------------------------------------------\n");
    // for (int row = 1; row <= rows; row++)
    // {

    //     spacesInEachRow = row > midOfRows ? row - midOfRows : midOfRows - row;

    //     // If User Wants Even Number of Rows
    //     if (rows % 2 == 0 && row > midOfRows)
    //         spacesInEachRow--;

    //     for (int space = 1; space <= spacesInEachRow; space++)
    //         printf(" ");

    //     starsInEachRow = cols - spacesInEachRow * 2;

    //     for (int col = 1; col <= starsInEachRow; col++)
    //     {
    //         if (col == 1 || col == starsInEachRow)
    //             printf("*");
    //         else
    //             printf(" ");
    //     }

    //     printf("\n");
    // }

    // // 3rd Approach
    // int rows, midOfRows, spacesInEachRow, starsInEachRow, cols;
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);
    // midOfRows = (rows + 1) / 2;

    // // If User Wants Even Number of Rows
    // if (rows & 1)
    //     cols = rows;
    // else
    //     cols = rows - 1;

    // starsInEachRow = 1;
    // spacesInEachRow = rows - 1;
    // puts("\n--------------------------------------------\n");
    // for (int row = 1; row <= rows; row++)
    // {

    //     for (int space = 1; space <= spacesInEachRow; space++)
    //         printf(" ");

    //     for (int col = 1; col <= starsInEachRow; col++)
    //     {
    //         if (col == 1 || col == starsInEachRow)
    //             printf("*");
    //         else
    //             printf(" ");
    //     }

    //     // If User Wants Even Number of Rows
    //     if (rows % 2 == 0 && row == midOfRows)
    //     {
    //         spacesInEachRow--;
    //         starsInEachRow += 2;
    //     }

    //     if (row < midOfRows)
    //     {
    //         spacesInEachRow--;
    //         starsInEachRow += 2;
    //     }
    //     else
    //     {
    //         spacesInEachRow++;
    //         starsInEachRow -= 2;
    //     }

    //     printf("\n");
    // }

    getch();
    return 0;
}
// Main Function End

