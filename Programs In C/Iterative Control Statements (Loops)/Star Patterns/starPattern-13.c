// Star Pattern

/*

    Pattern 13.

    A B C D E F G F E D C B A
    A B C D E F   F E D C B A
    A B C D E       E D C B A
    A B C D           D C B A
    A B C               C B A
    A B                   B A
    A                       A



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
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);
    // cols = rows * 2 - 1;
    // puts("\n--------------------------------------------\n");
    // char ch = 'A';

    // for (int row = 1; row <= rows; row++)
    // {
    //     for (int col = 1; col <= cols; col++)
    //     {
    //         if (col <= rows + 1 - row || col >= rows - 1 + row)
    //             printf("%c", ch);
    //         else
    //             putch(' ');
    //         col < rows ? ch++ : ch--;
    //     }
    //     ch = 'A';
    //     printf("\n");
    // }

    // // 2nd Approach
    int rows;
    printf("\nHow Many Rows => ");
    scanf("%d", &rows);
    puts("\n--------------------------------------------\n");
    for (int row = 1; row <= rows; row++)
    {

        for (int col = 1; col <= rows + 1 - row; col++)
            printf("%c", 'A' - 1 + col);

        for (int space = 1; space <= (row - 1) * 2 - 1; space++)
            printf(" ");

        for (int col = row == 1 ? rows - row : rows + 1 - row; col >= 1; col--)
            printf("%c", 'A' - 1 + col);

        putch(10);
    }

    getch();
    return 0;
}
// Main Function End
