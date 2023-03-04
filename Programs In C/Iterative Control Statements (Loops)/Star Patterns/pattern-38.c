// C Program to Print Following Pattern

/*

    Pattern 38.

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
    int rows, cols, k = 1, midOfRows, num;
    printf("\nHow Many Rows => ");
    scanf("%d", &rows);
    cols = rows * 2 - 1;
    midOfRows = (rows + 1) / 2;
    puts("\n--------------------------------------------\n");
    for (int row = 1; row <= rows; row++)
    {
        num = k;
        for (int col = 1; col <= cols; col++)
        {
            if (col >= midOfRows + 1 - k && col <= midOfRows - 1 + k)
            {
                printf("%d", num);
                col < midOfRows ? num-- : num++;
            }
            else
                printf(" ");
        }

        // If User Wants Even Numbers of Rows
        if (rows % 2 == 0 && row == midOfRows)
            k++;

        row < midOfRows ? k++ : k--;

        printf("\n");
    }

    // // 2nd Approach
    // int rows, spacesInEachRow, midOfRows, num, cols;
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

    //     spacesInEachRow = row <= midOfRows ? midOfRows - row : row - midOfRows;

    //     // If User Wants Even Number of Rows
    //     if (rows % 2 == 0 && row > midOfRows)
    //         spacesInEachRow--;

    //     for (int space = 1; space <= spacesInEachRow; space++)
    //         printf(" ");

    //     num = midOfRows - spacesInEachRow;

    //     for (int col = 1; col <= cols - spacesInEachRow * 2; col++)
    //     {
    //         printf("%d", num);
    //         col < (rows - spacesInEachRow * 2) / 2 ? num-- : num++;
    //     }

    //     printf("\n");
    // }

    getch();
    return 0;
}
// Main Function End

