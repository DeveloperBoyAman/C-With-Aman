// C Program to Print Following Pattern

/*

    Pattern 20.

    1
    2 3
    4 5 6
    7 8 9 10

*/

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{

    // // 1st Approach
    int rows, num = 1;
    printf("\nHow Many Rows => ");
    scanf("%d", &rows);
    puts("\n--------------------------------------------\n");
    for (int row = 1; row <= rows; row++)
    {
        for (int col = 1; col <= row; col++)
            printf("%2d ", num++);
        printf("\n");
    }

    // // 2nd Approach
    // int rows, num = 1;
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);
    // puts("\n--------------------------------------------\n");
    // for (int row = 1; row <= rows; row++)
    // {
    //     num += row - 1;
    //     for (int col = 1; col <= row; col++)
    //         printf("%-2d ", num + col - 1);
    //     printf("\n");
    // }

    getch();
    return 0;
}
// Main Function End
