// C Program to Print Following Pattern

/*

    Pattern 22.

    A B C D
    A B C D
    A B C D
    A B C D


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
        for (int col = 1; col <= rows; col++)
            printf("%c ", 'A' + col - 1);
        printf("\n");
    }

    // // 2nd Approach
    // int rows;
    // char ch;
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);
    // puts("\n--------------------------------------------\n");
    // for (int row = 1; row <= rows; row++)
    // {
    //     ch = 'A';
    //     for (int col = 1; col <= rows; col++)
    //         printf("%c ", ch++);
    //     printf("\n");
    // }

    // // 3rd Approach
    // int rows;
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);
    // puts("\n--------------------------------------------\n");
    // for (int row = 1; row <= rows; row++)
    // {
    //     for (int col = 'A'; col <= 'A' + rows - 1; col++)
    //         printf("%c ", col);
    //     printf("\n");
    // }

    getch();
    return 0;
}
// Main Function End
