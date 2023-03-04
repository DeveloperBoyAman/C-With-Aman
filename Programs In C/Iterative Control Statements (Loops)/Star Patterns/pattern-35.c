// C Program to Print Following Pattern


/*

    Pattern 35.


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
    int rows, cols, toggle, k = 1;
    printf("\nHow Many Rows => ");
    scanf("%d", &rows);
    cols = rows * 2 - 1;
    rows *= 2;
    puts("\n--------------------------------------------\n");
    for (int row = 1; row <= rows; row++)
    {
        for (int col = 1; col <= cols; col++)
        {
            if (col >= k && col <= cols + 1 - k)
            {
                if (toggle)
                    printf("*");
                else
                    printf(" ");
            }
            else
                printf(" ");
        }

        if (row == rows / 2)
            k++;

        row < rows / 2 ? k++ : k--;

        printf("\n");
    }

    // // 2nd Approach
    // int rows, toggle, n, spacesInEachRow, starsInEachRow;
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);
    // n = rows;
    // rows *= 2;
    // puts("\n--------------------------------------------\n");
    // for (int row = 1; row <= rows; row++)
    // {
    //     spacesInEachRow = row <= n ? row - 1 : n * 2 - row;
    //     for (int space = 1; space <= spacesInEachRow; space++)
    //         printf(" ");

    //     starsInEachRow = n * 2 - 1 - spacesInEachRow * 2;
    //     for (int col = 1; col <= starsInEachRow; col++)
    //     {
    //         if (toggle)
    //             printf("*");
    //         else
    //             printf(" ");
    //     }

    //     printf("\n");
    // }

    // // 3rd Approach
    // int rows, toggle, n, spacesInEachRow = 0, starsInEachRow;
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);
    // n = rows;
    // starsInEachRow = n * 2 - 1;
    // rows *= 2;
    // puts("\n--------------------------------------------\n");
    // for (int row = 1; row <= rows; row++)
    // {
    //     for (int space = 1; space <= spacesInEachRow; space++)
    //         printf(" ");

    //     for (int col = 1; col <= starsInEachRow; col++)
    //     {
    //         if (toggle)
    //             printf("*");
    //         else
    //             printf(" ");
    //     }
    //     if (row == n)
    //     {
    //         spacesInEachRow--;
    //         starsInEachRow += 2;
    //     }
    //     if (row <= n)
    //     {
    //         spacesInEachRow++;
    //         starsInEachRow -= 2;
    //     }
    //     else
    //     {
    //         spacesInEachRow--;
    //         starsInEachRow += 2;
    //     }

    //     printf("\n");
    // }

    getch();
    return 0;
}
// Main Function End
