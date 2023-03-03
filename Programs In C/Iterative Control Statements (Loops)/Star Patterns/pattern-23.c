// C Program to Print Following Pattern

/*

    Pattern 23.

    A B C D
    E F G H
    I J K L
    M N O P

*/

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{

    // // 1st Approach
    int rows;
    char ch = 'A';
    printf("\nHow Many Rows => ");
    scanf("%d", &rows);
    puts("\n--------------------------------------------\n");
    for (int row = 1; row <= rows; row++)
    {
        for (int col = 1; col <= rows; col++)
            printf("%c ", ch++);
        printf("\n");
    }

    // // 2nd Approach
    // int rows;
    // char ch = 'A';
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);
    // ch -= rows;
    // puts("\n--------------------------------------------\n");
    // for (int row = 1; row <= rows; row++)
    // {
    //     ch += rows;
    //     for (int col = 1; col <= rows; col++)
    //         printf("%c ", ch - 1 + col);
    //     printf("\n");
    // }

    getch();
    return 0;
}
// Main Function End
