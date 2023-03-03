// C Program to Print Following Pattern

/*

    Pattern 25.

           1
         2 2
       3 3 3
     4 4 4 4

*/

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{

    // // 1st Approach
    int rows, cols;
    printf("\nHow Many Rows => ");
    scanf("%d", &rows);
    cols = rows;
    puts("\n--------------------------------------------\n");
    for (int row = 1; row <= rows; row++)
    {
        for (int col = 1; col <= cols; col++)
        {
            if (col >= rows + 1 - row)
                printf("%d ", row);
            else
                printf("  ");
        }
        printf("\n");
    }

    // // 2nd Approach
    // int rows;
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);
    // puts("\n--------------------------------------------\n");
    // for (int row = 1; row <= rows; row++)
    // {
    //     for (int space = 1; space <= rows - row; space++)
    //         printf("  ");
    //     for (int col = 1; col <= row; col++)
    //         printf("%d ", row);
    //     printf("\n");
    // }

    getch();
    return 0;
}
// Main Function End
