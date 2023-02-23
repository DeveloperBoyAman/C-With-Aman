// Star Pattern

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
#include <stdlib.h>

// Main Function Start
int main()
{

    // // 1st Approach
    int rows,count=1;
    printf("\nHow Many Rows => ");
    scanf("%d", &rows);
    puts("\n--------------------------------------------\n");
    for (int row = 1; row <= rows; row++)
    {
        for (int col = 1; col <= row; col++)
            printf("%2d ", count++);
        printf("\n");
    }

    // // 2nd Approach
    // int rows,count=1;
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);
    // puts("\n--------------------------------------------\n");
    // for (int row = 1; row <= rows; row++)
    // {
    //     count += row - 1;
    //     for (int col = 1; col <= row; col++)
    //         printf("%2d ", count + col - 1);
    //     printf("\n");
    // }

    getch();
    return 0;
}
// Main Function End
