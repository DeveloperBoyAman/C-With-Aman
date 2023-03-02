// C Program to Print Following Pattern

/*

    Pattern 18.

          *
         ***
        *****
       *******
      *********
       *******
        *****
         ***
          *


*/

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{

    // // 1st Approach
    int rows, midOfRows, cols, k = 1;
    printf("\nHow Many Rows => ");
    scanf("%d", &rows);
    puts("\n--------------------------------------------\n");
    midOfRows = (rows + 1) / 2;
    cols = rows;

    for (int row = 1; row <= rows; row++)
    {
        for (int col = 1; col <= cols; col++)
        {
            if (col >= midOfRows + 1 - k && col <= midOfRows - 1 + k)
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
    // int rows, midOfRows, spacesInEachRow, cols;
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);
    // puts("\n--------------------------------------------\n");
    // midOfRows = (rows + 1) / 2, spacesInEachRow;

    // // If User Wants Even Number of Rows
    // cols = rows & 1 ? rows : rows - 1;

    // for (int row = 1; row <= rows; row++)
    // {

    //     spacesInEachRow = row > midOfRows ? row - midOfRows : midOfRows - row;

    //     // // If User Wants Even Number of Rows
    //     if (rows % 2 == 0 && row > midOfRows)
    //         spacesInEachRow--;

    //     for (int space = 1; space <= spacesInEachRow; space++)
    //         printf(" ");

    //     for (int col = 1; col <= cols - spacesInEachRow * 2; col++)
    //         printf("*");

    //     printf("\n");
    // }

    // 3rd Approach
    // int rows, midOfRows, starsInEachRow = -1, cols;
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);
    // puts("\n--------------------------------------------\n");
    // midOfRows = (rows + 1) / 2;

    // for (int row = 1; row <= rows; row++)
    // {

    //     starsInEachRow = row > midOfRows ? starsInEachRow - 2 : starsInEachRow + 2;

    //     // // If User Wants Even Number of Rows
    //     if (rows % 2 == 0 && row == midOfRows + 1)
    //         starsInEachRow += 2;

    //     for (int space = 1; space <= (rows - starsInEachRow) / 2; space++)
    //         printf(" ");

    //     for (int col = 1; col <= starsInEachRow; col++)
    //         printf("*");

    //     printf("\n");
    // }

    getch();
    return 0;
}
// Main Function End
