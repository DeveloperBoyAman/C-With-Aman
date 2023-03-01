// C Program to Print Following Pattern

/*

    Pattern  10.

    1 2 3 4 3 2 1
    1 2 3   3 2 1
    1 2       2 1
    1           1



*/

// Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// Main Function Start
int main()
{

    // // 1st Approach
    int rows, cols, num;
    printf("\nHow Many Rows => ");
    scanf("%d", &rows);
    cols = rows * 2 - 1;
    puts("\n--------------------------------------------\n");
    for (int row = 1; row <= rows; row++)
    {
        num = 1;
        for (int col = 1; col <= cols; col++)
        {
            if (col <= rows + 1 - row || col >= rows - 1 + row)
                printf("%d ", num);
            else
                printf("  ");
            col < rows ? num++ : num--;
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

    //     for (int col = 1; col <= rows + 1 - row; col++)
    //         printf("%d ", col);

    //     for (int space = 1; space <= row * 2 - 2; space++)
    //         printf("  ");

    //     for (int col = row == 1 ? rows - 1 : rows + 1 - row; col; col--)
    //         printf("%d ", col);

    //     putch(10);
    // }

    // // 3rd Approach
    // int rows, spacesInEachRow = -1;
    // printf("\nHow Many Rows => ");
    // scanf("%d", &rows);
    // puts("\n--------------------------------------------\n");
    // for (int row = rows; row; row--)
    // {

    //     for (int col = 1; col <= row; col++)
    //         printf("%d ", col);

    //     for (int space = 1; space <= spacesInEachRow; space++)
    //         printf("  ");

    //     spacesInEachRow += 2;

    //     for (int col = row == rows ? row - 1 : row; col; col--)
    //         printf("%d ", col);

    //     putch(10);
    // }

    getch();
    return 0;
}
// Main Function End
