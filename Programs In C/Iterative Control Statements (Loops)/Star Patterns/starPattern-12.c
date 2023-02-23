// Star Pattern

/*

    Pattern 12.

          ABCDCBA
           ABCBA
            ABA
             A


*/

// Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// Main Function Start
int main()
{

    // // 1st Approach
    // int rows, cols;
    // char ch;
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);
    // cols = rows * 2 - 1;
    // puts("\n--------------------------------------------\n");
    // char ch = 'A';
    // for (int row = 1; row <= rows; row++)
    // {
    //     ch = 'A';
    //     for (int col = 1; col <= cols; col++)
    //     {
    //         if (col >= row && col <= cols + 1 - row)
    //         {
    //             printf("%c", ch);
    //             col < rows ? ch++ : ch--;
    //         }
    //         else
    //             putch(' ');
    //     }
    //     printf("\n");
    // }

    // // 2nd Approach
    int rows;
    printf("\nHow Many Rows => ");
    scanf("%d", &rows);
    puts("\n--------------------------------------------\n");
    for (int row = 1; row <= rows; row++)
    {
        for (int space = 1; space <= row - 1; space++)
            printf(" ");

        for (int col = 1; col <= rows + 1 - row; col++)
            printf("%c", 'A' - 1 + col);

        for (int col = rows - row; col >= 1; col--)
            printf("%c", 'A' - 1 + col);

        putch(10);
    }

    getch();
    return 0;
}
// Main Function End
