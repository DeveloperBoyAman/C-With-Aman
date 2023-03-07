// C Program to Print Following Pattern

/*

    Pattern 47.

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
    int rows, toggle, cols, k = 1, midOfRows;
    printf("\nHow Many Rows => ");
    scanf("%d", &rows);
    puts("\n--------------------------------------------\n");
    midOfRows = (rows + 1) / 2;
    cols = rows;
    for (int row = 1; row <= rows; row++)
    {
        toggle = 1;
        for (int col = 1; col <= cols; col++)
        {
            if (toggle && col >= midOfRows + 1 - k && col <= midOfRows - 1 + k)
            {
                printf("*");
                toggle = 0;
            }
            else
            {
                printf(" ");
                toggle = 1;
            }
        }

        // If User Wants Even Number of Rows
        if (rows % 2 == 0 && row == midOfRows)
            k++;
        row < midOfRows ? k++ : k--;
        printf("\n");
    }

    // // 2nd Approach
    // int rows, cols, toggle, midOfRows, spacesInEachRow;
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);

    // // //  If User Wants Even Number of Rows
    // if (rows & 1)
    //     cols = rows;
    // else
    //     cols = rows - 1;

    // midOfRows = (rows + 1) / 2;

    // puts("\n--------------------------------------------\n");
    // for (int row = 1; row <= rows; row++)
    // {
    //     spacesInEachRow = (row > midOfRows ? row - midOfRows : midOfRows - row) * 2;
    //     toggle = 1;

    //     // If User Wants Even Number fo Rows
    //     if (rows % 2 == 0 && row > midOfRows)
    //         spacesInEachRow -= 2;

    //     for (int space = 1; space <= spacesInEachRow / 2; space++)
    //         printf(" ");

    //     for (int col = 1; col <= cols - spacesInEachRow; col++)
    //     {
    //         if (toggle)
    //             printf("*");
    //         else
    //             printf(" ");
    //         toggle = !toggle;
    //     }

    //     printf("\n");
    // }

    getch();
    return 0;
}
// Main Function End

