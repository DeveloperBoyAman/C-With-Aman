// Star Pattern

/*

    Pattern 39.

         1
        212
       32123
      4321234
       32123
        212
         1

*/

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{

    // //  1st Approach
    int rows, cols, count = 1, k, n;
    printf("\nHow Many Rows => ");
    scanf("%d", &rows);
    cols = rows * 2 - 1;
    n = (rows + 1) / 2;
    puts("\n--------------------------------------------\n");
    for (int row = 1; row <= rows; row++)
    {

        k = row <= n ? row : n - (row - n);

        // // If User Wants Even Number of Rows
        if (rows % 2 == 0 && row > n)
            k++;

        for (int col = 1; col <= cols; col++)
        {
            if (col >= n + 1 - count && col <= n - 1 + count)
            {
                printf("%d", k);
                col < n ? k-- : k++;
            }

            else
                printf(" ");
        }

        // // If User Wants Even Number of Rows
        if (rows % 2 == 0 && row == n)
            count++;

        row < n ? count++ : count--;

        printf("\n");
    }

    // // 2nd Approach
    // int rows, spacesInEachRow, n, k;
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);
    // n = (rows + 1) / 2;
    // puts("\n--------------------------------------------\n");
    // for (int row = 1; row <= rows; row++)
    // {

    //     spacesInEachRow = row <= n ? n - row : row - n;

    //     for (int space = 1; space <= spacesInEachRow; space++)
    //         printf(" ");

    //     k = row <= n ? row : n - (row - n);

    //     for (int col = 1; col <= rows - spacesInEachRow * 2; col++)
    //     {
    //         printf("%d", k);
    //         col < (rows - spacesInEachRow * 2) / 2 ? k-- : k++;
    //     }

    //     printf("\n");
    // }

    getch();
    return 0;
}
// Main Function End
