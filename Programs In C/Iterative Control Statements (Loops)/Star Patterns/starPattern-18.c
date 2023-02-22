// Star Pattern

/*

    Pattern 29.

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
#include <stdlib.h>

// Main Function Start
int main()
{

    // // 1st Approach
    int rows;
    printf("\nHow Many Rows => ");
    scanf("%d", &rows);
    puts("\n--------------------------------------------\n");
    int n = (rows + 1) / 2, count = 1;
    for (int row = 1; row <= rows; row++)
    {
        for (int col = 1; col <= rows; col++)
        {
            if (col >= n + 1 - count && col <= n - 1 + count)
                printf("*");
            else
                printf(" ");
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
    // int rows;
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);
    // puts("\n--------------------------------------------\n");
    // int n = (rows + 1) / 2, spacesInEachRow;
    // for (int row = 1; row <= rows; row++)
    // {
    //     spacesInEachRow = row <= n ? n - row : row - n;
    //     for (int space = 1; space <= spacesInEachRow; space++)
    //         printf(" ");
    //     for (int col = 1; col <= rows - spacesInEachRow * 2; col++)
    //         printf("*");
    //     printf("\n");
    // }

    getch();
    return 0;
}
// Main Function End

