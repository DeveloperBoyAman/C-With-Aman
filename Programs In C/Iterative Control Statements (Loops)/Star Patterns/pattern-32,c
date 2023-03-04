// C Program to Print Following Pattern

/*

    Pattern 32.

    *
    **
    ***
    ****
    *****
    ****
    ***
    **
    *


*/

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{

    // 1st Approach
    int rows, midOfRows, starsInEachRow = 1;
    printf("\nHow Many Rows => ");
    scanf("%d", &rows);
    midOfRows = (rows + 1) / 2;
    puts("\n--------------------------------------------\n");
    for (int row = 1; row <= rows; row++)
    {
        for (int col = 1; col <= starsInEachRow; col++)
            printf("*");

        // If User Wants Even Number of Rows
        if (rows % 2 == 0 && row == midOfRows)
            starsInEachRow++;

        row < midOfRows ? starsInEachRow++ : starsInEachRow--;
        printf("\n");
    }

    // // 2nd Approach
    // int rows, starsInEachRow, midOfRows;
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);
    // midOfRows = (rows + 1) / 2;
    // puts("\n--------------------------------------------\n");
    // for (int row = 1; row <= rows; row++)
    // {
    //     starsInEachRow = row > midOfRows ? midOfRows * 2 - row : row;

    //     // If User Wants Even Number of Rows
    //     if (rows % 2 == 0 && row > midOfRows)
    //         starsInEachRow++;

    //     for (int col = 1; col <= starsInEachRow; col++)
    //         printf("*");

    //     printf("\n");
    // }

    getch();
    return 0;
}
// Main Function End
