// C Program to Print Following Pattern

/*

    Pattern 30.

    1 2 3
    4 5 6
    7 8 9

*/

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{

    // // 1st Approach
    int rows, cols, num;
    printf("\nHow Many Rows => ");
    scanf("%d", &rows);
    cols = rows;
    puts("\n--------------------------------------------\n");
    for (int row = 1; row <= rows; row++)
    {
        for (int col = 1; col <= cols; col++)
            printf("%-3d  ", num++);
        printf("\n");
    }

    // // 2nd Approach
    // int rows, cols;
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);
    // puts("\n--------------------------------------------\n");
    // for (int row = 1; row <= rows; row++)
    // {
    //     for (int col = 1; col <= rows; col++)
    //         printf("%-3d  ", rows * (row - 1) + col);
    //     printf("\n");
    // }

    // // 3rd Approach
    // int rows, cols, num = 1;
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);
    // num -= rows;
    // puts("\n--------------------------------------------\n");
    // for (int row = 1; row <= rows; row++)
    // {
    //     num += rows;
    //     for (int col = 1; col <= rows; col++)
    //         printf("%-3d  ", num-1+col);
    //     printf("\n");
    // }


    getch();
    return 0;
}
// Main Function End
