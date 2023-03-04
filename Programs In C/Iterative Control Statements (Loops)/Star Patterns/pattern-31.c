// C Program to Print Following Pattern

/*

    Pattern 31.

    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5

*/

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{

    // 1st Approach
    int rows;
    printf("\nHow Many Rows => ");
    scanf("%d", &rows);
    puts("\n--------------------------------------------\n");
    for (int row = 1; row <= rows; row++)
    {
        for (int col = 1; col <= rows; col++)
        {
            if (col <= row)
                printf("%d ", col);
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
    //     for (int col = 1; col <= row; col++)
    //         printf("%d ", col);
    //     printf("\n");
    // }

    getch();
    return 0;
}
// Main Function End

