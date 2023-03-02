// C Program to Print Following Pattern

/*

    Pattern 11.

             A
            ABA
           ABCBA
          ABCDCBA
         ABCDEDCBA


*/

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{

    // // 1st Approach
    int rows, cols;
    char ch;
    printf("\nHow Many Rows => ");
    scanf("%d", &rows);
    cols = rows * 2 - 1;
    puts("\n--------------------------------------------\n");
    for (int row = 1; row <= rows; row++)
    {
        ch = 'A';
        for (int col = 1; col <= cols; col++)
        {
            if (col >= rows + 1 - row && col <= rows - 1 + row)
            {
                printf("%c", ch);
                col < rows ? ch++ : ch--;
            }
            else
                putch(' ');
        }
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
    //     for (int space = 1; space <= rows - row; space++)
    //         printf(" ");

    //     ch = 'A';
    //     for (int col = 1; col <= row * 2 - 1; col++)
    //     {
    //         printf("%c", ch);
    //         col < (row * 2 - 1) / 2 + 1 ? ch++ : ch--;
    //     }

    //     putch(10);
    // }

    // // 3rd Approach
    // int rows;
    // char ch;
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);
    // puts("\n--------------------------------------------\n");
    // for (int row = 1; row <= rows; row++)
    // {
    //     for (int space = 1; space <= rows - row; space++)
    //         printf(" ");

    //     ch = 'A';
    //     for (int col = 1; col <= row; col++)
    //         printf("%c", ch++);

    //     ch--;
    //     for (int col = 1; col <= row - 1; col++)
    //         printf("%c", --ch);

    //     putch(10);
    // }

    // // 4th Approach
    // int rows;
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);
    // puts("\n--------------------------------------------\n");
    // for (int row = 1; row <= rows; row++)
    // {
    //     for (int space = 1; space <= rows - row; space++)
    //         printf(" ");

    //     for (int col = 1; col <= row; col++)
    //         printf("%c", 'A' - 1 + col);

    //     for (int col = row - 1; col; col--)
    //         printf("%c", 'A' - 1 + col);

    //     putch(10);
    // }

    getch();
    return 0;
}
// Main Function End
