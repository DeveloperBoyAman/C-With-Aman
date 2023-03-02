// C Program to Print Following Pattern

/*

    Pattern 13.

    ABCDEFGFEDCBA
    ABCDEF FEDCBA
    ABCDE   EDCBA
    ABCD     DCBA
    ABC       CBA
    AB         BA
    A           A



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
            if (col <= rows + 1 - row || col >= rows - 1 + row)
                printf("%c", ch);
            else
                putch(' ');
            col < rows ? ch++ : ch--;
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
    //     ch = 'A';
    //     for (int col = 1; col <= rows + 1 - row; col++)
    //         printf("%c", ch++);

    //     ch = row == 1 ? ch - 2 : ch - 1;

    //     for (int space = 1; space <= (row - 1) * 2 - 1; space++)
    //         printf(" ");

    //     for (int col = row == 1 ? rows - 1 : rows + 1 - row; col; col--)
    //         printf("%c", ch--);

    //     putch(10);
    // }

    // // 3rd Approach
    // int rows;
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);
    // puts("\n--------------------------------------------\n");
    // for (int row = 1; row <= rows; row++)
    // {
    //     for (int col = 1; col <= rows + 1 - row; col++)
    //         printf("%c", 'A' - 1 + col);

    //     for (int space = 1; space <= (row - 1) * 2 - 1; space++)
    //         printf(" ");

    //     for (int col = row == 1 ? rows - 1 : rows + 1 - row; col; col--)
    //         printf("%c", 'A' - 1 + col);

    //     putch(10);
    // }

    getch();
    return 0;
}
// Main Function End
