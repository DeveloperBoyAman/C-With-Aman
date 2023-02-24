// Star Pattern

/*

    Pattern 33.

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
    // int rows, count = 1;
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);
    // int n = (rows + 1) / 2;
    // puts("\n--------------------------------------------\n");
    // for (int row = 1; row <= rows; row++)
    // {
    //     for (int col = 1; col <= rows; col++)
    //     {
    //         if (col <= count)
    //             printf("*");
    //     }

    //     // If User Wants Even Number of Rows
    //     if (rows % 2 == 0 && row == n)
    //     {
    //         printf("\n");
    //         continue;
    //     }
    //     row < n ? count++ : count--;
    //     printf("\n");
    // }

    // // 2nd Approach
    int rows, starsInEachRow;
    printf("\nHow Many Rows => ");
    scanf("%d", &rows);
    int n = (rows + 1) / 2;
    puts("\n--------------------------------------------\n");
    for (int row = 1; row <= rows; row++)
    {

        starsInEachRow = row <= n ? row : n - (row - n);

        // If User Wants Even Number of Rows
        if (rows % 2 == 0 && row > n)
            starsInEachRow++;

        for (int col = 1; col <= starsInEachRow; col++)
            printf("*");
        printf("\n");
    }

    getch();
    return 0;
}
// Main Function End
