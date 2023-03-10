// C Program to Print Following Pattern

/*

    Pattern 21.

    1
    2 3
    3 4 5
    4 5 6 7


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
        for (int col = 1; col <= row; col++)
            printf("%-2d ", row + col - 1);
        printf("\n");
    }

    // // 2nd Approach
    // int rows, num;
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);
    // puts("\n--------------------------------------------\n");
    // for (int row = 1; row <= rows; row++)
    // {
    //     num = row;
    //     for (int col = 1; col <= row; col++)
    //         printf("%-2d ", num++);
    //     printf("\n");
    // }

    // // 3rd Approach
    // int rows;
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);
    // puts("\n--------------------------------------------\n");
    // for (int row = 1; row <= rows; row++)
    // {
    //     for (int col = row; col <= row * 2 - 1; col++)
    //         printf("%-2d ", col);
    //     printf("\n");
    // }

    getch();
    return 0;
}
// Main Function End
