// C Program to Print Following Pattern


/*

    Pattern 39.

      **********
      ****  ****
      ***    ***
      **      **
      *        *
      *        *
      **      **
      ***    ***
      ****  ****
      **********


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
    cols = rows * 2;
    rows *= 2;
    midOfRows = rows / 2;
    puts("\n--------------------------------------------\n");
    for (int row = 1; row <= rows; row++)
    {
        for (int col = 1; col <= cols; col++)
        {
            if (col <= midOfRows + 1 - k || col >= midOfRows + k)
                printf("*");
            else
                printf(" ");
        }
        if (row == midOfRows)
            k++;
        row < midOfRows ? k++ : k--;
        printf("\n");
    }

    // // 2nd Approach
    // int rows, starsInEachRow, midOfRows;
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);
    // rows *= 2;
    // midOfRows = rows / 2;
    // puts("\n--------------------------------------------\n");
    // for (int row = 1; row <= rows; row++)
    // {
    //     starsInEachRow = (row <= midOfRows ? midOfRows + 1 - row : row - midOfRows) * 2;

    //     for (int col = 1; col <= starsInEachRow / 2; col++)
    //         printf("*");

    //     for (int space = 1; space <= rows - starsInEachRow; space++)
    //         printf(" ");

    //     for (int col = 1; col <= starsInEachRow / 2; col++)
    //         printf("*");

    //     printf("\n");
    // }

    getch();
    return 0;
}
// Main Function End

