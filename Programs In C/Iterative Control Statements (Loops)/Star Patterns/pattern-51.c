// C Program to Print Following Pattern

/*

    Pattern 51.

       E
       D E
       C D E
       B C D E
       A B C D E


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
            if (col <= row)
                printf("%c ", 'A' + rows - row + col - 1);
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
    //     for (int col = 1; col <= row; col++)
    //         printf("%c ", 'A' + rows - row + col - 1);

    //     printf("\n");
    // }

    // // 3rd Approach
    // int rows;
    // char ch;
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);
    // puts("\n--------------------------------------------\n");
    // for (int row = 1; row <= rows; row++)
    // {
    //     ch = 'A' + rows - row;
    //     for (int col = 1; col <= row; col++)
    //         printf("%c ", ch++);

    //     printf("\n");
    // }

    getch();
    return 0;
}
// Main Function End

