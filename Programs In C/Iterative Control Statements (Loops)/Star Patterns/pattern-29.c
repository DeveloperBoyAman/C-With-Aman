// C Program to Print Following Pattern

/*

    Pattern 29.

    4 3 2 1
    4 3 2 1
    4 3 2 1

*/

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{

    // // 1st Approach
    int rows;
    printf("\nHow Many Rows => ");
    scanf("%d", &rows);
    puts("\n--------------------------------------------\n");
    for (int row = 1; row <= rows; row++)
    {
        for (int col = rows; col >= 1; col--)
            printf("%d ", col);
        printf("\n");
    }

    // // 2nd Approach
    // int rows, cols;
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);
    // cols = rows;
    // puts("\n--------------------------------------------\n");
    // for (int row = 1; row <= rows; row++)
    // {
    //     for (int col = 1; col <= cols; col++)
    //         printf("%d ", rows + 1 - col);

    //     printf("\n");
    // }

    getch();
    return 0;
}
// Main Function End

